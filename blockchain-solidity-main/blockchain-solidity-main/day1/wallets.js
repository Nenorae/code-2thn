import "dotenv/config";
import { ethers } from "ethers";

// Membuat dompet baru secara acak
const wallet = ethers.Wallet.createRandom();

console.log("address:", wallet.address);
console.log("private key:", wallet.privateKey);
console.log("mnemonic:", wallet.mnemonic.phrase);

let path, myWallet;

for (let i = 0; i < 10; i++) {
  path = `m/44'/60'/0'/0/${i}`;
  myWallet = ethers.Wallet.fromMnemonic(wallet.mnemonic.phrase, path);
  console.log("address", i, myWallet.address);
  console.log("private key", i, myWallet.privateKey);
}

const rinkebyInfuraUrl = `https://rinkeby.infura.io/v3/${process.env.INFURA_KEY}`;
const mainnetInfuraUrl = `https://mainnet.infura.io/v3/${process.env.INFURA_KEY}`;
const rinkebyProvider = new ethers.JsonRpcProvider(rinkebyInfuraUrl);
const mainnetProvider = new ethers.JsonRpcProvider(mainnetInfuraUrl);

// Menggunakan private key untuk membuat wallet signer
const signer = new ethers.Wallet(process.env.MY_WALLET_PRIVATE_KEY, rinkebyProvider);

// Mendapatkan saldo di Rinkeby
const myBalance = await rinkebyProvider.getBalance(signer.address);
console.log("Rinkeby balance", ethers.formatEther(myBalance));

// Mendapatkan alamat Ethereum dari nama ENS (sanfordstout.eth)
const sandfordAddress = await mainnetProvider.resolveName("sanfordstout.eth");
console.log("Sending ETH to", sandfordAddress);

// Mengirim ETH ke alamat tujuan
const tx = await signer.sendTransaction({
  to: sandfordAddress,
  value: myBalance / 10n, // Menggunakan BigInt untuk mendukung Ethers v6
});

console.log("TX SENT!", tx);

// Menunggu konfirmasi transaksi
await tx.wait();
console.log("TX CONFIRMED!");

// Menandatangani pesan dengan dompet
const signature = await wallet.signMessage("Hola!");
console.log("Signed message", signature);

// Memverifikasi alamat penandatangan
const signerAddress = ethers.verifyMessage("Hola!", signature);
console.log("signerAddress", signerAddress);
