const hre = require("hardhat");

async function main() {
  // Deploy Counter contract
  console.log("Getting Counter contract factory...");
  const Counter = await hre.ethers.getContractFactory("Counter");
  console.log("Deploying Counter...");
  const counter = await Counter.deploy(10); // Pass the constructor argument
  await counter.waitForDeployment(); // Tunggu konfirmasi deploy
  console.log("Counter deployed at:", counter.target); // Dapatkan alamat kontrak

  // Deploy Counter contract
  console.log("Getting Counter contract factory...");
  const Lock = await hre.ethers.getContractFactory("Lock");
  console.log("Deploying Counter...");
  const lock = await Counter.deploy(10); // Pass the constructor argument
  await counter.waitForDeployment(); // Tunggu konfirmasi deploy
  console.log("lock deployed at:", lock.target); // Dapatkan alamat kontrak

  // Deploy SanfordToken contract
  console.log("Getting SanfordToken contract factory...");
  const SanfordToken = await hre.ethers.getContractFactory("SanfordToken");
  console.log("Deploying SanfordToken...");
  const token = await SanfordToken.deploy();
  await token.waitForDeployment(); // Tunggu konfirmasi deploy
  console.log("SanfordToken deployed at:", token.target); // Dapatkan alamat kontrak
}

main()
  .then(() => process.exit(0))
  .catch((error) => {
    console.error("Error in deployment:", error);
    process.exit(1);
  });
