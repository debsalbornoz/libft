#include "libft.h"

/*Fills the first n bytes of the memory region pointed to by s with the value specified by c.
It returns a pointer to the modified memory region*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}
