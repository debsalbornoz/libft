<h1 align="center">Libft</h1>


<div align="center">
<img src="https://github.com/debsalbornoz/libft/assets/119970138/22b14898-85a2-431d-b58f-dd4aa7fb2a64">
</div> 
<div align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/Status-Finished-green">
</div>
<h2>About </h2>

"Libft" is a C library developed for a project at the 42 programming school. This project involves the recreation of various functions from the C standard libraries entirely from scratch, without relying on any pre-existing functions. In addition to replicating these essential functions, "Libft" also includes additional features such as memory manipulation, array searching and sorting, string manipulation, basic mathematical operations, and file handling.

To undertake these tasks, a strong understanding of fundamental programming concepts, such as conditional logic, loops, and data structures, is crucial. The primary objective of this project is to gain a better understanding of basic C operations while enhancing problem-solving and programming skills. Building "Libft" requires efficiency and precision, adhering strictly to the guidelines and standards outlined by 42.

Take your time to navigate through the libft repository, experiment with the code, and smoothly integrate these functions into your projects. If you encounter any challenges or have ideas for enhancements, your contributions are immensely valued!

<h2>Functions developed:</h2>


<h3>Functions from &lt;ctype.h&gt; library : </h3>


•[ft_isalpha ](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_isalpha.c) - Checks for an alphabetic character.

•[ft_isdigit](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_isdigit.c) - Checks for a digit (0 through 9).

•[ft_isalnum](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_isalnum.c) - Checks for an alphanumeric character.

•[ft_isascii](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_isascii.c) - Checks for an ASCII.character set.

•[ft_isprint](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_isprint.c) - Checks for any printable character.

•[ft_toupper](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_toupper.c) - Convert lowercase letters to uppercase.

•[ft_tolower](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_tolower.c) - Convert uppercase letters to lowercase.


<h3> Functions from  &lt;string.h&gt; </h3>


•[ft_strlen](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strlen.c) - Calculates the length of the string s, excluding the terminating null byte.

•[ft_memset](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_memset.c) - Fills the first n bytes of the memory area pointed to by s with the constant byte c.

•[ft_bzero](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_bzero.c) - Erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zero to that area.

•[ft_memcpy](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_memcpy.c) - Copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.

•[ft_memmove](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_memmove.c) - Copies n bytes from memory area src to memory area dest.  The memory areas may overlap.

•[ft_strlcpy](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strlcpy.c) -  Copies up to a specified size from the source string to the destination string. 
•[ft_strlcat](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strlcat.c) - Concatenates strings up to a specified size.

•[ft_strchr](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strchr.c) - Returns a pointer to the first occurrence of the character c in the string s.

•[ft_strrchr](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strrchr.c) - Locate the last occurrence of c (converted to a char) in the string pointed to by s.

•[ft_strncmp](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strncmp.c) - Compares the first n bytes of s1 and s2. 

•[ft_memchr](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_memchr.c) -Scans the initial n bytes of the memory area pointed to by s for the first instance of c.

•[ft_memcmp](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_memcmp.c) - Compares the first n bytes of the memory areas s1 and s2.

•[ft_strnstr](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strnstr.c)-  Locates the first	occurrence of a substring in the string.

•[ft_strdup](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strdup.c) -  Duplicates a string.


<h3>Functions from  &lt;stdlib.h&gt; </h3>


•[ft_atoi](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_atoi.c) - Converts a string in a int.

•[ft_calloc](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_calloc.c) - Alocates memory and sets the memory to zero.

<h3>Additional functions:</h3>

•[ft_substr](https://github.com/debsalbornoz/libft/blob/main/Additional%20functions/ft_substr.c) - Allocates and returns a substring.

•[ft_strjoin](https://github.com/debsalbornoz/libft/blob/main/Additional%20functions/ft_strjoin.c) - Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’

•[ft_strtrim](https://github.com/debsalbornoz/libft/blob/main/Additional%20functions/ft_strtrim.c) - Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

•[ft_split](https://github.com/debsalbornoz/libft/blob/main/Additional%20functions/ft_split.c) - Allocates and returns an array of strings obtained by splitting the string using a delimiter.

•[ft_itoa](https://github.com/debsalbornoz/libft/blob/main/Additional%20functions/ft_itoa.c) - Allocates and returns a string representing the integer received as an argument.

•[ft_strmapi](https://github.com/debsalbornoz/libft/blob/main/Additional%20functions/ft_strmapi.c) - Applies the function ’f’ to each character of thestring ’s’, and passing its index as first argumentto create a new string resulting from successive applications of ’f’.

•[ft_striteri](https://github.com/debsalbornoz/libft/blob/main/Additional%20functions/ft_striteri.c) - Applies the function ’f’ on each character of the string passed as argument.

•[ft_putchar_fd](https://github.com/debsalbornoz/libft/blob/main/Additional%20functions/ft_putchar_fd.c) - Outputs a character to the given filedescriptor.

•[ft_putstr_fd](https://github.com/debsalbornoz/libft/blob/main/Additional%20functions/ft_putstr_fd.c) - Outputs a string to the given file descriptor.

•[ft_putendl_fd](https://github.com/debsalbornoz/libft/blob/main/Additional%20functions/ft_putendl_fd.c) - Outputs a string to the given file descriptor followed by a newline.

•[ft_putnbr_fd](https://github.com/debsalbornoz/libft/blob/main/Additional%20functions/ft_putnbr_fd.c) - Outputs a integer to the given filedescriptor.


<h2>Usage</h2>

<h3> Requirements:</h3>

This project is written in C and needs the cc compiler.


<h3>Instructions</h3>

•Clone the repository 

```
git clone https://github.com/debsalbornoz/libft.git
```

•Run:

"make all" - compiles all files and create the library(libft.a).

"make re" - remove all files and recompile the project.

"make clean" - remove the temporary files.

"make flean" - remove all the files created leaving only the originals files.

•To use the library in your project include 

```
#include "libft.h"
```


