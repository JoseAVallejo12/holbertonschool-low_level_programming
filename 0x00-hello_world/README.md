<h1> <img src="https://firebasestorage.googleapis.com/v0/b/test-79d5b.appspot.com/o/c-programming.png?alt=media&token=05306204-35ff-42e4-8438-6e080e0156c4" alt="logo" width="50" height="50" > 0x00. C - Hello, World</h1>

## Resources
### Read or watch:
- [Everything you need to know to start with C](https://docs.google.com/presentation/d/1ghto-TsXqgPRuEVmiCp7GvGttobdTLF4Yq8IRXwzvHY/edit#slide=id.p) (You do not have to learn everything in there yet, but make sure you read it entirely first)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- [Holberton’s Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
- [Hash-bang under the hood](https://github.com/holbertonschool/Betty/wiki) (Look at only after you finish consuming the other resources)
- [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus) (Look at only after you finish consuming the other resources)

### man or help:
- gcc
- printf (3)
- puts
- putchar

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, **without the help of Google:**

## General
- Why C programming is awesome (don’t forget to tweet today, with the hashtag #cisfun :))
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official Holberton C coding style and how to check your code with betty-style
- How to find the right header to include in your source code - when using a standard library function
- How does the main function influence the return value of the program

## Requirements
## C
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS using gcc 4.8.4
- All your files should end with a new line
- A README.md file at the root of the holbertonschool-low_level_programming repo, containing a description of the repository
- A README.md file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## Shell Scripts
- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 14.04 LTS
- All your scripts should be exactly two lines long ($ wc -l file should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly #!/bin/bash

## More Info
## Betty linter
To run the Betty linter just with command betty <filename>:

- Go to the [Betty](https://github.com/holbertonschool/Betty) repository
- Clone the repo to your local machine
cd into the Betty directory
- Install the linter with sudo ./install.sh
emacs or vi a new file called betty, and copy the script below:

```
#!/bin/bash
# Simply a wrapper script to keep you from having to use #betty-style
#and betty-doc separately on every item.
#Originally by Tim Britton (@wintermanc3r), multiargument addedby
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
- Once saved, exit file and change permissions to apply to all users with ***chmod a+x betty***
- Move the ***betty*** file into ***/bin/*** directory or somewhere else in your ***$PATH*** with ***sudo mv betty /bin/***
You can now type ***betty <filename>*** to run the Betty linter!

# Tasks

### 0-preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.
- The C file name will be saved in the variable $CFILE (export CFILE='main.c')
- The output should be saved in the file c
output: 
```
❯ ./0-preprocessor
❯ tail c





# 8 "main.c"
int main(void)
{
 return (0);
}

```

## 1-compiler
Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c.
    - Example: if the C file is main.c, the output file should be main.o
output:
```
❯ ./1-compiler
❯ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^L^@^K^@M-s^O^^M-zUHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0^@^@^@^@^@^D^@^@^@^P^@^@^@^E^@^@^@GNU^@^B^@^@M-@^D^@^@^@^C^@^@^@^@^@^@^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^O^@^@^@^@E^N^PM-
```

## 2-assembler
Write a script that generates the assembly code of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c.
    - Example: if the C file is main.c, the output file should be main.s
output:
```
❯ ./2-assembler
❯ cat main.s
        .file   "main.c"
        .text
        .globl  main
        .type   main, @function
main:
.LFB0:
        .cfi_startproc
        endbr64
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        movl    $0, %eax
        popq    %rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE0:
        .size   main, .-main
        .ident  "GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0"
        .section        .note.GNU-stack,"",@progbits
        .section        .note.gnu.property,"a"
        .align 8
        .long    1f - 0f
        .long    4f - 1f
        .long    5
0:
        .string  "GNU"
1:
        .align 8
        .long    0xc0000002
        .long    3f - 2f
2:
        .long    0x3
3:
        .align 8
4:

```

## 3-name
Write a script that compiles a C file and creates an executable named cisfun.

- The C file name will be saved in the variable $CFILE
outputs:
```
❯ chmod u+x 3-name
❯ ./3-name
❯ ls
0-preprocessor 1-compiler 3-name 5-printf.c  c main.c  main.s 2-assembler 4-puts.c  6-size.c  cisfun  main.o
```

## 4-puts.c
Write a C program that prints exactly "Programming is like building a multilingual puzzle", followed by a new line.

- Use the function puts
- You are not allowed to use printf
- Your program should end with the value 0
outputs:
```
❯ gcc 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
❯ echo $?
0
```

## 5-printf.c
Write a C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line.

- Use the function printf
- You are not allowed to use the function puts
- Your program should return 0
- Your program should compile without warning when using the -Wall gcc option
output:
```
❯ gcc -Wall 5-printf.c && ./a.out
with proper grammar, but the outcome is a piece of art,
❯ echo $?
0
```

## 6-size.c
Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return 0
- You might have to install the package libc6-dev-i386 on your - Linux (Vagrant) to test the -m32 gcc option
output:
```
❯ gcc 6-size.c -m32 -o size32 2> /tmp/32
❯ gcc 6-size.c -m64 -o size64 2> /tmp/64
❯ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
❯ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
```
## 101-quote.c
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

- You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
- Your program should return 1
- Your program should compile without any warnings when using the -Wall gcc option
- Dora Korpar - Cohort 0, San Francisco
output:
```
❯ gcc -Wall 101-quote.c -o quote
❯ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
❯ echo $?
1
```
