#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (psrc < pdest)
	{
		while (n > 0)
		{
			n--;
			pdest[n] = psrc[n];
		}
	}
	else
	{
		ft_memcpy(pdest, psrc, n);
	}
	return (dest);
}