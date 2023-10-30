#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str; 

	str = (unsigned char *)s; 
	while (n > 0)
	{
		// If the current byte does not match 'c', move to the next byte in the memory area
		if (*str != (unsigned char)c)
			str++;
		// If a match is found, return a pointer to the current byte
		else
			return ((void *)str);
		n--;
	}

	// Return NULL if 'c' is not found in the specified memory area
	return (NULL);
}
