const { ethers } = require("hardhat");
const { expect } = require("chai");

describe("SanfordToken", function () {
  let token;

  beforeEach(async () => {
    const Token = await ethers.getContractFactory("SanfordToken");
    token = await Token.deploy();
    await token.waitForDeployment();
    console.log("SanfordToken deployed at:", token.target);
  });

  it("Should allow the boss to create tokens", async function () {
    const [signer0] = await ethers.getSigners();
    const createTx = await token.create(100);
    await createTx.wait();
    expect(await token.balances(signer0.address)).to.equal(100);
  });

  it("Should revert if a non-boss tries to create tokens", async function () {
    const [_, signer1] = await ethers.getSigners();
    await expect(token.connect(signer1).create(1)).to.be.revertedWith("Sorry, not the owner");
  });

  it("Should revert if creating more than total supply", async function () {
    
   const maxUint256 = ethers.MaxUint256; // Nilai maksimum uint256 sebagai BigInt
   const nearMaxUint256 = maxUint256 - 100n; // Kurangi 100 agar mendekati batas
   console.log("Near MaxUint256:", nearMaxUint256.toString()); // Debugging log

   // Pastikan kontrak memicu error "totalSupply reached!" dengan jumlah besar
   await expect(token.create(nearMaxUint256 + 1n)).to.be.revertedWith("totalSupply reached!");
  });

  it("Should allow sending tokens", async function () {
    const [signer0, signer1] = await ethers.getSigners();
    const createTx = await token.create(100);
    await createTx.wait();
    expect(await token.balances(signer0.address)).to.equal(100);

    const transferTx = await token.transfer(signer1.address, 25);
    await transferTx.wait();

    expect(await token.balances(signer0.address)).to.equal(75);
    expect(await token.balances(signer1.address)).to.equal(25);
  });

  it("Should allow a user to buy tokens", async function () {
    const [_, signer1] = await ethers.getSigners();
    const buyTx = await token.connect(signer1).buy({
      value: ethers.parseEther("0.01"), // Nilai valid
    });
    await buyTx.wait();
    expect(await token.balances(signer1.address)).to.equal(1);
  });

  it("Should revert if buying with incorrect ETH amount", async function () {
    const [_, signer1] = await ethers.getSigners();
    const buyTx = token.connect(signer1).buy({
      value: ethers.parseEther("0.015"), // Jumlah salah
    });
    await expect(buyTx).to.be.revertedWith("Incorrect ETH amount");
  });
});
