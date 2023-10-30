#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str; 
	size_t	total;  

	str = NULL;
	total = size * nmemb;  // Calculate the total size of the memory block

	// Check for potential overflow during multiplication
	if (total != 0 && total / size != nmemb)
		return (NULL); // Return NULL if overflow is detected

	// Allocate memory for the block of size 'total'
	str = malloc(total);
	if (!str)
		return (NULL); // Return NULL if memory allocation fails

	// Initialize the allocated memory block with zeros using ft_bzero function
	ft_bzero(str, total);

	// Return a pointer to the allocated and initialized memory block
	return (str);
}
