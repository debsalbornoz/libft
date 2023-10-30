#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *m1; 
	unsigned char *m2;  

	m1 = (unsigned char *)s1; 
	m2 = (unsigned char *)s2; 

	// If the number of bytes to be compared is zero, the memory areas are considered equal
	if (n == 0)
		return (0);

	// Iterate through the memory areas and compare corresponding bytes
	while (n > 0)
	{
		// If a difference is found, return the difference as an integer
		if (*m1 != *m2)
		{
			return ((int)*m1 - (int)*m2);
		}
		m1++;
		m2++;
		n--;
	}

	// If all bytes match, return 0 indicating both memory areas are equal
	return (0);
}
