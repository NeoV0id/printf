<h1><i>_printf</i> is our original printf.</h1>
we started this project because I wanted to learn how to use functions with variable length arguments and function pointers.
Since it was the first complex function we created, it was very difficult.
The function which controls strings required particular concentration, since even a single index deviation would cause them to fail to work properly.

Our <i>_printf</i> function implements four format specifiers, %i, %d, %c, and %s, so it can output integers, strings, and characters, but it does not implement %p or %f, so it cannot print pointers or float type data.

<h2>Usage :</h2>
Use it in the same way as using the printf function.
<div>
    <img src="https://i.postimg.cc/K8F215Zn/Capture-d-e-cran-2023-06-19-a-10-02-18.png" alt="main.c">
</div>
Tadaaa!
<div>
    <img src="https://i.postimg.cc/Hx3JNLBN/Capture-d-e-cran-2023-06-19-a-10-02-27.png" alt="main.c">
</div>


<h2>Detail :</h2>
This repo is a recreation of the printf function, it contains:

- <b>1-printf.c</b> - the whole function
- <b>2-printf.c</b> - contains the print_numbers function
- <b>_putchar.c</b> - prints character
- <b>printstr.c</b> - prints a string
- <b>14-print_rev</b> - prints a string in reverse
- <b>15-rot13'ed</b> - translate according rot13 table
- <b>man_3_printf</b> - man page for _printf

This project is a group project for Holberton School

Resources

    Secrets of printf
    Group Projects concept page (Don't forget to read this)
    Flowcharts concept page

Authorized functions and macros

    write (man 2 write)
    malloc (man 3 malloc)
    free (man 3 free)
    va_start (man 3 va_start)
    va_end (man 3 va_end)
    va_copy (man 3 va_copy)
    va_arg (man 3 va_arg)

Handled flags and conversion specifiers

%%: print percentage
%c: print character
%s: print string
%d: print doubles
%i: print integer
(%b: the unsigned int argument is converted to binary
%u
%o
%x
%X
%S: prints the string
%p: print pointers
%l: length modifier
%h: length modifier
%r: prints the reversed string
%R: prints the rot13'ed string) => not yet implemented

Compilation

    Your code will be compiled this way:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

    As a consequence, be careful not to push any c file containing a main
    function in the root directory of your project (you could have a test folder
    containing all your tests files including main functions)
    Our main files will include your main header file (main.h): #include main.h
    You might want to look at the gcc flag -Wno-format when testing with your
    _printf and the standard printf.

Project made by:

Anna78990 - https://github.com/Anna78990

Twitter : <a href="https://twitter.com/KinuwaReeves?ref_src=twsrc%5Etfw" class="twitter-follow-button" data-size="large" data-lang="en" data-show-count="false"> @KinuwaReeves</a><br>
NeoV0id   - https://github.com/NeoV0id
LDoualito - https://github.com/LDoualito
