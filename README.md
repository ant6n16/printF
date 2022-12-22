<h1 align = center>antdelga ft_printf</h1>

> 42 Málaga Fundación Telefónica Cursus  2nd project.

This repository contains all archives for the project __ft_printf__ in the __School 42 Málaga core cursus__. It's a library of functions in __C language__ that emulates the printf function. The repository includes the `Makefile` and the `Libft` library.

<h2 align = center>
	<a href="#about">About</a>
	<span> · </span>
	<a href="#index">Index</a>
	<span> · </span>
	<a href="#requirements">Requirements</a>
	<span> · </span>
	<a href="#instructions">Instuctions</a>
	<span> · </span>
	<a href="#testing">Testing</a>
	<span> · </span>
	<a href="#license">License</a>
</h2>

## About

This project is a __C library__ that emulates the printf function. The aim of rewrite printf is to get a better understanding of it and to get hablities when working with strings. Also we have worked with variadic The Libft functions can be used, so you can find a folder with the Libft library that we created in the 1st project. The bonus exercices of this porject have not been made.
The code in this repository follows [the rules of the Norminette](https://github.com/42School/norminette).

## Index
### Functions from `<ctype.h>` library
* [`ft_char`](https://github.com/ant6n16/printF/blob/main/ft_char.c) : To process %c option
* [`ft_check_input`](https://github.com/ant6n16/printF/blob/main/ft_check_input.c) : To work with the input string
* [`ft_hex_mayus`](https://github.com/ant6n16/printF/blob/main/ft_hex_mayus.c) : To process %X option
* [`ft_hex`](https://github.com/ant6n16/printF/blob/main/ft_hex.c) : To process %x option
* [`ft_integer`](https://github.com/ant6n16/printF/blob/main/ft_integer.c) : To process %i or %d options
* [`ft_itoa_hex`](https://github.com/ant6n16/printF/blob/main/ft_itoa_hex.c) : To convert an hex number to string
* [`ft_itoa_long`](https://github.com/ant6n16/printF/blob/main/ft_itoa_long.c) : To convert an unsigned int to string
* [`ft_pointer`](https://github.com/ant6n16/printF/blob/main/ft_pointer.c) : To process %p option
* [`ft_printf`](https://github.com/ant6n16/printF/blob/main/ft_printf.c) : To manage the other functions
* [`ft_putchar_fd_cont`](https://github.com/ant6n16/printF/blob/main/ft_putchar_fd_cont.c) : To write a char and increment the count of chars written
* [`ft_replace_arg`](https://github.com/ant6n16/printF/blob/main/ft_replace_arg.c) : To substitute the the %cspdiuxX by the argument
* [`ft_string`](https://github.com/ant6n16/printF/blob/main/ft_string.c) : To process %s option
* [`ft_type`](https://github.com/ant6n16/printF/blob/main/ft_type.c) : To check that one of the %cspdiuxX have been pased
* [`ft_uint`](https://github.com/ant6n16/printF/blob/main/ft_uint.c) : To process %u option


## Requirements
The library is written in __C language__ and needs the `gcc` compiler, with `<stdlib.h>`, `<stdarg.h>` and `<unistd.h>` standard libraries to run.

## Instructions

### 1. Download the repository

### 2. Compiling the library

To compile the library, go to its path and run:

```
make all
```

So you will compile the ft_printf functions and the libft ones.

### 3. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
make fclean
```

### 4. Using it in your code

To use the library functions in your code, simply include this header:
```
#include "ft_printf.h"
```

## Testing
This library have been tested with the normal and strict mode of [Francinette](https://github.com/xicodomingues/francinette) to the date of 22/12/2022.

## License
This work is licensed under a [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License](http://creativecommons.org/licenses/by-nc-sa/4.0/).

You are free to:
* Share: copy and redistribute the material in any medium or format.
* Adapt: remix, transform, and build upon the material.

Under the following terms:
* Attribution: You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.
* NonCommercial: You may not use the material for commercial purposes.
* ShareAlike: If you remix, transform, or build upon the material, you must distribute your contributions under the same license as the original.

<h3 align = right>Share the content!</h3>
