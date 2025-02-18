# Sample Hardhat Project

This project demonstrates a basic Hardhat use case. It comes with a sample contract, a test for that contract, and a Hardhat Ignition module that deploys that contract.

Try running some of the following tasks:

```shell
npx hardhat help
npx hardhat test
REPORT_GAS=true npx hardhat test
npx hardhat node
npx hardhat ignition deploy ./ignition/modules/Lock.js
```

hal yang harus diperhatikan saat menggunakan file ini
1. versi dependencies harus sesuai dan saling support 
2. gunakan versi terbaru dari nomicfoundation hardhat-toolbox dengan versi eters 6 keatas
3. instal semua dependencies menggunakan npm install.
4. tidak semua hal yang baru atau versi baru itu stabil
5. baca dokumentasi mengenai perubahan sintaks dan penambahan fitur
6. menambahkan deploy.js untuk mendeploy kontrak ke jaringan local hardhat
7. Mengganti deployed() dengan waitForDeployment() untuk kompatibilitas dengan API ethers.js 6.x.
8. Menambahkan log debugging untuk melacak proses deploy: Alamat kontrak dan Hash transaksi deploy.
9. menambahkan konfigurasi di hardhat.config.js
10. jangan gunakan esm (ekstensi .mjs) dalam config hardhat, menimbulkan error jadi aku pake js saja.

eksekusi pake cmd promt aja karena powershell ada batasan
npm install buat install dependencies
npx hardhat compile compile soliditynya
npx hardhat run scripts/deploy.js --network localhost buat deploy ke localhost hardhat
npx hardhat test buat ngetest soliditi make folder test


interaksi make hardhat console
pastikan udah dideploy si hardhat localhost
npx hardhat console --network localhost
const Counter = await ethers.getContractFactory("nama kontrak");
const counter = await Counter.attach("alamat deploy");
await counter.nama fungsi

contoh mau interaksi sama kontrak counter
const Counter = await ethers.getContractFactory("Counter");
const counter = await Counter.attach("0xa513E6E4b8f2a923D98304ec87F64353C4D5C853");
await counter.inc();
await counter.dec();
await counter.superInct();


