#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t len;
	char *str;
	size_t i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	
	// Allocate memory for the new string
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	
	// Apply the function 'f' to each character of the input string
	while (i < len)
	{
		str[i] = f((unsigned int)i, s[i]);
		i++;
	}
	str[len] = '\0';
	// Return the newly allocated string with modified characters
	return (str);
}
