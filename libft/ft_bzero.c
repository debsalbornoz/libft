#include "libft.h"

/*This function sets a block of memory, specified by the pointer s and the size n, to zero.
Essentially, it clears the bytes in the memory block, making it null. 
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
