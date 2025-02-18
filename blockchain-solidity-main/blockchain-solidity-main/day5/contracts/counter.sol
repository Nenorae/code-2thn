// SPDX-License-Identifier: MIT
pragma solidity ^0.8.13;

contract Counter {
    uint256 public count; // Counter variable
    address public immutable boss; // Immutable boss address

    // Constructor: Sets initial count and boss address
    constructor(uint256 _initialCount) {
        count = _initialCount;
        require(msg.sender != address(0), "Invalid boss address");
        boss = msg.sender;
    }

    // Modifier: Restrict access to only the boss
    modifier onlyBoss() {
        require(msg.sender == boss, "Sorry, not the boss");
        _;
    }

    // Function: Increment count by 1
    function inc() public {
        count += 1;
    }

    // Function: Increment count by 10 (only for the boss)
    function superInc() public onlyBoss {
        count += 10;
    }

    // Function: Decrement count by 1 (only for the boss)
    function dec() public onlyBoss {
        require(count > 0, "Count is already zero");
        count -= 1;
    }
}
