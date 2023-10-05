#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdest;

	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	if (dest == 0 && src == 0)
	{
		return (dest);
	}
	while (n > 0)
	{
		*pdest = *psrc;
		psrc++;
		pdest++;
		n--;
	}
	return (dest);
}
