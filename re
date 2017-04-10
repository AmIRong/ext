sudo vi /library/webserver/documents/systeminfo.php

<?php
phpinfo();
?>

sudo vi /etc/apache2/httpd.conf

#LoadModule php5_module libexec/apache2/libphp5.so

sudo apachectl start

sudo apachectl restart
