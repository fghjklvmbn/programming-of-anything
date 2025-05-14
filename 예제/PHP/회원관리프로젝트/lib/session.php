<?php
    session_start();

    $fuserid=$_POST['fuserid'];
    $fpasswd=$_POST['fpasswd'];

    $_SESSION['fuserid'] = $fuserid;
    $_SESSION['fpasswd'] = $fpasswd;

?>