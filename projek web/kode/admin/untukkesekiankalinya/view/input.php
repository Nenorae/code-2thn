<!-- Bootstrap core CSS -->
<link href="aset/css/bootstrap.css" rel="stylesheet">

<!-- Add custom CSS here -->
<link href="aset/css/sb-admin.css" rel="stylesheet">
<link rel="stylesheet" href="aset/font-awesome/css/font-awesome.min.css">

<div class="row">
    <div class="col-lg-12">
        <h1>Restok Action Figure<small> (gudang 01)</small></h1>
        <ol class="breadcrumb">
            <li><a href="index.php"><i class="icon-dashboard"></i> Dashboard</a></li>
        </ol>
    </div>
</div><!-- /.row -->

<?php
include("koneksi.php");
$msg = '';
if (array_key_exists('nomor', $_POST)) {
    $nomor = $_POST['nomor'];
    if ($nomor != '') {
        $nama = $_POST['nama'];
        $harga = $_POST['harga'];
        $stok = $_POST['stok'];
        $kondisi = $_POST['kondisi'];
        $q = "INSERT INTO barang VALUES ('$nomor','$nama','$harga','$stok','$kondisi')";
        $r = mysqli_query($conn, $q) or die(mysqli_error($conn));
        if ($r) {
            echo "<script>alert('Upload anda succes :)')</script>";
            header("location: ?page=input");
        } else {
            echo "<script>alert('Upload anda gagal :)')</script>";
        }
    }
}
?>

<body>
    <br><br>
    <form action="" method="POST">
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
                    <td> <input type='number' name='nomor'> </td>
                </tr>
                <tr>
                    <td> Model Action Figure </td>
                    <td> <input type='string' name='nama'> </td>
                </tr>
                <tr>
                    <td> Harga </td>
                    <td> <input type='number' name='harga'> </td>
                </tr>
                <tr>
                    <td> Stok </td>
                    <td> <input type='number' name='stok'> </td>
                </tr>
                <tr>
                    <td> Kondisi </td>
                    <td> <input type='string' name='kondisi'> </td>
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