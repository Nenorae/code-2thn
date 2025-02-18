// We require the Hardhat Runtime Environment explicitly here. This is optional
// but useful for running the script in a standalone fashion through `node <script>`.
//
// When running the script with `npx hardhat run <script>` you'll find the Hardhat
// Runtime Environment's members available in the global scope.
const hre = require("hardhat");
const { ethers, BigNumber } = require("ethers");
const fs = require("fs");
const path = require("path");

// async function main() {
//   const contractAddress = "0x5FbDB2315678afecb367f032d93F642f64180aa3";
//   const greeter = await hre.ethers.getContractAt("Greeter", contractAddress);

//   //console.log("Initial greeting", await greeter.greet());

//   // Debugging: Pastikan kontrak terhubung
//   console.log("Connected to contract at:", greeter.address);

//   // Cek greeting awal
//   try {
//     const initialGreeting = await greeter.greet();
//     console.log("Initial greeting:", initialGreeting);
//   } catch (error) {
//     console.error("Error saat memanggil greet():", error.message);
//     return;
//   }

//   console.log("Setting greeting....");
//   try {
//     const setTx = await greeter.setGreeting("Is this working??");
//     await setTx.wait();
//     console.log("Greeting updated!");

//     // Cek greeting baru
//     const newGreeting = await greeter.greet();
//     console.log("New greeting:", newGreeting);
//   } catch (error) {
//     console.error("Error saat mengatur atau membaca greeting baru:", error.message);
//   }
// }

// // We recommend this pattern to be able to use async/await everywhere
// // and properly handle errors.
// main()
//   .then(() => process.exit(0))
//   .catch((error) => {
//     console.error("Fatal error:", error.message);
//     process.exit(1);
//   });

// 




// main().catch((error) => {
//   console.error("Fatal error:", error.message);
//   process.exit(1);
// });



async function main() {
  const contractAddress = "0x5FbDB2315678afecb367f032d93F642f64180aa3";

  // Load ABI dari artifacts
  const abiPath = path.join(__dirname, "../artifacts/contracts/Greeter.sol/Greeter.json");
  const contractJson = JSON.parse(fs.readFileSync(abiPath, "utf8"));
  const contractAbi = contractJson.abi;

  // Log ABI untuk verifikasi
  console.log("Loaded ABI:", contractAbi);

  // Hubungkan ke provider Hardhat
  const provider = hre.ethers.provider;

  // Validasi provider dan jaringan
  const network = await provider.getNetwork();
  console.log("Provider:", provider.connection.url);
  console.log("Network:", network);

  // Hubungkan ke kontrak menggunakan ABI dan provider
  const greeter = new hre.ethers.Contract(contractAddress, contractAbi, provider);
  console.log("Contract address:", greeter.address);
  console.log("Contract ABI methods:", Object.keys(greeter.functions));

  // Coba panggil fungsi greet()
  try {
    console.log("Attempting to call greet()...");
    const greeting = await greeter.greet();
    console.log("Greeting:", greeting);
  } catch (error) {
    console.error("Error saat memanggil greet():", error.message);
    console.error("Detail:", error);
    return;
  }

  // Hubungkan ke signer untuk memodifikasi greeting
  const [signer] = await hre.ethers.getSigners();
  const greeterWithSigner = greeter.connect(signer);

  // Set greeting baru
  console.log("Setting new greeting...");
  try {
    const tx = await greeterWithSigner.setGreeting("Hello from combined script!");
    console.log("Transaction hash:", tx.hash);
    await tx.wait();
    console.log("Greeting updated!");

    // Cek greeting baru
    const newGreeting = await greeter.greet();
    console.log("New greeting:", newGreeting);
  } catch (error) {
    console.error("Error saat mengatur atau membaca greeting baru:", error.message);
    console.error("Detail:", error);
  }
}

main().catch((error) => {
  console.error("Fatal error:", error.message);
  process.exit(1);
});
