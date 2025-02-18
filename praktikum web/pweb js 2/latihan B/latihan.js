function konversiNilai(nilai) {
    if (nilai >= 80 && nilai <= 100) {
        return 'A';
    } else if (nilai >= 70 && nilai <= 79) {
        return 'B';
    } else if (nilai >= 50 && nilai <= 69) {
        return 'C';
    } else {
        return 'D';
    }
}

// Contoh penggunaan
var nilai = 85; // Gantilah nilai ini sesuai dengan nilai yang ingin Anda konversi
var nilaiHuruf = konversiNilai(nilai);
console.log('Nilai:', nilai);
console.log('Nilai dalam huruf:', nilaiHuruf);
