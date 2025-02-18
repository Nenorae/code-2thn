<?php
include("koneksi.php");

$msg = '';
// mengambil data pegawai yang akan diedit
$q = "SELECT * FROM barang WHERE nomor = '" . $_GET['nomor'] . "'";
$r = mysqli_query($conn, $q) or die($q);
$d = mysqli_fetch_array($r);
/*
proses penyimpanan update
*/
if (array_key_exists('nomor', $_POST)) {
    $nomor = $_POST['nomor'];
    $nama = $_POST['nama'];
    $harga = $_POST['harga'];
    $stok = $_POST['stok'];
    $kondisi = $_POST['kondisi'];
    $q = "UPDATE barang SET nomor = '" . $nomor . "', nama = '" . $nama . "', harga = '" . $harga . "', stok = '" . $stok . "', kondisi = '" . $kondisi . "' WHERE nomor = '" . $nomor . "'";
    $r = mysqli_query($conn, $q) or die(mysqli_error($conn));
    if ($r) {
        header("location: http://localhost/untukkesekiankalinya/index.php?page=barang");
    } else {
        echo "<script>alert('Update anda gagal :)')</script>";
    }
}
?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edit</title>
    <!-- Bootstrap core CSS -->
    <link href="aset/css/bootstrap.css" rel="stylesheet">

    <!-- Add custom CSS here -->
    <link href="aset/css/sb-admin.css" rel="stylesheet">
    <link rel="stylesheet" href="aset/font-awesome/css/font-awesome.min.css">
</head>

<body>
    <h1>Update Data</h1>

    <br><br>
    <form action="edit.php?nomor=<?php echo $_GET['nomor']; ?>" method="POST">
        <div class="table-responsive">
            <table class="table table-bordered table-hover table-striped">
                <?php
                if ($msg != '') {
                    echo "
                            <tr>
                                <td> </td>
                                <td> $msg </td>
                            </tr>";
                }
                ?>
                <tr>
                    <td> Kode Action Figure </td>
                    <td> <input type='number' name='nomor' value='<?= $d[0]; ?>'> </td>
                </tr>
                <tr>
                    <td> Model Action Figure </td>
                    <td> <input type='text' name='nama' value='<?= $d[1]; ?>'> </td>
                </tr>
                <tr>
                    <td> Harga </td>
                    <td> <input type='number' name='harga' value='<?= $d[2]; ?>'> </td>
                </tr>
                <tr>
                    <td> Stok </td>
                    <td> <input type='number' name='stok' value='<?= $d[3]; ?>'> </td>
                </tr>
                <tr>
                    <td> Kondisi </td>
                    <td> <input type='text' name='kondisi' value='<?= $d[4]; ?>'> </td>
                </tr>
                <tr>
                    <td>
                        <input type='Submit' name='simpan' value='Simpan' class="btn btn-success">
                    </td>
                    <td>
                        <input type='Reset' name='reset' value='Reset' class="btn btn-danger">
                    </td>
                </tr>
            </table>
        </div>
    </form>
</body>

</html>