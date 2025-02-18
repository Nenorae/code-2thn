<?php
include("koneksi.php");
// query untuk mendapatkan jumlah seluruh row
$sql = "SELECT * FROM barang";
$res = mysqli_query($conn, $sql,) or die(mysqli_error($conn));
?>

<!-- Bootstrap core CSS -->
<link href="aset/css/bootstrap.css" rel="stylesheet">

<!-- Add custom CSS here -->
<link href="aset/css/sb-admin.css" rel="stylesheet">
<link rel="stylesheet" href="aset/font-awesome/css/font-awesome.min.css">

<div class="row">
    <div class="col-lg-12">
        <h1>Barang<small> (gudang 01)</small></h1>
        <ol class="breadcrumb">
            <li><a href="index.php"><i class="icon-dashboard"></i> Dashboard</a></li>
        </ol>
    </div>
</div><!-- /.row -->
<div class="row">
    <div class="col-lg-12">
        <div class="table-responsive">
            <table class="table table-bordered table-hover table-striped">
                <tr>
                    
                    <th>No :</th>
                    <th>Kode Seri</th>
                    <th>Action Figure</th>
                    <th>Harga</th>
                    <th>Stok</th>
                    <th>Kondisi Action Figure</th>
                    <th>Hapus Data</th>
                    <th>Update Data</th>
                    
                </tr>
                <?php
                $i = 1;
                while ($data = mysqli_fetch_array($res)) {
                    if ($i % 2 == 0) $bg = '#CCCCCC';
                    else $bg = '#FFFFFF';
                    echo "<tr bgcolor = '" . $bg . "'>
                        <td>" . $i . "</td>
                        <td>" . $data["nomor"] . "</td>
                        <td>" . $data["nama"] . "</td>
                        <td>" . $data["harga"] . "</td>
                        <td>" . $data["stok"] . "</td>
                        <td>" . $data["kondisi"] . "</td>
                        <td align=center><a href='view/hapus.php?nomor=" . $data[0] . "'>Hapus </a></td>
                        <td align=center><a href='view/edit.php?nomor=" . $data[0] . "'>Edit </a></td>
                    </tr>";

                    $i++;
                }
                ?>
            </table>
        </div>
    </div>
</div>