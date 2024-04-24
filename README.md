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

-----------------------My update is the addition of Edit the compiler so that when it reads in a clean copy of login.c, it produces what you made in Step 1----------------------------------------------------
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