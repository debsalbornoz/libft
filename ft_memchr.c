#include "libft.h"

//Searches for the first occurrence of a specific byte in a memory region and returns a pointer to that position. 

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str; 

	str = (unsigned char *)s; 
	while (n > 0)
	{
		if (*str != (unsigned char)c)
			str++;
		else
			return ((void *)str);
		n--;
	}
	return (NULL);
}
