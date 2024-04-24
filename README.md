
# Infosec-bugged-tinycc

This repo is for the coding assignment of info-sec which dealing with a bugged compiler. The super secret alternative username is: cabbageham
    ========================================
*NOTE: you can also just follow the instructions callahan gives in the pdf and you should also see it working there*
*NOTE: you should start off with tinycc-dirty and tinycc-clean. make sure you've git pulled*

Final Instructions for Verifying Everything Works
1. clone/copy tinycc-clean into a new directory

2. enter tinycc-clean and run the following: make clean && ./configure --cc="../tinycc-dirty/tcc" && make && sudo make install

3. enter the directory from step 1 and run the following: make clean && ./configure --cc="../tinycc-clean/tcc" && make && sudo make install

4. to verify this shiny new compiler is indeed infected, run the following: tcc -o login login.c

5. to verify results, run the following: ./login cabbageham; echo $?

6. observe our super secret username can also login, along with 'root' of course
  

7. made changes to tinycc-dirty/libtcc.c

8. ./configure

9. make && sudo make install

10. enter tinycc-clean

11. ./configure --cc=../tinycc-dirty/tcc

12. make && sudo make install

13. tcc -o login login.c (or any c program)

should see the test print from the changes in step 1
