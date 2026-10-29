<h3 align=center><img width="150" height="150" alt="libfte" src="https://github.com/user-attachments/assets/1a3ae480-b15f-401d-885b-4ed4bd2e8279" /></h3>

*This project has been created as part of the 42 curriculum by salkhali.*

## Description

<h3 align=center>
Part 1
</h3>

> <i>In this first part, you must re-code a set of the libc functions, as defined in their man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes ft_strlen.</i>

<p align=center>
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi
</p>

<h3 align=center>
Part 2
</h3>

> <i>In this second part, you must code a set of functions that are either not included in the libc, or included in a different form. Some of these functions can be useful to write Part 1’s functions.</i>

<p align=center>
• substr
• strjoin
• strtrim
• split
• itoa
• strmapi
• striteri
• putchar_fd
• putstr_fd
• putendl_fd
• putnbr_fd
</p>

<h3 align=center>
Part 3
</h3>

> <i>The following functions will allow you to easily use your lists.</i>
<p align=center>
• lstnew
• lstadd_front
• lstsize
• lstlast
• lstadd_back
• lstdelone
• lstclear
• lstiter
• lstmap
</p>


## Instructions
### Make
Run to generate the archived library that includes all of the functions required by libft subject file.  
```bash
make all
```
Run the following to remove all artifacts / object files.
```bash
make clean
```
Run the following to remove the archive file alongside the artifacts

```bash
make fclean
```
For a quick fclean all, run the re rule.
```bash
make re
```
###  Compilation
To compile a C file with the library, make sure to include the header file within the source code that calls it.
```c
#include "libft.h"
```
as for the compilation itself, you can simply pass the library name to your compiler of choice as an argument.
```bash
cc main.c libft.a -o main
```
## Resources
[For the makefile i relied on Makefiletutorial.com](https://makefiletutorial.com/#top)

[Cant go wrong with Beejs guide to programming in c](https://beej.us/guide/bgc/pdf/bgc_usl_c_1.pdf)

[Supplementing theory with Computer systems: a programmers perspective](https://github.com/Sorosliu1029/Books/blob/master/Computer%20Systems%20A%20Programmers%20Perspective%20(3rd).pdf)

AI-Disclosure: AI has been used in this project for two main tasks, adding prototypes to my headerfiler, and reviewing my 42 norm application.
