-**C programming** is awesome for its efficiency, portability, and powerful low-level capabilities.
was developed by **Dennis Ritchie** at Bell Laboratories in 1972.

-**Dennis Ritchie** was a computer scientist who, along with **Ken Thompson**, created the Unix operating system and developed the C programming language at Bell Labs in the early 1970s. **Brian Kernighan** is a computer scientist who worked closely with Ritchie and Thompson at Bell Labs and co-authored the book "The C Programming Language," which became a seminal work in C programming. Linus Torvalds is a software engineer who is best known for initiating the development of the Linux kernel in 1991, which has since become the basis for many operating systems and platforms.

|`gcc main.c`|When typed in the command line|
|----------|--------------|
|**Preprocessing**|The GCC (GNU Compiler Collection) first runs the C preprocessor `(cpp)` on `main.c`. This stage handles directives such as `#include`, `#define`, and `#ifdef`, and produces an intermediate file with all included files and macro expansions.|
|**Compilation**|Next, GCC compiles the preprocessed `main.c` file into assembly code specific to the target architecture. This step translates the C code into low-level instructions that can be understood by the computer's processor.|
|**Assembly**|GCC then translates the assembly code into machine code (binary code) using an assembler. This step generates an object file `(main.o)`, which contains the compiled machine code but is not yet executable.|
|**Linking**|inally, GCC performs linking. It combines `main.o` with any necessary libraries (like `libc`) and other object files (if any) to produce the final executable program. This step resolves references to functions and symbols from libraries and ensures all parts of the program work together.|
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-An **entry point** in programming is where execution of a program begins, often the `main` function in languages like C.
### Using `printf`:
```c
#include <stdio.h>

int main() {
    printf("Using printf: Hello, world!\n");
    return 0;
}\

### Using `puts`:
```c
#include <stdio.h>

int main() {
    puts("Using puts: Hello, world!");
    return 0;
}

### Using `putchar`:
```c
#include <stdio.h>

int main() {
    putchar('U');
    putchar('s');
    putchar('i');
    putchar('n');
    putchar('g');
    putchar(' ');
    putchar('p');
    putchar('u');
    putchar('t');
    putchar('c');
    putchar('h');
    putchar('a');
    putchar('r');
    putchar(':');
    putchar(' ');
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar(',');
    putchar(' ');
    putchar('w');
    putchar('o');

   putchar('r');
    putchar('l');
    putchar('d');
    putchar('!');
    putchar('\n');
    return 0;
}

