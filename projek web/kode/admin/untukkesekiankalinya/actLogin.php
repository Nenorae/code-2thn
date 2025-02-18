<?php
session_start(); // harus ada di bagian paling atas kode
include 'koneksi.php';
$user = strip_tags(trim($_POST['email'])); #echo $user;
$pass = strip_tags(trim($_POST['password'])); #echo $pass;
if ($user != '' and $pass != '') {
    $q = mysqli_query($conn, "SELECT id , password FROM user WHERE email = '" . $user . "'");
    while ($hasil = mysqli_fetch_array($q)) {
        $dpass = $hasil['password'];
        $s_id = $hasil['id'];
    }
    if ($pass == $dpass) {
        unset($_POST); // hapus post form
        header("location: http://localhost/untukkesekiankalinya/index.php");
    } else {
        $konfirmasi = 'User ID atau Password Anda Salah';
        header("location:login.php?konfirmasi=" . $konfirmasi);
    }
} else {
    $konfirmasi = 'User ID atau Password Tidak Boleh Kosong';
    header("location:login.php?konfirmasi=" . $konfirmasi);
}
?>