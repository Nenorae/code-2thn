import hardhat from "hardhat"; // Import default
const { ethers } = hardhat; // Ekstrak `ethers`
import { expect } from "chai";

describe("Counter", function () {
  it("Should return the new count once it's incremented", async function () {
    const [signer0] = await ethers.getSigners();

    console.log("Deploying contract as", signer0.address);
    const Counter = await ethers.getContractFactory("Counter");
    const counter = await Counter.deploy(10);
    await counter.deployed();

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
    const [signer0, signer1] = await ethers.getSigners();

    console.log("Deploying contract as", signer0.address);
    const Counter = await ethers.getContractFactory("Counter");
    const counter = await Counter.deploy(10);
    await counter.deployed();

    // Attempt to decrement from a different signer (signer1)
    await expect(counter.connect(signer1).dec()).to.be.revertedWith("Sorry, not the boss");
  });
});
