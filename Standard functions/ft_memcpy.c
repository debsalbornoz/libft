#include "libft.h"

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *psrc; 
	unsigned char *pdest;

	psrc = (unsigned char *)src; 
	pdest = (unsigned char *)dest;

	// If both source and destination pointers are NULL, no operation is performed
	if (dest == 0 && src == 0)
		return (dest);

	// Iterate through the memory areas and copy 'n' bytes from source to destination
	while (n > 0)
	{
		*pdest = *psrc; 
		psrc++;
		pdest++;
		n--;
	}

	// Return a pointer to the destination memory area after copying is complete
	return (dest);
}
