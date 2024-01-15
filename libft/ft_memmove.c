#include "libft.h"

/*Copies the first n bytes from the memory region pointed to by src to the memory region pointed to by dest.
It handles overlapping regions correctly by copying safely, even if the source and destination regions overlap.*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *pdest;
	const unsigned char *psrc;

	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	if (psrc < pdest)
	{
		while (n > 0)
		{
			n--;
			pdest[n] = psrc[n];
		}
	}
	else
		ft_memcpy(pdest, psrc, n);
	return (dest);
}
