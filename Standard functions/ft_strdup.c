#include "libft.h"

char	*ft_strdup(const char *s)
{
	int len;
	char *duplicate;
	int i;

	len = ft_strlen(s) + 1;  // Calculate the length of the input string, including the null terminator
	duplicate = (char *)malloc(len * sizeof(char));  // Allocate memory for the duplicate string
	if (duplicate == NULL)
		return (NULL);  // Return NULL if memory allocation fails

	*duplicate = '\0'; 
	i = 0;

	// Copy characters from the input string to the duplicate string
	while (s[i] != '\0')
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';  // Add null terminator at the end of the duplicate string

	return (duplicate);  // Return the newly allocated duplicate string
}

