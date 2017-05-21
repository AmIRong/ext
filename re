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

curl -O https://pear.php.net/go-pear.phar

sudo php -d detect_unicode=0 go-pear.phar

You're now ready to configure PEAR for installation.

First you need to change the Installation Base.

So type 1, and then press Enter.

Enter /usr/local/pear

Press Enter.

Then, you will need to change the Binaries directory.

Type 4, and then press Enter.

Enter /usr/local/bin

Press Enter.

Once you have changed the Installation Base and the Binaries Directory, press Enter to install PEAR.

pear help version

*********************************************************

sudo pecl install Memcache
*********************
报错：修复警告
sudo pecl channel-update pecl.php.net

修复报错
curl -O http://mirrors.kernel.org/gnu/autoconf/autoconf-2.65.tar.gz
 tar -xzvf autoconf-2.65.tar.gz
 cd autoconf-2.65
 ./configure --prefix=/usr/local
 make
 sudo make install
 ********************
 sudo pecl install Memcache
cd /etc
sudo cp php.ini.default php.ini
sudo vi php.ini
根据提示You should add "extension=memcache.so" to php.ini

sudo apachectl restart

*********************

sudo pecl install Mcrypt
报错
sudo pecl install Mcrypt channel://pecl.php.net/Mcrypt-1.0.1
报错
php -m
php -v
cd downloads
curl -O http://au1.php.net/get/php-5.6.30.tar.bz2/from/this/mirror
tar -xzvf php-5.6.30.tar
cd php-5.6.30/ext/mcrypt
phpize
./configure
报错
curl -O ftp://mcrypt.hellug.gr/pub/crypto/mcrypt/libmcrypt
tar -zxvf libmcrypt-2.5.7.tar.gz
cd libmcrypt-2.5.7
./configure --prefix=/usr/local
 make
 sudo make install
 cd ~／downloads/php-5.6.30/ext/mcrypt
 phpize
 ./configure
 make
 sudo make install
 自动安装到/usr/lib/php/extensions/no-debug-non-zts-20131226/mcrypt.so
 sudo vi /etc/php.ini
 extension=memcache.so
 sudo apachectl restart
*********************************************************************
cd /library/webserver/documents
git clone https://github.com/phalapi/phalapi.git
cd phalapi/phalapi
sudo chmod +x ./phalapi-buildapp
./phalapi-buildapp MyApp
cd ../myapp
tree
无效
find . -print | sed -e 's;[^/]*/;|____;g;s;____|; |;g'
phpunit ./Tests/
无效
***************************************************************
cd ~
curl -O https://phar.phpunit.de/phpunit-3.7.10.phar
php phpunit-3.7.10.phar --version
chmod +x phpunit-3.7.10.phar
sudo mv phpunit-3.7.10.phar /usr/local/bin/phpunit
cd /library/webserver/documents/phalapi/myapp
sudo phpunit ./Tests/

FAILURES!
Tests: 2, Assertions: 7, Failures: 1
curl -O https://phar.phpunit.de/phpunit-4.3.4.phar
php phpunit-4.3.4.phar --version
chmod +x phpunit-4.3.4.phar
sudo mv phpunit-4.3.4.phar /usr/local/bin/phpunit
cd /library/webserver/documents/phalapi/myapp
sudo phpunit ./Tests/

FAILURES!
Tests: 2, Assertions: 7, Failures: 1.

***************

ab -n 100 -c 10 http://baidu.com/

curl -O http://mirrors.tuna.tsinghua.edu.cn/apache//jmeter/source/apache-jmeter-3.1_src.tgz
安装jre，jdk
启动jmeter
报错
curl -O http://mirrors.hust.edu.cn/apache//jmeter/binaries/apache-jmeter-3.2.tgz
启动jmeter
ok，

删除下载目录autoconf-2.65
依旧有效

启动jmeter

***************

安装zendserver，mysql

sudo /usr/local/mysql-5.7.17-macos10.12-x86_64/bin/mysqld_safe --skip-grant-tables&

sudo /usr/local/mysql-5.7.17-macos10.12-x86_64/bin/mysql -u root -h 127.0.0.1（mysql tcp/ip 方式连接（mysql.sock不存在的条件下））

如果知识被魔鬼偷走，下地狱也要把它拿回来；

忍者，仁也，仁者，人也；
智者，蠢猪也，愚者，鱼龙也；
智者，猪也，愚者，鱼也；

MATLAB R2010a简介
数据结构（c语言版）答疑解惑与典型题解
单片机c语言实践教程


碳是黑的吗？
信息技术现已经走过了条的阶段，进入到块的阶段。

curl -O https://cmake.org/files/v3.7/cmake-3.7.2.tar.gz
tar -zxvf cmake-3.7.2.tar.gz
cd cmake-3.7.2.tar.gz
sudo ./bootstrap && sudo make && sudo make install

curl -O https://pkg-config.freedesktop.org/releases/pkg-config-0.29.2.tar.gz
tar -xzvf pkg-config-0.29.2.tar.gz
cd pkg-config-0.29.2
./configure --with-internal-glib
make
sudo makeinstall

curl -O https://github.com/opencv/opencv/archive/3.2.0.zip
tar -zxvf opencv-3.2.0.zip
sudo cmake -G "Unix Makefiles"
sudo make -j8
sudo make install 

git clone https://github.com/liuruoze/EasyPR
cd easypr
https://github.com/liuruoze/EasyPR/issues/152
./build.sh




从文件系统到关系数据库再到非关系数据库，数据层，视图层，控制层。


*************

sudo easy_install pip 
http://blog.csdn.net/jobschen/article/details/49559023

pip install --upgrade pip

pip install jupyter

http://www.zhimengzhe.com/mac/234096.html
sudo pip install python-dateutil==2.2
sudo jupyter notebook --allow-root
