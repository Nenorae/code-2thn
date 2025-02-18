import "dotenv/config";
import { ethers, JsonRpcProvider, parseEther, formatEther } from "ethers";

// BigNumber untuk contoh angka besar
const bigNumberValue = parseEther("5000"); // Mengonversi 5000 ETH ke BigNumber
console.log("BigNumber value:", bigNumberValue.toString()); // Cetak hasil

// URL Infura dengan API Key
const infuraKey = process.env.INFURA_KEY || "6f4c591367eb401ba6a454a4db60b173";
const infuraUrl = `https://mainnet.infura.io/v3/${infuraKey}`;
const provider = new JsonRpcProvider(infuraUrl);

// Fungsi async untuk memproses data
(async () => {
  try {
    console.log("Infura URL:", infuraUrl);

    // Mendapatkan saldo untuk akun Ethereum
    const vitalikBalance = await provider.getBalance("vitalik.eth");
    let sanfordBalance = await provider.getBalance("sanfordstout.eth");

    sanfordBalance = sanfordBalance + parseEther("5000");

    // Format saldo menjadi ETH (string)
    console.log("Sanford balance:", formatEther(sanfordBalance));
    console.log("Vitalik balance:", formatEther(vitalikBalance));

    // Bandingkan saldo Vitalik dan Sanford
    if (BigInt(vitalikBalance) > BigInt(sanfordBalance)) {
      console.log("Vitalik has more ETH than Sanford.");
    } else {
      console.log("Sanford has more ETH than Vitalik.");
    }
  } catch (error) {
    console.error("Error fetching balances:", error.message);
  }
})();
