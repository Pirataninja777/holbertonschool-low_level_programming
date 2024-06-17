-**C programming** is awesome for its efficiency, portability, and powerful low-level capabilities.
-was developed by **Dennis Ritchie** at Bell Laboratories in 1972.
-Dennis Ritchie was a computer scientist who, along with Ken Thompson, created the Unix operating system and developed the C programming language at Bell Labs in the early 1970s. Brian Kernighan is a computer scientist who worked closely with Ritchie and Thompson at Bell Labs and co-authored the book "The C Programming Language," which became a seminal work in C programming. Linus Torvalds is a software engineer who is best known for initiating the development of the Linux kernel in 1991, which has since become the basis for many operating systems and platforms.
|`gcc main.c`|When typed in the command line|
|----------|--------------|
|**Preprocessing**|The GCC (GNU Compiler Collection) first runs the C preprocessor `(cpp)` on `main.c`. This stage handles directives such as `#include`, `#define`, and `#ifdef`, and produces an intermediate file with all included files and macro expansions.|
|**Compilation**|Next, GCC compiles the preprocessed `main.c` file into assembly code specific to the target architecture. This step translates the C code into low-level instructions that can be understood by the computer's processor.
