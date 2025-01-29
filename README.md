
(WIP) : Links not yet added

---

# libft

Welcome to `libft`, the first project in the 42 Common Core curriculum!  
This project introduces the basics of C programming and library development by implementing a standard C library.  
It is designed to strengthen your understanding of algorithms, memory management, and function implementation.

## Project Description

The goal of `libft` is to reimplement functions from the standard C library, as well as some additional utility functions,  
to create a custom library that will be reused in future projects.  
Below, you’ll find a categorized list of all the functions included in this repository.

### Project PDFs
- [English Version](https://github.com/SaydRomey/42_ressources/blob/main/pdf/libft_en.pdf)
- [French Version](https://github.com/SaydRomey/42_ressources/blob/main/pdf/ft_irc_fr.pdf)

### Libc Functions
These functions were required by the `libft` project PDF.

| Function | Description |
|----------|-------------|
| [`ft_isalpha`]() | Checks if a character is alphabetic. |
| [`ft_isdigit`]() | Checks if a character is a digit (0-9). |
| [`ft_isalnum`]() | Checks if a character is alphanumeric. |
| [`ft_isascii`]() | Checks if a character is in the ASCII set. |
| [`ft_isprint`]() | Checks if a character is printable. |
| [`ft_strlen`]() | Computes the length of a string. |
| [`ft_memset`]() | Fills memory with a constant byte. |
| [`ft_bzero`]() | Sets memory to zero. |
| [`ft_memcpy`]() | Copies memory from one area to another. |
| [`ft_memmove`]() | Copies memory safely from one area to another. |
| [`ft_strlcpy`]() | Copies a string with size limitation. |
| [`ft_strlcat`]() | Concatenates a string with size limitation. |
| [`ft_toupper`]() | Converts a character to uppercase. |
| [`ft_tolower`]() | Converts a character to lowercase. |
| [`ft_strchr`]() | Locates the first occurrence of a character in a string. |
| [`ft_strrchr`]() | Locates the last occurrence of a character in a string. |
| [`ft_strncmp`]() | Compares two strings up to `n` characters. |
| [`ft_memchr`]() | Locates a byte in memory. |
| [`ft_memcmp`]() | Compares two memory areas. |
| [`ft_strnstr`]() | Locates a substring within a string up to `n` characters. |
| [`ft_atoi`]() | Converts a string to an integer. |
| [`ft_calloc`]() | Allocates memory and initializes it to zero. |
| [`ft_strdup`]() | Duplicates a string in allocated memory. |

### Additional Functions
These functions were required by the project but involved `malloc()`.

| Function | Description |
|----------|-------------|
| [`ft_substr`]() | Extracts a substring from a string. |
| [`ft_strjoin`]() | Concatenates two strings into a new allocated string. |
| [`ft_strtrim`]() | Removes specified characters from the beginning and end of a string. |
| [`ft_split`]() | Splits a string into an array of substrings based on a delimiter. |
| [`ft_itoa`]() | Converts an integer to a string. |
| [`ft_strmapi`]() | Applies a function to each character of a string. |
| [`ft_striteri`]() | Iterates over a string and applies a function to each character. |
| [`ft_putchar_fd`]() | Outputs a character to a file descriptor. |
| [`ft_putstr_fd`]() | Outputs a string to a file descriptor. |
| [`ft_putendl_fd`]() | Outputs a string followed by a newline to a file descriptor. |
| [`ft_putnbr_fd`]() | Outputs an integer to a file descriptor. |

---

### Bonus Functions (Linked List)
These functions were required for the `libft` bonus part.

| Function | Description |
|----------|-------------|
| [`ft_lstnew`]() | Creates a new linked list node. |
| [`ft_lstadd_front`]() | Adds a node to the front of a linked list. |
| [`ft_lstsize`]() | Computes the size of a linked list. |
| [`ft_lstlast`]() | Retrieves the last node of a linked list. |
| [`ft_lstadd_back`]() | Adds a node to the back of a linked list. |
| [`ft_lstdelone`]() | Deletes a single node from a linked list. |
| [`ft_lstclear`]() | Clears and deletes all nodes of a linked list. |
| [`ft_lstiter`]() | Iterates over a linked list and applies a function. |
| [`ft_lstmap`]() | Maps a function over a linked list and creates a new list. |

---

### `ft_printf`
Separate Project Integration ([see *ft_printf* pdf](https://github.com/SaydRomey/42_ressources/blob/main/pdf/ft_printf.pdf))

| Function | Description |
|----------|-------------|
| [`ft_printf`]() | Formatted output to standard output. |
| [`ft_fprintf`]() | Formatted output to a file descriptor. |
| [`ft_vprintf`]() | Formatted output using a va_list to standard output. |
| [`ft_vfprintf`]() | Formatted output using a va_list to a file descriptor. |
| [`ft_intlen`]() | Calculates the number of digits in an integer. |
| [`ft_putnbr_base_fd`]() | Writes a number in a specified base to a file descriptor. |

---

### `get_next_line`
Separate Project Integration ([see *get_next_line* pdf](https://github.com/SaydRomey/42_ressources/blob/main/pdf/get_next_line.pdf))

| Function | Description |
|----------|-------------|
| [`get_next_line`]() | Reads a single line from a file descriptor. |
| [`get_next_line_bonus`]() | Extended version of `get_next_line` supporting multiple file descriptors. |

---

### Custom Functions Added in Other Projects
These functions were added over time for use in different projects.

| Function | Description | Project |
|----------|-------------|---------|
| [`ft_islower`]() | Checks if a character is lowercase. | |
| [`ft_isupper`]() | Checks if a character is uppercase. | |
| [`ft_str_isdigit`]() | Checks if a string consists only of digits. | |
| [`ft_isxdigit`]() | Checks if a character is a valid hexadecimal digit. | |
| [`ft_isspace`]() | Checks if a character is whitespace. | |
| [`ft_isblank`]() | Checks if a character is a blank space or tab. | |
| [`ft_tolower`]() | Converts a character to lowercase. | |
| [`ft_toupper`]() | Converts a character to uppercase. | |
| [`ft_strcmp`]() | Compares two strings. | |
| [`ft_strrncmp`]() | Compares the last `n` characters of two strings. | |
| [`ft_strsame`]() | Checks if two strings are exactly the same. | |
| [`ft_atoi_base`]() | Converts a string to an integer using a specified base. | |
| [`ft_strjoin_with`]() | Concatenates two strings with a delimiter. | |
| [`ft_putchar`]() | Outputs a character. | |
| [`ft_putstr`]() | Outputs a string. | |
| [`ft_putendl`]() | Outputs a string followed by a newline. | |
| [`ft_putnbr`]() | Outputs an integer. | |
| [`ft_lstremoveone`]() | Removes a node from a linked list. | |
| [`ft_lstswap`]() | Swaps two linked list nodes. | |
| [`ft_lstswitch`]() | Switches the position of two nodes. | |
| [`ft_lstsort`]() | Sorts a linked list. | |
| [`ft_lstget`]() | Retrieves a node at a specific index. | |
| [`ft_swap`]() | Swaps two integers. | Push Swap |
| [`ft_min`]() | Returns the smaller of two integers. | Push Swap |
| [`ft_zmin`]() | Returns the smaller of two `size_t` values. | Push Swap |
| [`ft_fmin`]() | Returns the smaller of two float values. | Push Swap |
| [`ft_max`]() | Returns the larger of two integers. | Push Swap |
| [`ft_zmax`]() | Returns the larger of two `size_t` values. | Push Swap |
| [`ft_fmax`]() | Returns the larger of two float values. | Push Swap |
| [`ft_abs`]() | Returns the absolute value of an integer. | FdF |
| [`ft_fabs`]() | Returns the absolute value of a float. | FdF |
| [`exit_error`]() | Exits with an error message. | FdF |
| [`va_exit_error`]() | Exits with a formatted error message. | FdF |
| [`exit_perror`]() | Exits with an error message based on `perror()`. | FdF |
| [`safe_free`]() | Frees memory and sets the pointer to NULL. | FdF |
| [`free_split`]() | Frees an array of strings (from `ft_split`). | FdF |
| [`free_matrix`]() | Frees a dynamically allocated 2D integer array. | FdF |
| [`flow_check`]() | Checks for valid number input using `itoa` and `atoi` comparison. | |
| [`read_check`]() | Checks if a file is empty, valid, or unreadable. | |
| [`char_count`]() | Counts occurrences of a character in a string. | |
| [`ft_strainbow`]() | Prints a string with rainbow colors. | |
| [`color_str`]() | Returns a string with a color applied. | |
| [`ft_rand`]() | Generates a random number within a range. | |
| [`ft_clamp`]() | Clamps a value between a minimum and maximum. | |
| [`ft_fclamp`]() | Clamps a float value between a minimum and maximum. | |
| [`ft_wrap`]() | Wraps a value within a given range (if `value > max`, set `value = min`, etc.). | |


---

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/libft.git
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

To make `libft` usable with `#include <libft.h> in yout projects, follow these steps:

## 1. Build the Library
Run the following command to build the libft.a static library:
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
## 5. Using libft in Your Code
Now you can use #include <libft.h> in your C files.  
To compile a program that uses libft, link it with the library like this:
```bash
gcc -Wall -Wextra -Werror -L/usr/local/lib -lft your_program.c -o your_program
```
## 6. Verify the Setup
To check that the library is installed correctly, use:
```bash
nm /usr/local/lib/libft.a
```
This should list all the functions defined in your library.


