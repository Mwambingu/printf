#                 GROUP PROJECT-0X11.C-PRINTF
              By Tonny Mwambingu and Lilian Wanjiku
     
##       Creating our own 'printf()' function

###      DESCRIPTION

> The '_printf()' function produces output according to a format which is described below. 
> This function write its output to the stdout.

The available convertion specifiers are:

* %c: Prints a single character.
* %s: Prints a string of characters.
* %d: Prints integers.
* %i: Prints integers.
* %r: Prints a reversed string.
* %R: Prints a rot13'ed string.
* %p: Prints address.
* %u: Prints unsigned integer.
* %o: Prints to octal base.
* %x: Prints to hexadecimal lower.
* %X: Prints to hexadecimal upper.
* %b: Prints to binary base.

##      Authorized functions and macros
* 'write (man 2 write)'
* 'malloc (man 3 malloc)'
* 'free (man 3 free)'
* 'va_start (man 3 va_start)'
* 'va_end (man 3 va_end)'
* 'va_copy (man 3 va_copy)'
* 'va_arg (man 3 va_arg)'

##      COMPILATION
Your code will be compiled this way:
'$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c'

> As a consequence, be careful not to push any c file containing a main function in the root directory 
of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file '(main.h): #include main.h'
You might want to look at the gcc flag '-Wno-format' when testing with your '_printf' and the standard 'printf'.


##     TASKS

####   0. Write a function that produces output according to a format.

* 'Prototype: int _printf(const char *format, ...);'

> Returns: the number of characters printed (excluding the null byte used to end output to strings)
> write output to stdout, the standard output stream format is a character string. 
> The format string is composed of zero or more directives. 
See 'man_3_print' for more detail. 
> > You need to handle the following conversion specifiers:
>   * 'c'
>   * 's'
>   * '%'
> You don’t have to reproduce the buffer handling of the C library printf function
> You don’t have to handle the flag characters
> You don’t have to handle field width
> You don’t have to handle precision
> You don’t have to handle the length modifiers


####   1. Handle the following conversion specifiers:

* 'd'
* 'i'
> You don’t have to handle the flag characters
> You don’t have to handle field width
> You don’t have to handle precision
> You don’t have to handle the length modifiers


####   2. Create a man page for your function.
> File: 'man_3_printf'


#### 3. Handle the following custom conversion specifiers:

> * b: the unsigned int argument is converted to binary

#### 4. Handle the following conversion specifiers:

> * u
> * o
> * x
> * X
> You don’t have to handle the flag characters
> You don’t have to handle field width
> You don’t have to handle precision
> You don’t have to handle the length modifiers

#### 5. Use a local buffer of 1024 chars in order to call write as little as possible.

#### 6. Handle the following conversion specifier: 
> * p

> You don’t have to handle the flag characters
> You don’t have to handle field width
> You don’t have to handle precision
> You don’t have to handle the length modifiers

#### 7. Handle the following custom conversion specifier:

> S : prints the string.
> Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, 
> followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

#### 14. Handle the following custom conversion specifier:

> r : prints the reversed string

#### 15. Handle the following custom conversion specifier:

> R: prints the rot13'ed string

