<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>login page</title>
    <link rel="stylesheet" href="login.css">
    <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>

    <script>
        function makemein() {
            var user = document.getElementById('email').value;
            var pass = document.getElementById('password').value;
            if (user != '' && pass != '') {
                return true;
            } else {
                alert('Isi User ID dan Password terlebih dahulu');
                return false;
            }
        }
    </script>

</head>

<body>
    <div class="login1">
        <form name="flogin" id="flogin" method="post" onSubmit="return makemein()" action="actLogin.php">
            <h1>Login / Register</h1>
            <div class="box-inputan1">
                <input type="text" placeholder="Email" name="email" id="email" required>
                <i class='bx bx-envelope'></i>
            </div>
            <div class="box-inputan1">
                <input type="password" placeholder="Password" name="password" id="password" required>
                <i class='bx bx-lock-alt'></i>
            </div>

            <button type="submit" name="pencet" class="button2">Login</button>
        </form>
    </div>
</body>

</html>