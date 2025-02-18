<?php
include("koneksi.php");
// query untuk mendapatkan jumlah seluruh row
$sql = "SELECT * FROM barang";
$res = mysqli_query($conn, $sql,) or die(mysqli_error($conn));
?>

<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="utf-8">
  <meta content="width=device-width, initial-scale=1.0" name="viewport">

  <title>Sinend Shop</title>
  <meta content="" name="description">
  <meta content="" name="keywords">

  <!-- Favicons -->
  <link href="img/Hidan.png" rel="icon">

  <!-- Google Fonts -->
  <link href="https://fonts.googleapis.com/css?family=Open+Sans:300,300i,400,400i,600,600i,700,700i|Nunito:300,300i,400,400i,600,600i,700,700i|Poppins:300,300i,400,400i,500,500i,600,600i,700,700i" rel="stylesheet">

  <!-- Vendor CSS Files -->
  <link href="assets/vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
  <link href="assets/vendor/bootstrap-icons/bootstrap-icons.css" rel="stylesheet">
  <link href="assets/vendor/boxicons/css/boxicons.min.css" rel="stylesheet">
  <link href="assets/vendor/glightbox/css/glightbox.min.css" rel="stylesheet">
  <link href="assets/vendor/remixicon/remixicon.css" rel="stylesheet">
  <link href="assets/vendor/swiper/swiper-bundle.min.css" rel="stylesheet">

  <!-- Template Main CSS File -->
  <link href="assets/css/style.css" rel="stylesheet">
</head>

