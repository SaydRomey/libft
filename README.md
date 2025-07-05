
# libft

Welcome to `libft`, the first project in the 42 Common Core curriculum!  
This project introduces the basics of C programming and library development by implementing a standard C library.  
It is designed to strengthen our understanding of algorithms, memory management, and function implementation.  

---

## Project Description

The goal of `libft` is to reimplement functions from the standard C library, 
as well as some additional utility functions, 
to create a custom library that will be reused in future projects.  

> [!NOTE]  
> Later projects allow using this library, as well as improving it with other functions as needed.  
> This is a modified personnal version used during my curriculum

---

## Instructions

[Take a look at the `libft` project instructions](./libft_instructions.md)

<!-- ### Project PDFs
- [English Version](https://github.com/SaydRomey/42_ressources/blob/main/pdf/libft_en.pdf)
- [French Version](https://github.com/SaydRomey/42_ressources/blob/main/pdf/ft_irc_fr.pdf) -->

---

Below, you’ll find a categorized list of all the functions included in this repository.

### Libc Functions
Implementing functions from the `libc`.

| Function                           | Description                                    |
|------------------------------------|------------------------------------------------|
| [`ft_isalpha`](./src/ft_isalpha.c) | Checks if a character is alphabetic.           |
| [`ft_isdigit`](./src/ft_isdigit.c) | Checks if a character is a digit (0-9).        |
| [`ft_isalnum`](./src/ft_isalnum.c) | Checks if a character is alphanumeric.         |
| [`ft_isascii`](./src/ft_isascii.c) | Checks if a character is in the ASCII set.     |
| [`ft_isprint`](./src/ft_isprint.c) | Checks if a character is printable.            |
| [`ft_strlen`](./src/ft_strlen.c)   | Computes the length of a string.               |
| [`ft_memset`](./src/ft_memset.c)   | Fills memory with a constant byte.             |
| [`ft_bzero`](./src/ft_bzero.c)     | Sets memory to zero.                           |
| [`ft_memcpy`](./src/ft_memcpy.c)   | Copies memory from one area to another.        |
| [`ft_memmove`](./src/ft_memmove.c) | Copies memory safely from one area to another. |
| [`ft_strlcpy`](./src/ft_strlcpy.c) | Copies a string with size limitation.          |
| [`ft_strlcat`](./src/ft_strlcat.c) | Concatenates a string with size limitation.    |
| [`ft_toupper`](./src/ft_toupper.c) | Converts a character to uppercase.             |
| [`ft_tolower`](./src/ft_tolower.c) | Converts a character to lowercase.             |
| [`ft_strchr`](./src/ft_strchr.c)   | Locates the first occurrence of a character in a string.  |
| [`ft_strrchr`](./src/ft_strrchr.c) | Locates the last occurrence of a character in a string.   |
| [`ft_strncmp`](./src/ft_strncmp.c) | Compares two strings up to `n` characters.     |
| [`ft_memchr`](./src/ft_memchr.c)   | Locates a byte in memory.                      |
| [`ft_memcmp`](./src/ft_memcmp.c)   | Compares two memory areas.                     |
| [`ft_strnstr`](./src/ft_strnstr.c) | Locates a substring within a string up to `n` characters. |
| [`ft_atoi`](./src/ft_atoi.c)       | Converts a string to an integer.               |
| [`ft_calloc`](./src/ft_calloc.c)   | Allocates memory and initializes it to zero.   |
| [`ft_strdup`](./src/ft_strdup.c)   | Duplicates a string in allocated memory.       |

### Additional Functions
Implementing functions either not in the `libc`, or are part of it but in a different form.  
These functions involved `malloc()`.

| Function                                 | Description                               |
|------------------------------------------|-------------------------------------------|
| [`ft_substr`](./src/ft_substr.c)         | Extracts a substring from a string.       |
| [`ft_strjoin`](./src/ft_strjoin.c)       | Concatenates two strings into a new allocated string. |
| [`ft_strtrim`](./src/ft_strtrim.c)       | Removes specified characters from the beginning and end of a string. |
| [`ft_split`](./src/ft_split.c)           | Splits a string into an array of substrings based on a delimiter.    |
| [`ft_itoa`](./src/ft_itoa.c)             | Converts an integer to a string.          |
| [`ft_strmapi`](./src/ft_strmapi.c)       | Applies a function to each character of a string. |
| [`ft_striteri`](./src/ft_striteri.c)     | Iterates over a string and applies a function to each character. |
| [`ft_putchar_fd`](./src/ft_putchar_fd.c) | Outputs a character to a file descriptor. |
| [`ft_putstr_fd`](./src/ft_putstr_fd.c)   | Outputs a string to a file descriptor.    |
| [`ft_putendl_fd`](./src/ft_putendl_fd.c) | Outputs a string followed by a newline to a file descriptor. |
| [`ft_putnbr_fd`](./src/ft_putnbr_fd.c)   | Outputs an integer to a file descriptor.  |

---

### Bonus Functions
Implementing linked list functions.

| Function                                     | Description                                |
|----------------------------------------------|--------------------------------------------|
| [`ft_lstnew`](./src/ft_lstnew.c)             | Creates a new linked list node.            |
| [`ft_lstadd_front`](./src/ft_lstadd_front.c) | Adds a node to the front of a linked list. |
| [`ft_lstsize`](./src/ft_lstsize.c)           | Computes the size of a linked list.        |
| [`ft_lstlast`](./src/ft_lstlast.c)           | Retrieves the last node of a linked list.  |
| [`ft_lstadd_back`](./src/ft_lstadd_back.c)   | Adds a node to the back of a linked list.  |
| [`ft_lstdelone`](./src/ft_lstdelone.c)       | Deletes a single node from a linked list.  |
| [`ft_lstclear`](./src/ft_lstclear.c)         | Clears and deletes all nodes of a linked list. |
| [`ft_lstiter`](./src/ft_lstiter.c)           | Iterates over a linked list and applies a function. |
| [`ft_lstmap`](./src/ft_lstmap.c)             | Maps a function over a linked list and creates a new list. |


---

### `ft_printf`
Separate Project Integration ([see *ft_printf* pdf](https://github.com/SaydRomey/42_ressources/blob/main/pdf/ft_printf.pdf))

| Function | Description |
|----------|-------------|
| [`ft_printf`](./src/ft_printf.c#L42) | Formatted output to standard output. |
| [`ft_fprintf`](./src/ft_printf.c#L70) | Formatted output to a file descriptor. |
| [`ft_vprintf`](./src/ft_printf.c#L98) | Formatted output using a va_list to standard output. |
| [`ft_vfprintf`](./src/ft_printf.c#L124) | Formatted output using a va_list to a file descriptor. |
| [`ft_intlen`](./src/ft_intlen.c) | Calculates the number of digits in an integer. |
| [`ft_putnbr_base_fd`](./src/ft_putnbr_base_fd.c) | Writes a number in a specified base to a file descriptor. |

> Only 'ft_printf' was required for the project.  
> The functions `ft_fprintf`, `ft_vprintf` and `ft_vfprintf` were implemented during later projects.  
> `ft_intlen` and `ft_putnbr_base_fd` are helper functions.

---

### `get_next_line`
Separate Project Integration ([see *get_next_line* pdf](https://github.com/SaydRomey/42_ressources/blob/main/pdf/get_next_line.pdf))

| Function | Description |
|----------|-------------|
| [`get_next_line`](./src/get_next_line.c#L42) | Reads a single line from a file descriptor. |
| [`get_next_line_bonus`](./src/get_next_line.c#L66) | Extended version of `get_next_line` supporting multiple file descriptors. |

---

### Custom Functions Added in Other Projects
These functions were added over time for use in different projects.

| Function | Description |
|----------|-------------|
| [`ft_islower`](./src/ft_isalpha.c#L23) | Checks if a character is lowercase. |
| [`ft_isupper`](./src/ft_isalpha.c#L31) | Checks if a character is uppercase. |
| [`ft_str_isdigit`](./src/ft_isdigit.c#L38) | Checks if a string consists only of digits. |
| [`ft_isxdigit`](./src/ft_isdigit.c#L23) | Checks if a character is a valid hexadecimal digit. |
| [`ft_isspace`](./src/ft_isspace.c) | Checks if a character is whitespace. |
| [`ft_isblank`](./src/ft_isspace.c#L24) | Checks if a character is a blank space or tab. |
| [`ft_tolower`](./src/ft_tolower.c) | Converts a character to lowercase. |
| [`ft_toupper`](./src/ft_toupper.c) | Converts a character to uppercase. |
| [`ft_strcmp`](./src/ft_strncmp.c#L79) | Compares two strings. |
| [`ft_strrncmp`](./src/ft_strncmp.c#L65) | Compares the last `n` characters of two strings. |
| [`ft_atoi_base`](./src/ft_atoi_base.c) | Converts a string to an integer using a specified base. |
| [`ft_strjoin_with`](./src/ft_strjoin.c#L82) | Concatenates two strings with a delimiter. |
| [`ft_putchar`](./src/ft_putchar_fd.c#L28) | Outputs a character. |
| [`ft_putstr`](./src/ft_putstr_fd.c#L38) | Outputs a string. |
| [`ft_putendl`](./src/ft_putendl_fd.c#L33) | Outputs a string followed by a newline. |
| [`ft_putnbr`](./src/ft_putnbr_fd.c#L90) | Outputs an integer. |
| [`ft_lstremoveone`](./src/ft_lstdelone.c#L34) | Removes a node from a linked list. |
| [`ft_lstswap`](./src/ft_lstswap.c) | Swaps contents of two linked list nodes. |
| [`ft_lstswitch`](./src/ft_lstswitch.c#L75) | Switches the position of two nodes. |
| [`ft_lstsort`](./src/ft_lstsort.c) | Sorts a linked list. |
| [`ft_lstget`](./src/ft_lstget.c) | Retrieves a node at a specific index. |
| [`ft_swap`](./src/ft_swap.c) | Swaps two integers. |
| [`ft_min`](./src/ft_min.c) | Returns the smaller of two integers. |
| [`ft_zmin`](./src/ft_min.c#L23) | Returns the smaller of two `size_t` values. |
| [`ft_fmin`](./src/ft_min.c#L31) | Returns the smaller of two float values. |
| [`ft_max`](./src/ft_max.c) | Returns the larger of two integers. |
| [`ft_zmax`](./src/ft_max.c#L23) | Returns the larger of two `size_t` values. |
| [`ft_fmax`](./src/ft_max.c#L31) | Returns the larger of two float values. |
| [`ft_abs`](./src/ft_abs.c) | Returns the absolute value of an integer. |
| [`ft_fabs`](./src/ft_abs.c#L26) | Returns the absolute value of a float. |
| [`exit_error`](./src/exit_error.c) | Exits with an error message. |
| [`va_exit_error`](./src/exit_error.c#L30) | Exits with a formatted error message. |
| [`exit_perror`](./src/exit_error.c#L45) | Exits with an error message based on `perror()`. |
| [`safe_free`](./src/ft_free.c#L19) | Frees memory and sets the pointer to NULL. |
| [`free_split`](./src/ft_free.c#L28) | Frees an array of strings (from `ft_split`). |
| [`free_matrix`](./src/ft_free.c#L41) | Frees a dynamically allocated 2D integer array. |
| [`flow_check`](./src/flow_check.c) | Checks for valid number input using `itoa` and `atoi` comparison. |
| [`read_check`](./src/read_check.c) | Checks if a file is empty, valid, or unreadable. |
| [`char_count`](./src/char_count.c) | Counts occurrences of a character in a string. |
| [`ft_strainbow`](./src/ft_strainbow.c#L65) | Prints a string with rainbow colors. |
| [`color_str`](./src/ft_strainbow.c#L91) | Returns a string with a color applied. |
| [`ft_rand`](./src/ft_rand.c) | Generates a random number within a range. |
| [`ft_clamp`](./src/ft_clamp.c) | Clamps a value between a minimum and maximum. |
| [`ft_fclamp`](./src/ft_clamp.c#L20) | Clamps a float value between a minimum and maximum. |
| [`ft_wrap`](./src/ft_wrap.c) | Wraps a value within a given range (if `value > max`, set `value = min`, etc.). |


---

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/SaydRomey/libft.git
   cd libft

2. Compile the library:
   ```bash
   make
   ```

3. Include libft.h in your C projects and link the compiled library:
   ```c
   #include "libft.h"
   gcc -L. -lft your_program.c -o your_program
   ```

---

# Makefile Instructions

```bash
make <target>
```

## Required Targets
- `all`: Compiles all source files into object files and creates the `libft.a` library.
- `clean`: Removes all compiled object files (.o) in the obj directory.
- `fclean`: Removes all compiled object files and the libft.a library.
- `re`: Runs the fclean target and then the all target to recompile everything from scratch.

## Additional Targets
- `norm`: Runs [norminette](https://github.com/42School/norminette) on all .h and .c files to check for coding style compliance.
- `nm`: Displays all the functions in the compiled libft.a library. Filters out any symbols not starting with ft_ and removes duplicates.
- `title`: Prints a custom ASCII art title in the terminal.

---

# Installing `libft` as a System Library

To make `libft` usable with `#include <libft.h>` in yout projects, follow these steps:

## 1. Build the Library
Run the following command to build the `libft.a` static library:
```bash
make
```

## 2. Copy the Library to a System Location
Move the `libft.a` file to a standard system library path, such as `/usr/local/lib`:
```bash
sudo cp libft.a /usr/local/lib
```

## 3. Copy the Header File
Move the `libft.h` file to a standard include path, such as `/usr/local/include`:
```bash
sudo cp inc/libft.h /usr/local/include
```
## 4. Update the System's Library Cache (if needed)
Run `ldconfig` to update the linker cache:
```bash
sudo ldconfig
```
## 5. Using `libft` in Your Code
Now you can use `#include <libft.h>` in your C files.  
To compile a program that uses `libft`, link it with the library like this:
```bash
gcc -Wall -Wextra -Werror -L/usr/local/lib -lft your_program.c -o your_program
```
## 6. Verify the Setup
To check that the library is installed correctly, use:
```bash
nm /usr/local/lib/libft.a
```
This should list all the functions defined in your library.

---

# Useful links

[Francinette](https://github.com/xicodomingues/francinette) - A Tester for some 42 projects


