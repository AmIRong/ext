sudo vi /library/webserver/documents/systeminfo.php

<?php
phpinfo();
?>

sudo vi /etc/apache2/httpd.conf

#LoadModule php5_module libexec/apache2/libphp5.so

sudo apachectl start

sudo apachectl restart

*********************************************

history -c

*********************************************

curl http://127.0.0.1/systeminfo.php

********************************************

curl -O  http://pear.php.net/distributions/manual/pear_manual_en.tar.bz2
