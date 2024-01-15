#include "libft.h"

//Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}