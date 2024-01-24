#include "libft.h"

/*Searches for the last occurrence of a specified character in a given string.
 It returns a pointer to the located character within the string, or NULL if the character is not found.*/
 
char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;

	len_s = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + len_s);
	while (len_s > 0 && *(s + (len_s - 1)) != (char)c)
		len_s--;
	if (len_s > 0 && *(s + (len_s - 1)) == (char)c)
		return ((char *)s + (len_s - 1));
	else
		return (NULL);
}