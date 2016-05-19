# stm32f4-examples-NCKU-SingleChip

Please set up the environment before the class
----------------------------------------------------------------------------------
	###Github 
		1. $ sudo apt-get update
		2. $ sudo apt-get install build-essential git-core
		3. $ ssh-keygen -t rsa -C "your_email@example.com"
		後面那是自己申請 Github 所使用的信箱。之後 ssh 程式會要求輸入 passphrase：
		直接按下 Enter 鍵即可。
		輸入一個 passphrase，如不想輸入直接按下 Enter 鍵即可。
		此時顯示的是你 SSH Key 的 fingerprint

		4. Ensure ssh-agent is enabled:
		$ eval "$(ssh-agent -s)"

		5. Add your SSH key to the ssh-agent:
		$ ssh-add ~/.ssh/id_rsa

		6. Copy the SSH key to your clipboard.
		$ sudo apt-get install xclip
		$ xclip -sel clip < ~/.ssh/id_rsa.pub

		7.Paste the ssh key to the github -> settings -> ssh  & GPG keys

		8. Confirm the action by entering your GitHub password.
		$ ssh -T git@github.com
----------------------------------------------------------------------------------
開發環境設定
$ sudo apt-get update
$ sudo apt-get install gcc-arm-linux-gnueabihf g++-arm-linux-gnueabihf
$ sudo apt-get install qemu-user qemu-system-arm
$ sudo apt-get install build-essential
$ sudo apt-get install linux-tools-common linux-tools-generic
$ sudo apt-get install astyle colordiff

$ sudo apt-get install -y zlib1g-dev libsdl1.2-dev automake* autoconf* libtool libpixman-1-dev
$ sudo apt-get install gcc-arm-none-eabi libnewlib-arm-none-eabi
若 Ubuntu 使用 64bit 版本 ，請額外安裝 lib32gcc1 之套件
$ sudo apt-get install lib32gcc1 lib32ncurses5
----------------------------------------------------------------------------------
STLINK
$ sudo apt-get install automake* libtool libusb-1.0-0-dev
$ sudo apt-get install git
$ git clone http://github.com/texane/stlink.git
$ cd stlink
$ sudo ./autogen.sh
$ sudo ./configure --prefix=/usr
$ sudo make
$ sudo make install
$ sudo cp 49-stlinkv2.rules /etc/udev/rules.d/
----------------------------------------------------------------------------------



