require("dotenv").config();
require("@nomiclabs/hardhat-waffle");

// This is a sample Hardhat task. To learn how to create your own go to
// https://hardhat.org/guides/create-task.html
task("accounts", "Prints the list of accounts", async (taskArgs, hre) => {
  const accounts = await hre.ethers.getSigners();

  for (const account of accounts) {
    console.log(account.address);
  }
});

// You need to export an object to set up your config
// Go to https://hardhat.org/config/ to learn more

/**
 * @type import('hardhat/config').HardhatUserConfig
 */
module.exports = {
  solidity: "0.8.4",
  networks: {

    localhost: {
      url: "http://127.0.0.1:8545"},
    // rinkeby: {
    //   url: `https://sepolia.infura.io/v3/${process.env.INFURA_KEY}`,
    //   accounts: [process.env.MY_WALLET_PRIVATE_KEY],
    // },
  },
};
