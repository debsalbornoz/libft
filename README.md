<h1 align="center">Libft</h1>

![libfte](https://github.com/debsalbornoz/libft/assets/119970138/22b14898-85a2-431d-b58f-dd4aa7fb2a64)


<img alt="Static Badge" src="https://img.shields.io/badge/Status-Finished-green">

<h2>About </h2>

"Libft" is a C library developed by students from the 42 programming school. This project involves the recreation of various standard functions from the C library entirely from scratch, without relying on any pre-existing functions provided by the standard C library. In addition to replicating these essential functions, "Libft" also includes additional features such as memory manipulation, array searching and sorting, string manipulation, basic mathematical operations, and file handling.

To undertake these tasks, a strong understanding of fundamental programming concepts, such as conditional logic, loops, and data structures, is crucial. The primary objective of this project is to gain a better understanding of basic C operations while enhancing problem-solving and programming skills. Building "Libft" requires efficiency and precision, adhering strictly to the guidelines and standards outlined by 42.

Take your time to navigate through the libft repository, experiment with the code, and smoothly integrate these functions into your projects. If you encounter any challenges or have ideas for enhancements, your contributions are immensely valued!

<h2>Functions developed:</h2>

<h3>Functions from Libc:</h3>

•[ft_isalpha ](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_isalpha.c) - checks for an alphabetic character.

•[ft_isdigit](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_isdigit.c) - checks for a digit (0 through 9).

•[ft_isalnum](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_isalnum.c) - checks for an alphanumeric character.

•[ft_isascii](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_isascii.c) - checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.

•[ft_isprint](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_isprint.c) - checks for any printable character including space.

•[ft_strlen](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strlen.c) - calculates the length of the string s, excluding the terminating null byte.

•[ft_memset](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_memset.c) - fills the first n bytes of the memory area pointed to by s with the constant byte c.

•[ft_bzero](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_bzero.c) - erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zero to that area.

•[ft_memcpy](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_memcpy.c) - copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.

•[ft_memmove](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_memmove.c) - copies n bytes from memory area src to memory area dest.  The memory areas may overlap.

•[ft_strlcpy](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strlcpy.c) - copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

•[ft_strlcat](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strlcat.c) - appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

•[ft_toupper](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_toupper.c) - convert lowercase letters to uppercase.

•[ft_tolower](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_tolower.c) - conver uppercase letters to lowercase.

•[ft_strchr](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strchr.c) - returns a pointer to the first occurrence of the character c in the string s.

•[ft_strrchr](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strrchr.c) - locate the last occurrence of c (converted to a char) in the string pointed to by s.

•[ft_strncmp](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strncmp.c) - compares the first (at most) n bytes of s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.

•[ft_memchr](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_memchr.c) - scans the initial n bytes of the memory area pointed to by s for the first instance of c.

•[ft_memcmp](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_memcmp.c) - compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.

•[ft_strnstr](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strnstr.c)-  locates the first	occurrence of the  null-terminated  string little in the string big, where not more than len characters are	searched.

•[ft_atoi](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_atoi.c) - converts the initial portion of the string pointed to by nptr to int. 

•[ft_calloc](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_calloc.c) - allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. 

•[ft_strdup](https://github.com/debsalbornoz/libft/blob/main/Libc%20functions/ft_strdup.c) -  returns a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained with malloc(3)

<h2>How to use</h2>
This project is written in C and needs the gcc compiler. You can clone this repository, enter the project folder and run "make all". To use in your project include "#include "libft.h"".


