<?php
try {
    $conn = mysqli_connect("localhost", "root", "") or die("SERVER DOWN");
    $db = mysqli_select_db($conn, "tokogundam") or die("DATABASE TIDAK ADA");
} catch (\Throwable $th) {
    throw $th;
}
?>

<?php
$q = "DELETE FROM barang WHERE nomor = '" . $_GET['nomor'] . "'";
$r = mysqli_query($conn, $q) or die(mysqli_error($conn));
header("location: http://localhost/untukkesekiankalinya/index.php?page=barang");
?>