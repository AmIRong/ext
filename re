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

********************************************

php -r "copy('https://getcomposer.org/installer', 'composer-setup.php');"
php -r "if (hash_file('SHA384', 'composer-setup.php') === '669656bab3166a7aff8a7506b8cb2d1c292f042046c5a994c43155c0be6190fa0355160742ab2e1c88d40d5be660b410') { echo 'Installer verified'; } else { echo 'Installer corrupt'; unlink('composer-setup.php'); } echo PHP_EOL;"
php composer-setup.php
php -r "unlink('composer-setup.php');"

sudo mkdir -p /usr/local/bin

sudo mv composer.phar /usr/local/bin/composer

********************************************
