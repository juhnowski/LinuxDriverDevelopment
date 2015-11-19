# LinuxDriverDevelopment
Linux Driver Development tests

make
sudo insmod hello.ko
dmesg
sudo rmmod hello.ko
=========================
cd /dev
mknod /dev/myTestDeviceFile c 900 1
major number ----> /usr/src/linux/Documentation/ide/ide.txt
