# Infosec-bugged-tinycc
This repo is for the coding assignment of info-sec which dealing with a bugged compiler


1. made changes to tinycc-dirty/libtcc.c
2. ./configure
3. make && sudo make install
4. enter tinycc-clean
5. ./configure --cc=../tinycc-dirty/tcc
6. make && sudo make install
7. tcc -o login login.c (or any c program)
should see the test print from the changes in step 1