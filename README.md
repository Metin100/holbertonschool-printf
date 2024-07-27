
## 

![C Code](https://upload.wikimedia.org/wikipedia/commons/1/18/C_Programming_Language.svg)

#  `_printf` Function in C

In this project, we recreateda mini-version of the printf function found in the stdio.h library in the C programming language. This function allows us to print any argument given to the standard output or terminal. Similar printing functions can be found in any programming language. This means we can print any combinations of strings, integers, and other different data types. write same thing but different version.
## Features
- Supports conversion specifiers: `%c`, `%s`, `%d`, `%i`, and `%%`.
- Handles variable arguments using `stdarg.h`.
- Outputs to `stdout`, the standard output stream.



## Conversion Specifiers

| Specifier	 | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `%c` | `char` | Print a single character |
| `%s` | `string` | Print a string |
| `%d` | `int` | Print a signed decimal integer |
| `%i` | `int` | Print a signed decimal integer |
| `%%` | `char` |Print a literal % character |





## man page

 The man_3_printf manual page provides detailed documentation for the custom _printf function implemented in this project. It serves as a reference for understanding the function's usage, parameters, return values, and supported conversion specifiers.


## Compilation
Compile Command:

```http
"$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
Ensure your main files include the main header file main.h:

```http
#include "main.h"
```
## Repository Information
GitHub Repository:https://github.com/Metin100/holbertonschool-printf?tab=readme-ov-file#holbertonschool-printf
## Authors
- Metin Abbaszade
- Fatima Umudova
