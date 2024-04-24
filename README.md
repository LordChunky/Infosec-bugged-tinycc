# Infosec-bugged-tinycc
This is the branch of Yihan Shao. My addition is CompilerSimulation.c and backdoor.c. 
-------------------Step 1--------------------
made changes to tinycc-dirty/libtcc.c
./configure
make && sudo make install
enter tinycc-clean
./configure --cc=../tinycc-dirty/tcc
make && sudo make install

//after congiruation installed, than change it.
Experimental methods
Obtain and modify the compiler source code


Firstly, clone the official repository of the Tiny C compiler and switch to the corresponding working directory:


Next, modify tccgen. C file and insert the following code in the appropriate location of the file:

When compiling login information, make sure to call the gen_login.backdoor function. C

2. Compile and test the compiler

Compile the login using the modified compiler. C file and verify if the backdoor function is working as expected.





------Step 2-----------------the addition of Edit the compiler so that when it reads in a clean copy of login.c, it produces what you made in Step 1----------------------------------------------------
Compiler Simulation Project

Overview

This project contains a simplified simulation of a compiler that demonstrates the concept of code injection during the compilation process. The primary purpose of this simulation is for educational use, specifically to understand how compilers might be manipulated to alter the behavior of compiled programs without modifying the source code directly.

File Description

- `compiler_simulation.c`: Contains the main simulation code for detecting and injecting a backdoor into a specific file named `login.c`. This is a hypothetical example used solely for demonstrating the concept.

 Educational Objectives

- Compiler Workflows: Understanding how compilers process source files.
- Code Injection: Learning how code could theoretically be injected into a compile-time process.
- Ethical Considerations: Discussing the implications of compiler security and the importance of maintaining ethical standards in software development.

 How to Use

To use this simulation:

1. Compile the Simulation: Use a C compiler to compile the `compiler_simulation.c` file.
   ```bash
   gcc compiler_simulation.c -o compiler_simulation