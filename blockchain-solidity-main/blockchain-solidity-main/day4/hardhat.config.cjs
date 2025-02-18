import "@nomicfoundation/hardhat-toolbox";
import dotenv from "dotenv";

dotenv.config();

export default {
  solidity: "0.8.13",
  networks: {
    hardhat: {
      chainId: 1337,
    },
    // goerli: {
    //   url: process.env.GOERLI_RPC_URL, // Tambahkan RPC URL di .env
    //   accounts: [process.env.PRIVATE_KEY], // Tambahkan private key di .env
    // },
  },
  mocha: {
    timeout: 20000,
  },
};