<body>

  <!-- ======= Header ======= -->
  <header id="header" class="fixed-top ">
    <div class="container d-flex align-items-center justify-content-between">

      <h1 class="logo"><a href="index.html">Sinend Shop </a></h1>
      <!-- Uncomment below if you prefer to use an image logo -->
      <!-- <a href="index.html" class="logo"><img src="assets/img/logo.png" alt="" class="img-fluid"></a>-->

      <nav id="navbar" class="navbar">
        <ul>
          <li><a class="nav-link scrollto active" href="#hero">Home</a></li>
          <li><a class="nav-link scrollto" href="#about">About</a></li>
          <li><a class="nav-link scrollto " href="#services">Produk</a></li>
          <li><a class="nav-link scrollto" href="#team">Pengelola</a></li>
          <li><a class="nav-link scrollto" href="#contact">Kontak</a></li>
          <li><a class="nav-link scrollto" href="http://localhost/untukkesekiankalinya/login.php">Admin</a></li>
        </ul>
        <i class="bi bi-list mobile-nav-toggle"></i>
      </nav><!-- .navbar -->

    </div>
  </header><!-- End Header -->

  <!-- ======= Hero Section ======= -->
  <section id="hero">
    <div class="hero-container">
      <h3>Welcome to <strong>Sinend shop</strong></h3>
      <h1>Cari Waifu mu disini</h1>
      <h2>Di jamin kualitas terbaik dan tentunya sudah 3d</h2>
      <a href="#about" class="btn-get-started scrollto">Letss swimmm</a>
    </div>
  </section><!-- End Hero -->

  <main id="main">

    <!-- ======= About Section ======= -->
    <section id="about" class="about">
      <div class="container">

        <div class="section-title">
          <h2>Toko Action Figure sinend</h2>
          <h3>Dibentuk <span>Tahun 2023</span></h3>
        </div>

        <div class="row content">
          <div class="col-lg-6">
            <p>
              Toko kami juga memiliki beberapa kelebihan di antaranya sebagi berikut
            </p>
            <ul>
              <li><i class="ri-check-double-line"></i> Pelayanan yang kami berikan sudah pasti sangat baik</li>
              <li><i class="ri-check-double-line"></i> Bila terdapat kerusakan pada barang yang kami jual kami bersedia
                mengganti 100% uang yang anda gunakan untuk membeli</li>
              <li><i class="ri-check-double-line"></i> Kami juga bisa melanyani pesanan barang limited edition</li>
            </ul>
          </div>
          <div class="col-lg-6 pt-4 pt-lg-0">
            <p>
              Berikut adalah sedikit keunggulan dari toko kami dan jika anda berminat untuk
              ke toko kami dan membeli barang di toko kami anda sudah pasti tidak akan kecewa dengan
              kualitas barang yang kami jual. Untuk informasi lebih lengkap silakan scroll ke bawah
            </p>
            <a href="#" class="btn-learn-more">Learn More</a>
          </div>
        </div>

      </div>
    </section><!-- End About Section -->

    <!-- ======= Services Section ======= -->
    <section id="services" class="services">
      <div class="container">
        <div class="section-title">
          <h2>Stok Product</h2>
          <h3>Berikut adalah stok <span>yang ada dalam toko kami</span></h3>
          <p>Dan produk yang sudah di jual disini dijamin aman dari yang namanya ilegal, dan sudah 100% original !!</p>

          <div class="row">
            <div class="row">
              <div>
                <div class="table-responsive" style="margin: 10px; padding-top:10px;">
                  <table class="table table-bordered">
                    <tr>

                      <th>No :</th>
                      <th>Kode Seri</th>
                      <th>Action Figure</th>
                      <th>Harga</th>
                      <th>Stok</th>
                      <th>Kondisi Action Figure</th>

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
                    </tr>";

                      $i++;
                    }
                    ?>
                  </table>
                </div>
              </div>
            </div>
          </div>

        </div>
      </div>
    </section><!-- End Services Section -->

    <!-- ======= Cta Section ======= -->
    <section id="cta" class="cta">
      <div class="container">

        <div class="text-center">
          <h3>Untuk pemesanan bisa melalui tombol di bawah ini</h3>
          <p>Untuk pemesanan kami menggunakan metode dimana client harus menghubungi seller karena alasan kondisi keamanan dari barang</p>
          <a class="cta-btn" href="https://web.whatsapp.com/">Hubungi Disini</a>
        </div>

      </div>
    </section><!-- End Cta Section -->

    <!-- ======= Portfolio Section ======= -->
    <section id="portfolio" class="portfolio">
      <div class="container">

        <div class="section-title">
          <h2>Gambar</h2>
          <h3>Gambar Action <span>Figure</span></h3>
          <p>Berikut adalah contoh gambar dari produk yang kami buat</p>
        </div>

        <div class="row">
          <div class="col-lg-12 d-flex justify-content-center">
            <ul id="portfolio-flters">
              <li data-filter="*" class="filter-active">All</li>
              <li data-filter=".filter-app">Gundam</li>
              <li data-filter=".filter-card">Genshin</li>
              <li data-filter=".filter-web">Naruto</li>
            </ul>
          </div>
        </div>

        <div class="row portfolio-container">

          <!-- etalase gundam 1 -->
          <div class="col-lg-4 col-md-6 portfolio-item filter-app">
            <img src="img/Ariel.png" class="img-fluid" alt="">
            <div class="portfolio-info">
              <h4>Ariel</h4>
              <p>Rp 168.000</p>
              <a href="img/Ariel.png" data-gallery="portfolioGallery" class="portfolio-lightbox preview-link" title="Rp 168.000"><i class="bx bx-plus"></i></a>
              <a href="#" class="details-link" title="More Details"><i class="bx bx-link"></i></a>
            </div>
          </div>

          <!-- etalase naruto -->
          <div class="col-lg-4 col-md-6 portfolio-item filter-web">
            <img src="img/Hidan.png" class="img-fluid" alt="">
            <div class="portfolio-info">
              <h4>Hiddan</h4>
              <p>Rp 256.000</p>
              <a href="img/Hidan.png" data-gallery="portfolioGallery" class="portfolio-lightbox preview-link" title="Rp 256.000"><i class="bx bx-plus"></i></a>
              <a href="#" class="details-link" title="More Details"><i class="bx bx-link"></i></a>
            </div>
          </div>

          <!-- etalase gundam 02 -->
          <div class="col-lg-4 col-md-6 portfolio-item filter-app">
            <img src="img/Astray Red Frame.png" class="img-fluid" alt="">
            <div class="portfolio-info">
              <h4>HG Astray Red Frame</h4>
              <p>Rp 602.500</p>
              <a href="img/Astray Red Frame.png" data-gallery="portfolioGallery" class="portfolio-lightbox preview-link" title="Rp 602.500"><i class="bx bx-plus"></i></a>
              <a href="#" class="details-link" title="More Details"><i class="bx bx-link"></i></a>
            </div>
          </div>

          <!-- etalase gensin -->
          <div class="col-lg-4 col-md-6 portfolio-item filter-card">
            <img src="img/Xiao.png" class="img-fluid" alt="">
            <div class="portfolio-info">
              <h4>xiao</h4>
              <p>Rp 567.000</p>
              <a href="img/Xiao.png" data-gallery="portfolioGallery" class="portfolio-lightbox preview-link" title="Rp 567.000"><i class="bx bx-plus"></i></a>
              <a href="#" class="details-link" title="More Details"><i class="bx bx-link"></i></a>
            </div>
          </div>

          <!-- etalase naruto -->
          <div class="col-lg-4 col-md-6 portfolio-item filter-web">
            <img src="img/kakasi.png" class="img-fluid" alt="">
            <div class="portfolio-info">
              <h4>Hatake Kakashi</h4>
              <p>Rp702.000</p>
              <a href="img/kakasi.png" data-gallery="portfolioGallery" class="portfolio-lightbox preview-link" title="Rp702.000"><i class="bx bx-plus"></i></a>
              <a href="#" class="details-link" title="More Details"><i class="bx bx-link"></i></a>
            </div>
          </div>

          <!-- etalase gundam 3 -->
          <div class="col-lg-4 col-md-6 portfolio-item filter-app">
            <img src="img/Srtike Fredom Burst Mode.png" class="img-fluid" alt="">
            <div class="portfolio-info">
              <h4>HG Strike Fredom Burst Mode</h4>
              <p>Rp 2.068.502</p>
              <a href="img/Srtike Fredom Burst Mode.png" data-gallery="portfolioGallery" class="portfolio-lightbox preview-link" title="Rp 2.068.502"><i class="bx bx-plus"></i></a>
              <a href="portfolio-details.html" class="details-link" title="More Details"><i class="bx bx-link"></i></a>
            </div>
          </div>

          <!-- etalase gensin2 -->
          <div class="col-lg-4 col-md-6 portfolio-item filter-card">
            <img src="img/senhe1.png" class="img-fluid" alt="">
            <div class="portfolio-info">
              <h4>Shenhe</h4>
              <p>Rp 3.670.000</p>
              <a href="img/senhe1.png" data-gallery="portfolioGallery" class="portfolio-lightbox preview-link" title="Rp 3.670.000"><i class="bx bx-plus"></i></a>
              <a href="portfolio-details.html" class="details-link" title="More Details"><i class="bx bx-link"></i></a>
            </div>
          </div>

          <!-- etalase gensin 3 -->
          <div class="col-lg-4 col-md-6 portfolio-item filter-card">
            <img src="img/kecing.png" class="img-fluid" alt="">
            <div class="portfolio-info">
              <h4>Keqing</h4>
              <p>Rp 1.238.000</p>
              <a href="img/kecing.png" data-gallery="portfolioGallery" class="portfolio-lightbox preview-link" title="Rp 1.238.000"><i class="bx bx-plus"></i></a>
              <a href="portfolio-details.html" class="details-link" title="More Details"><i class="bx bx-link"></i></a>
            </div>
          </div>

          <!-- etalase naruto 3 -->
          <div class="col-lg-4 col-md-6 portfolio-item filter-web">
            <img src="img/Untitled-tobi.png" class="img-fluid" alt="">
            <div class="portfolio-info">
              <h4>Tobi</h4>
              <p>Rp 803.000</p>
              <a href="img/Untitled-tobi.png" data-gallery="portfolioGallery" class="portfolio-lightbox preview-link" title="Rp 803.000"><i class="bx bx-plus"></i></a>
              <a href="portfolio-details.html" class="details-link" title="More Details"><i class="bx bx-link"></i></a>
            </div>
          </div>

        </div>
      </div>
    </section><!-- End Portfolio Section -->

    <!-- ======= F.A.Q Section ======= -->
    <section id="faq" class="faq">
      <div class="container">

        <div class="section-title">
          <h2>F.A.Q</h2>
          <h3>Frequently Asked <span>Questions</span></h3>
        </div>

        <ul class="faq-list">

          <li>
            <div data-bs-toggle="collapse" class="collapsed question" href="#faq1">Apakah kualitas di toko ini sangat terjamin? <i class="bi bi-chevron-down icon-show"></i><i class="bi bi-chevron-up icon-close"></i></div>
            <div id="faq1" class="collapse" data-bs-parent=".faq-list">
              <p>
                Tentu kami sangat menjamin kualitas dari setiap action figure yang kami jual, di jamin mulus no lecet2 collator_get_attribute
                walau dalam kondisi second hand
              </p>
            </div>
          </li>

          <li>
            <div data-bs-toggle="collapse" href="#faq2" class="collapsed question">apakah kita sebagi buyer bisa meminta pengembalian dan jika barang yang
              kita terima tidak sesuai ? <i class="bi bi-chevron-down icon-show"></i><i class="bi bi-chevron-up icon-close"></i></div>
            <div id="faq2" class="collapse" data-bs-parent=".faq-list">
              <p>
                Tentu kami akan mengembalikan dana yang kalian banyarkan 100% jika barang yang anda terima tidak sesuai
              </p>
            </div>
          </li>

          <li>
            <div data-bs-toggle="collapse" href="#faq3" class="collapsed question">Kenapa transaksi nya harus menggunakan pihak ketiga ? <i class="bi bi-chevron-down icon-show"></i><i class="bi bi-chevron-up icon-close"></i></div>
            <div id="faq3" class="collapse" data-bs-parent=".faq-list">
              <p>
                Karena rata rata barang yang kami jual tergolong barang limited edition dan untuk menghindari
                hal yang tidak terduga kami menggunakan metode transaksi dengan pihak ketiga
              </p>
            </div>
          </li>

          <li>
            <div data-bs-toggle="collapse" href="#faq4" class="collapsed question">Apakah kita bisa custom sebuah action figure kita sendiri ? <i class="bi bi-chevron-down icon-show"></i><i class="bi bi-chevron-up icon-close"></i></div>
            <div id="faq4" class="collapse" data-bs-parent=".faq-list">
              <p>
                Tentu, kami akan melayani prmintaan tersebut tapi untuk desain anda harus membuatnya sendiri
              </p>
            </div>
          </li>
        </ul>

      </div>
    </section><!-- End F.A.Q Section -->

    <!-- ======= Team Section ======= -->
    <section id="team" class="team">
      <div class="container">

        <div class="section-title">
          <h2>Team</h2>
          <h3>Sinend team <span>Shop</span></h3>
          <p></p>
        </div>

        <div class="row">

          <!-- Aku -->
          <div class="col-lg-3 col-md-6 d-flex align-items-stretch">
            <div class="member">
              <div class="member-img">
                <img src="assets/img/team/team-1.jpg" class="img-fluid" alt="">
                <div class="social">
                  <a href=""><i class="bi bi-twitter"></i></a>
                  <a href=""><i class="bi bi-facebook"></i></a>
                  <a href=""><i class="bi bi-instagram"></i></a>
                  <a href=""><i class="bi bi-linkedin"></i></a>
                </div>
              </div>
              <div class="member-info">
                <h4>Rahmat Bayu Nurisnan</h4>
                <span>2423600051</span>
              </div>
            </div>
          </div>

          <!-- ganend -->
          <div class="col-lg-3 col-md-6 d-flex align-items-stretch">
            <div class="member">
              <div class="member-img">
                <img src="assets/img/team/team-2.jpg" class="img-fluid" alt="">
                <div class="social">
                  <a href=""><i class="bi bi-twitter"></i></a>
                  <a href=""><i class="bi bi-facebook"></i></a>
                  <a href=""><i class="bi bi-instagram"></i></a>
                  <a href=""><i class="bi bi-linkedin"></i></a>
                </div>
              </div>
              <div class="member-info">
                <h4>Ganendra Whisnu Wardana</h4>
                <span>2423600032</span>
              </div>
            </div>
          </div>

          <!-- fell -->
          <div class="col-lg-3 col-md-6 d-flex align-items-stretch">
            <div class="member">
              <div class="member-img">
                <img src="assets/img/team/team-3.jpg" class="img-fluid" alt="">
                <div class="social">
                  <a href=""><i class="bi bi-twitter"></i></a>
                  <a href=""><i class="bi bi-facebook"></i></a>
                  <a href=""><i class="bi bi-instagram"></i></a>
                  <a href=""><i class="bi bi-linkedin"></i></a>
                </div>
              </div>
              <div class="member-info">
                <h4>Muhammad Aprieldauzi F</h4>
                <span>2423600054</span>
              </div>
            </div>
          </div>

          <!-- Admin -->
          <div class="col-lg-3 col-md-6 d-flex align-items-stretch">
            <div class="member">
              <div class="member-img">
                <img src="assets/img/team/team-4.jpg" class="img-fluid" alt="">
                <div class="social">
                  <a href=""><i class="bi bi-twitter"></i></a>
                  <a href=""><i class="bi bi-facebook"></i></a>
                  <a href=""><i class="bi bi-instagram"></i></a>
                  <a href=""><i class="bi bi-linkedin"></i></a>
                </div>
              </div>
              <div class="member-info">
                <h4>Admin Shop</h4>
                <span>Secret 2023</span>
              </div>
            </div>
          </div>

        </div>

      </div>
    </section><!-- End Team Section -->

    <!-- ======= Contact Section ======= -->
    <section id="contact" class="contact">
      <div class="container">

        <div class="section-title">
          <h2>Contact</h2>
          <h3>Hubungi <span>Kami disini</span></h3>
          <p>Jika ada bug sistem atau gambar yang tidak sesuai dengan yang dikirim maka hubungi kami melalui form di bawah ini</p>
        </div>

        <div class="row mt-5">

          <div class="col-lg-4">
            <div class="info">
              <div class="address">
                <i class="bi bi-geo-alt"></i>
                <h4>Location:</h4>
                <p>Politeknik Elektronika Negeri Surabaya (PENS)</p>
              </div>

              <div class="email">
                <i class="bi bi-envelope"></i>
                <h4>Email:</h4>
                <p>Sinendshop@co.id</p>
              </div>

              <div class="phone">
                <i class="bi bi-phone"></i>
                <h4>Call:</h4>
                <p>+62 888 0001 1450</p>
              </div>

            </div>

          </div>

          <div class="col-lg-8 mt-5 mt-lg-0">

            <form action="forms/contact.php" method="post" role="form" class="php-email-form">
              <div class="row">
                <div class="col-md-6 form-group">
                  <input type="text" name="name" class="form-control" id="name" placeholder="Your Name" required>
                </div>
                <div class="col-md-6 form-group mt-3 mt-md-0">
                  <input type="email" class="form-control" name="email" id="email" placeholder="Your Email" required>
                </div>
              </div>
              <div class="form-group mt-3">
                <input type="text" class="form-control" name="subject" id="subject" placeholder="Subject" required>
              </div>
              <div class="form-group mt-3">
                <textarea class="form-control" name="message" rows="5" placeholder="Message" required></textarea>
              </div>
              <div class="my-3">
                <div class="loading">Loading</div>
                <div class="error-message"></div>
                <div class="sent-message">Your message has been sent. Thank you!</div>
              </div>
              <div class="text-center"><button type="submit">Send Message</button></div>
            </form>

          </div>

        </div>

      </div>
    </section><!-- End Contact Section -->

  </main><!-- End #main -->

  <!-- ======= Footer ======= -->
  <footer id="footer">

    <div class="footer-top">
      <div class="container">
        <div class="row">

          <div class="col-lg-3 col-md-6 footer-contact">
            <h3>Sinend Shop</h3>
            <p>
              Politeknik <br>
              Elektronika Negeri<br>
              Surabaya <br><br>
              <strong>Phone:</strong> +62 888 0001 1450<br>
              <strong>Email:</strong> Sinendshop@co.id<br>
            </p>
          </div>

          <div class="col-lg-2 col-md-6 footer-links">
            <h4>Useful Links</h4>
            <ul>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Home</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">About us</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Services</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Terms of service</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Privacy policy</a></li>
            </ul>
          </div>

          <div class="col-lg-3 col-md-6 footer-links">
            <h4>Our Services</h4>
            <ul>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Web Design</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Web Development</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Product Management</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Marketing</a></li>
              <li><i class="bx bx-chevron-right"></i> <a href="#">Graphic Design</a></li>
            </ul>
          </div>

          <div class="col-lg-4 col-md-6 footer-newsletter">
            <h4>Dukung kami disini</h4>
            <p>Dukungan, saran, dan kritik mu sangat berharga jadi jangan sungkan oke ;), dan silahkan isi link dibawah ini untuk mengikuti setiap informasi produk kami.</p>
            <form action="" method="post">
              <input type="email" name="email"><input type="submit" value="Subscribe">
            </form>
          </div>

        </div>
      </div>
    </div>

    <div class="container d-md-flex py-4">

      <div class="me-md-auto text-center text-md-start">
        <div class="copyright">
          &copy; Copyright <strong><span>Sinend Shop</span></strong>. All Rights Reserved
        </div>
        <div class="credits">
          <!-- All the links in the footer should remain intact. -->
          <!-- You can delete the links only if you purchased the pro version. -->
          <!-- Licensing information: https://bootstrapmade.com/license/ -->
          <!-- Purchase the pro version with working PHP/AJAX contact form: https://bootstrapmade.com/tempo-free-onepage-bootstrap-theme/ -->
          Designed by <a href="https://bootstrapmade.com/">Sinend Shop admin</a>
        </div>
      </div>
      <div class="social-links text-center text-md-right pt-3 pt-md-0">
        <a href="#" class="twitter"><i class="bx bxl-twitter"></i></a>
        <a href="#" class="facebook"><i class="bx bxl-facebook"></i></a>
        <a href="#" class="instagram"><i class="bx bxl-instagram"></i></a>
        <a href="#" class="google-plus"><i class="bx bxl-skype"></i></a>
        <a href="#" class="linkedin"><i class="bx bxl-linkedin"></i></a>
      </div>
    </div>
  </footer><!-- End Footer -->

  <a href="#" class="back-to-top d-flex align-items-center justify-content-center"><i class="bi bi-arrow-up-short"></i></a>

  <!-- Vendor JS Files -->
  <script src="assets/vendor/bootstrap/js/bootstrap.bundle.min.js"></script>
  <script src="assets/vendor/glightbox/js/glightbox.min.js"></script>
  <script src="assets/vendor/isotope-layout/isotope.pkgd.min.js"></script>
  <script src="assets/vendor/swiper/swiper-bundle.min.js"></script>
  <script src="assets/vendor/php-email-form/validate.js"></script>

  <!-- Template Main JS File -->
  <script src="assets/js/main.js"></script>

</body>

</html>