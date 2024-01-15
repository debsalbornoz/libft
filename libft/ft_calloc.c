#include "libft.h"

//Allocates and returns a zero-initialized memory region to store a specific number of elements of a given size.

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str; 
	size_t	total;  

	str = NULL;
	total = size * nmemb;

	// Check for potential overflow
	if (total != 0 && total / size != nmemb)
		return (NULL);

	// Allocate memory for the block 
	str = malloc(total);
	if (!str)
		return (NULL);

	// Initialize the allocated memory block with zeros using ft_bzero function
	ft_bzero(str, total);

	// Return a pointer to the allocated and initialized memory block
	return (str);
}
