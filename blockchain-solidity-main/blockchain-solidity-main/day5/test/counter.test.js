// counter.test.js
const { ethers } = require("hardhat");
const { expect } = require("chai");

describe("Counter", function () {
  let Counter;
  let counter;
  let signer0;
  let signer1;

  beforeEach(async function () {
    // Get signers
    [signer0, signer1] = await ethers.getSigners();

    // Get contract factory
    Counter = await ethers.getContractFactory("Counter");

    // Deploy contract
    counter = await Counter.deploy(10);
    await counter.waitForDeployment(); // Tunggu deploy selesai
    console.log("Counter contract deployed at:", counter.target);
  });

  it("Should return the new count once it's incremented", async function () {
    console.log("Deploying contract as", signer0.address);

    // Initial count check
    expect(await counter.count()).to.equal(10);

    // Increment
    const incTx = await counter.inc();
    await incTx.wait();

    // Count after increment
    expect(await counter.count()).to.equal(11);

    // Verify the boss address
    expect(await counter.boss()).to.equal(signer0.address);
  });

  it("Should handle decrement correctly", async function () {
    console.log("Deploying contract as", signer0.address);

    // Attempt to decrement from a different signer (signer1)
    await expect(counter.connect(signer1).dec()).to.be.revertedWith("Sorry, not the boss");
  });

  it("Should allow boss to decrement", async function () {
    // Initial count check
    expect(await counter.count()).to.equal(10);

    // Decrement as boss
    const decTx = await counter.dec();
    await decTx.wait();

    // Check count after decrement
    expect(await counter.count()).to.equal(9);
  });
});
