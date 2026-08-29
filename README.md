<h1 align="center">Libft</h1>

<div align="center">
<img src="https://github.com/debsalbornoz/libft/assets/119970138/22b14898-85a2-431d-b58f-dd4aa7fb2a64">
</div>

<div align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/Status-Finished-green">
<img alt="Static Badge" src="https://img.shields.io/badge/42-Project-blue">
<img alt="Static Badge" src="https://img.shields.io/badge/Language-C-lightgrey">
</div>

## About

**Libft** is a custom C library built as a project for **42 School**. It involves recreating a wide range of standard C library functions entirely from scratch, without relying on any pre-existing implementations.

Beyond replicating these core functions, Libft also introduces additional utilities for memory management, array searching and sorting, string manipulation, basic math operations, and file handling.

Completing this project requires a solid understanding of fundamental programming concepts — conditional logic, loops, and data structures. The main goal is to build a deeper understanding of low-level C operations while sharpening problem-solving and programming skills. Every function in Libft was built with efficiency and precision in mind, strictly following 42's coding standards (the *Norm*).

Feel free to explore the repository, test the code, and integrate these functions into your own projects. If you run into any issues or have ideas for improvements, contributions are always welcome!

## Table of Contents

- [Functions](#functions)
  - [`<ctype.h>` Functions](#ctypeh-functions)
  - [`<string.h>` Functions](#stringh-functions)
  - [`<stdlib.h>` Functions](#stdlibh-functions)
  - [Additional Functions](#additional-functions)
- [How to Use](#how-to-use)
  - [Requirements](#requirements)
  - [Instructions](#instructions)

## Functions

### `<ctype.h>` Functions

| Function | Description |
|----------|-------------|
| **[ft_isalpha](https://github.com/debsalbornoz/libft/blob/main/libft/ft_isalpha.c)** | Checks whether a character is alphabetic. |
| **[ft_isdigit](https://github.com/debsalbornoz/libft/blob/main/libft/ft_isdigit.c)** | Checks whether a character is a digit (0–9). |
| **[ft_isalnum](https://github.com/debsalbornoz/libft/blob/main/libft/ft_isalnum.c)** | Checks whether a character is alphanumeric. |
| **[ft_isascii](https://github.com/debsalbornoz/libft/blob/main/libft/ft_isascii.c)** | Checks whether a character belongs to the ASCII set. |
| **[ft_isprint](https://github.com/debsalbornoz/libft/blob/main/libft/ft_isprint.c)** | Checks whether a character is printable. |
| **[ft_toupper](https://github.com/debsalbornoz/libft/blob/main/libft/ft_toupper.c)** | Converts lowercase letters to uppercase. |
| **[ft_tolower](https://github.com/debsalbornoz/libft/blob/main/libft/ft_tolower.c)** | Converts uppercase letters to lowercase. |

### `<string.h>` Functions

| Function | Description |
|----------|-------------|
| **[ft_strlen](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strlen.c)** | Calculates the length of string `s`, excluding the terminating null byte. |
| **[ft_memset](https://github.com/debsalbornoz/libft/blob/main/libft/ft_memset.c)** | Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `c`. |
| **[ft_bzero](https://github.com/debsalbornoz/libft/blob/main/libft/ft_bzero.c)** | Erases `n` bytes of memory starting at `s`, writing zeros into that area. |
| **[ft_memcpy](https://github.com/debsalbornoz/libft/blob/main/libft/ft_memcpy.c)** | Copies `n` bytes from memory area `src` to memory area `dest` (must not overlap). |
| **[ft_memmove](https://github.com/debsalbornoz/libft/blob/main/libft/ft_memmove.c)** | Copies `n` bytes from memory area `src` to memory area `dest` (may overlap). |
| **[ft_strlcpy](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strlcpy.c)** | Copies up to a specified size from the source string to the destination string. |
| **[ft_strlcat](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strlcat.c)** | Concatenates strings up to a specified size. |
| **[ft_strchr](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strchr.c)** | Returns a pointer to the first occurrence of character `c` in string `s`. |
| **[ft_strrchr](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strrchr.c)** | Finds the last occurrence of `c` in the string pointed to by `s`. |
| **[ft_strncmp](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strncmp.c)** | Compares the first `n` bytes of `s1` and `s2`. |
| **[ft_memchr](https://github.com/debsalbornoz/libft/blob/main/libft/ft_memchr.c)** | Scans the first `n` bytes of the memory area pointed to by `s` for the first instance of `c`. |
| **[ft_memcmp](https://github.com/debsalbornoz/libft/blob/main/libft/ft_memcmp.c)** | Compares the first `n` bytes of memory areas `s1` and `s2`. |
| **[ft_strnstr](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strnstr.c)** | Locates the first occurrence of a substring within a string. |
| **[ft_strdup](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strdup.c)** | Duplicates a string. |

### `<stdlib.h>` Functions

| Function | Description |
|----------|-------------|
| **[ft_atoi](https://github.com/debsalbornoz/libft/blob/main/libft/ft_atoi.c)** | Converts a string to an `int`. |
| **[ft_calloc](https://github.com/debsalbornoz/libft/blob/main/libft/ft_calloc.c)** | Allocates memory and initializes it to zero. |

### Additional Functions

| Function | Description |
|----------|-------------|
| **[ft_substr](https://github.com/debsalbornoz/libft/blob/main/libft/ft_substr.c)** | Allocates and returns a substring. |
| **[ft_strjoin](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strjoin.c)** | Allocates and returns a new string, the result of concatenating `s1` and `s2`. |
| **[ft_strtrim](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strtrim.c)** | Allocates and returns a copy of `s1` with the characters in `set` trimmed from the start and end. |
| **[ft_split](https://github.com/debsalbornoz/libft/blob/main/libft/ft_split.c)** | Allocates and returns an array of strings obtained by splitting a string using a delimiter. |
| **[ft_itoa](https://github.com/debsalbornoz/libft/blob/main/libft/ft_itoa.c)** | Allocates and returns a string representing the integer passed as an argument. |
| **[ft_strmapi](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strmapi.c)** | Applies function `f` to each character of string `s`, passing its index as the first argument, creating a new resulting string. |
| **[ft_striteri](https://github.com/debsalbornoz/libft/blob/main/libft/ft_striteri.c)** | Applies function `f` to each character of the given string. |
| **[ft_putchar_fd](https://github.com/debsalbornoz/libft/blob/main/libft/ft_putchar_fd.c)** | Outputs a character to the given file descriptor. |
| **[ft_putstr_fd](https://github.com/debsalbornoz/libft/blob/main/libft/ft_putstr_fd.c)** | Outputs a string to the given file descriptor. |
| **[ft_putendl_fd](https://github.com/debsalbornoz/libft/blob/main/libft/ft_putendl_fd.c)** | Outputs a string to the given file descriptor, followed by a newline. |
| **[ft_putnbr_fd](https://github.com/debsalbornoz/libft/blob/main/libft/ft_putnbr_fd.c)** | Outputs an integer to the given file descriptor. |

## How to Use

### Requirements

This project is written in C and requires a `cc` or `gcc` compiler.

### Instructions

1. Clone the repository:

    ```bash
    git clone https://github.com/debsalbornoz/libft.git
    ```

2. Build the library:

    | Command | Description |
    |---------|-------------|
    | `make all` | Compiles all files and creates the library (`libft.a`). |
    | `make re` | Removes all files and recompiles the project. |
    | `make clean` | Removes temporary object files. |
    | `make fclean` | Removes all generated files, keeping only the original source. |

3. Include the library in your project:

    ```c
    #include "libft.h"
    ```

---

<p align="center">Built as part of the 42 curriculum 🖥️</p>
