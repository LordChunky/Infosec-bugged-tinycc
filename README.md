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

---------------------

1. modify libtcc so that as it writes to the temp file DURING COMPILER ATTACK, it defines char quine_output[] = ... where ... equals the characters of quine_output DEFINED WITHIN ITSELF AKA LIBTCC.C
(note: at first this wont compile, wait until step 4)
2. put final attack into attack.c
3. ./quine < attack.c > attack_as_string.c
4. put contents of attack_as_string.c into libtcc.c like char quine_output[] = ...