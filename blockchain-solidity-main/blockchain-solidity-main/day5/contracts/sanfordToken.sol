// SPDX-License-Identifier: MIT
pragma solidity ^0.8.28;

contract SanfordToken {
    string public name = "Sanford Token";
    string public symbol = "SFT";
    uint8 public decimals = 18;
    uint256 public totalSupply;
    address public owner;

    mapping(address => uint256) public balances;

    constructor() {
        owner = msg.sender;
    }

    modifier onlyOwner() {
        require(msg.sender == owner, "Sorry, not the owner");
        _;
    }

    function create(uint256 _amount) public onlyOwner {
        require(totalSupply + _amount <= type(uint256).max, "totalSupply reached!");
        totalSupply += _amount;
        balances[owner] += _amount;
    }

    function transfer(address _to, uint256 _amount) public {
        require(balances[msg.sender] >= _amount, "Insufficient balance");
        balances[msg.sender] -= _amount;
        balances[_to] += _amount;
    }

    function buy() public payable {
        uint256 amount = msg.value / 0.01 ether; // Konversi ETH ke token
        require(amount > 0 && msg.value % 0.01 ether == 0, "Incorrect ETH amount");
        require(amount > 0, "incorect eth ammount");
        balances[msg.sender] += amount;
        totalSupply += amount;
    }
}
