#include "libft.h"


/*Copies the first n bytes from the memory region pointed to by src to the memory region pointed to by dest.
It returns a pointer to the destination region.*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *psrc; 
	unsigned char *pdest;
	int i;

	psrc = (unsigned char *)src; 
	pdest = (unsigned char *)dest;
	i = 0;
	if (dest == 0 && src == 0)
		return (dest);
	while (n > 0)
	{
		pdest[i] = psrc[i]; 
		i++;
		n--;
	}
	return (dest);
}
