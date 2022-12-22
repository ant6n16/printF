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

This project is a __C library__ that emulates the printf function. The aim of rewrite printf is to get a better understanding of it and to get hablities when working with strings. The Libft functions can be used, so you can find a folder with the Libft library that we created in the 1st project. [You can find more information in the subject](https://github.com/Javisanchezf/42pdfs/blob/main/libft_subject.pdf). 
The code in this repository follows [the rules of the Norminette](https://github.com/42School/norminette).

## Index
### Functions from `<ctype.h>` library
* [`ft_isascii`](https://github.com/ant6n16/Libft/blob/main/ft_isascii.c) : Test whether c is a 7-bit US-ASCII character code.
* [`ft_isalpha`](https://github.com/ant6n16/Libft/blob/main/ft_isalpha.c) : Test a character to see if it's alphabetic.
* [`ft_isdigit`](https://github.com/ant6n16/Libft/blob/main/ft_isdigit.c) : Test a character to see if it's a digit (0 through 9).
* [`ft_isalnum`](https://github.com/ant6n16/Libft/blob/main/ft_isalnum.c) : Test a character to see if it's alphanumeric; it is equivalent to (isalpha(c) || isdigit(c)).
* [`ft_isprint`](https://github.com/ant6n16/Libft/blob/main/ft_isprint.c) : Test a character to see if it's any printable character, including a space.
* [`ft_tolower`](https://github.com/ant6n16/Libft/blob/main/ft_tolower.c) : Convert uppercase letters to lowercase.
* [`ft_toupper`](https://github.com/ant6n16/Libft/blob/main/ft_toupper.c) : Convert lowercase letters to uppercase.


## Requirements
The library is written in __C language__ and needs the `gcc` compiler, with `<stdlib.h>` and `<unistd.h>` standard libraries to run.

## Instructions

### 1. Download the repository

<a class="d-flex flex-items-center color-fg-default text-bold no-underline" rel="nofollow" data-hydro-click="{&quot;event_type&quot;:&quot;clone_or_download.click&quot;,&quot;payload&quot;:{&quot;feature_clicked&quot;:&quot;DOWNLOAD_ZIP&quot;,&quot;git_repository_type&quot;:&quot;REPOSITORY&quot;,&quot;repository_id&quot;:577022585,&quot;originating_url&quot;:&quot;https://github.com/Javisanchezf/media&quot;,&quot;user_id&quot;:116069430}}" data-hydro-click-hmac="4887bb7803f139a6f6aac4f6d7e0fdefeb39ad87cd72d9fe78c5940024b8242c" data-ga-click="Repository, download zip, location:repo overview" data-open-app="link" href="/Javisanchezf/42-Libft/archive/refs/heads/main.zip">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-file-zip mr-2">
    <path fill-rule="evenodd" d="M3.5 1.75a.25.25 0 01.25-.25h3a.75.75 0 000 1.5h.5a.75.75 0 000-1.5h2.086a.25.25 0 01.177.073l2.914 2.914a.25.25 0 01.073.177v8.586a.25.25 0 01-.25.25h-.5a.75.75 0 000 1.5h.5A1.75 1.75 0 0014 13.25V4.664c0-.464-.184-.909-.513-1.237L10.573.513A1.75 1.75 0 009.336 0H3.75A1.75 1.75 0 002 1.75v11.5c0 .649.353 1.214.874 1.515a.75.75 0 10.752-1.298.25.25 0 01-.126-.217V1.75zM8.75 3a.75.75 0 000 1.5h.5a.75.75 0 000-1.5h-.5zM6 5.25a.75.75 0 01.75-.75h.5a.75.75 0 010 1.5h-.5A.75.75 0 016 5.25zm2 1.5A.75.75 0 018.75 6h.5a.75.75 0 010 1.5h-.5A.75.75 0 018 6.75zm-1.25.75a.75.75 0 000 1.5h.5a.75.75 0 000-1.5h-.5zM8 9.75A.75.75 0 018.75 9h.5a.75.75 0 010 1.5h-.5A.75.75 0 018 9.75zm-.75.75a1.75 1.75 0 00-1.75 1.75v3c0 .414.336.75.75.75h2.5a.75.75 0 00.75-.75v-3a1.75 1.75 0 00-1.75-1.75h-.5zM7 12.25a.25.25 0 01.25-.25h.5a.25.25 0 01.25.25v2.25H7v-2.25z"></path>
</svg>
    Click here to download
</a>
- Then unzip the file.

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
