import { expect } from "chai";
import hardhat from "hardhat"; // Import default
const { ethers } = hardhat;

describe("SanfordToken", function () {
  let token;

  // Deploy token before each test
  beforeEach(async () => {
    const Token = await ethers.getContractFactory("SanfordToken");
    token = await Token.deploy();
    await token.deployed();
  });

  it("Should allow the boss to create tokens", async function () {
    const [signer0] = await ethers.getSigners();

    const createTx = await token.create(100);
    await createTx.wait();

    expect(await token.balances(signer0.address)).to.equal(100);
  });

  it("Should revert if a non-boss tries to create tokens", async function () {
    const [_, signer1] = await ethers.getSigners(); // Skip signer0

    const createTx = token.connect(signer1).create(1);

    await expect(createTx).to.be.revertedWith("Sorry, not the boss");
  });

  it("Should revert if creating more than total supply", async function () {
    const totalSupply = await token.totalSupply();

    const createTx = token.create(totalSupply.add(100)); // Attempt to exceed supply

    await expect(createTx).to.be.revertedWith("totalSupply reached!");
  });

  it("Should allow sending tokens", async function () {
    const [signer0, signer1] = await ethers.getSigners();

    const createTx = await token.create(100);
    await createTx.wait();

    // Verify initial balances
    expect(await token.balances(signer0.address)).to.equal(100);

    const sendTx = await token.send(signer1.address, 25);
    await sendTx.wait();

    // Verify updated balances
    expect(await token.balances(signer0.address)).to.equal(75);
    expect(await token.balances(signer1.address)).to.equal(25);
  });

  it("Should allow a user to buy tokens", async function () {
    const [_, signer1] = await ethers.getSigners(); // Skip signer0

    const buyTx = await token.connect(signer1).buy({
      value: ethers.utils.parseEther("0.01"),
    });
    await buyTx.wait();

    expect(await token.balances(signer1.address)).to.equal(1);
  });

  it("Should revert if buying with incorrect ETH amount", async function () {
    const [_, signer1] = await ethers.getSigners(); // Skip signer0

    const buyTx = token.connect(signer1).buy({
      value: ethers.utils.parseEther("0.02"), // Wrong amount
    });

    await expect(buyTx).to.be.revertedWith("Incorrect ETH amount");
  });
});
