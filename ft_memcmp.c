#include "libft.h"


/*Compares the first n bytes of two memory regions (s1 and s2).
It returns a value less than zero if s1 is less than s2, zero if they are equal, and greater than zero if s1 is greater than s2.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *m1; 
	unsigned char *m2; 
	int i; 

	m1 = (unsigned char *)s1; 
	m2 = (unsigned char *)s2; 
	i = 0;

	if (n == 0)
		return(0);
	while (n > 0)
	{
		if (m1[i] != m2[i])
			return ((int)m1[i] - (int)m2[i]);
		i++;
		n--;
	}
	return (0);
}
