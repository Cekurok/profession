# vim editor tool
sudo apt-get install vim

# git repository tool
sudo apt-get install git

# doxygen tool for doc generation
sudo apt-get install doxygen

# to update the build tool essential
sudo apt-get install build-essential

# to install the latest version of g++
# $ sudo add-apt-repository ppa:ubuntu-toolchain-r/test
# $ sudo apt-get update
# $ sudo apt-cache search "g\+\+"
# check for similar line which is latest g++ compiler in terminal
# g++-5 - GNU C++ compiler 
# $ sudo apt-get install gcc-5 g++-5
# configure the latest g++
# $ sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-4.8 60 --slave /usr/bin/g++ g++ /usr/bin/g++-4.8 
# $ sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-5 40 --slave /usr/bin/g++ g++ /usr/bin/g++-5
# $ sudo update-alternatives --config gcc
# if further switching between compiler is need run below command
# $ sudo update-alternatives --config gcc

# install the gcc and g++ documentation
sudo apt-get install gcc-5-doc
sudo apt-get install libstdc++-5-doc

#Suggested packages:
#  gcc-5-locales g++-5-multilib gcc-5-doc libstdc++6-5-dbg gcc-5-multilib
#  libgcc1-dbg libgomp1-dbg libitm1-dbg libatomic1-dbg libasan2-dbg
#  liblsan0-dbg libtsan0-dbg libubsan0-dbg libcilkrts5-dbg libmpx0-dbg
#  libquadmath0-dbg libstdc++-5-doc


