// SPDX-License-Identifier: MIT
pragma solidity ^0.8.13;

contract SanfordToken {
    event Buy(address indexed buyer);

    uint256 public constant totalSupply = 1000;
    uint256 public totalCreated = 0;

    uint256 public constant CREATION_PRICE = 0.01 ether;

    address public immutable boss;

    mapping(address => uint256) public balances;

    struct Vote {
        address voter;
        bool selection;
    }

    Vote[] public votes;

    constructor() {
        boss = msg.sender;
    }

    modifier onlyBoss() {
        require(msg.sender == boss, "Sorry, not the boss");
        _;
    }

    function create(uint256 quantity) public onlyBoss {
        require(quantity > 0, "Quantity must be greater than 0");
        require(quantity + totalCreated <= totalSupply, "totalSupply reached!");

        balances[msg.sender] += quantity;
        totalCreated += quantity;
    }

    function send(address to, uint256 quantity) public {
        require(to != address(0), "Invalid recipient address");
        require(balances[msg.sender] >= quantity, "You don't have enough");

        balances[msg.sender] -= quantity;
        balances[to] += quantity;
    }

    function buy() public payable {
        require(msg.value >= CREATION_PRICE, "Incorrect ETH amount");
        require(totalCreated < totalSupply, "totalSupply reached!");

        balances[msg.sender] += 1;
        totalCreated += 1;

        if (msg.value > CREATION_PRICE) {
            payable(msg.sender).transfer(msg.value - CREATION_PRICE);
        }

        emit Buy(msg.sender);
    }

    function withdraw() public onlyBoss {
        uint256 balance = address(this).balance;
        require(balance > 0, "No Ether to withdraw");
        (bool sent, ) = boss.call{value: balance}("");
        require(sent, "Failed to send Ether");
    }

    receive() external payable {
        emit Buy(msg.sender); // Log Ether received
    }
}
