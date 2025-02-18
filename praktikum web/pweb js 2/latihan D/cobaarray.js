const produk = [
    { nama: "baju", harga: 100000, terjual: 5 },
    { nama: "celana", harga: 150000, terjual: 3 },
    { nama: "sepatu", harga: 250000, terjual: 4 }
];

let totalpenjualan = 0;
console.log("laporan penjualan:");

// menggunakan perulangan untuk menghitung dan menampilkan penjualan setiap produk
for (let item of produk) {
    let penjualanproduk = item.harga * item.terjual;
    totalpenjualan += penjualanproduk;

    console.log(`${item.nama} - terjual: ${item.terjual} - total: ${penjualanproduk}`);
}

console.log("------------------");
console.log(`total seluruh penjualan: ${totalpenjualan}`);
