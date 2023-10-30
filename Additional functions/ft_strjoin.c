#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t s3_len;
	char *s3;
	char *str1;

	// Cast input strings to char pointers for manipulation
	str1 = (char *)s1;
	
	// Calculate the length of the resulting string
	s3_len = ft_strlen(s1) + ft_strlen(s2);
	
	// Allocate memory for the concatenated string
	s3 = (char *)malloc((s3_len + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	
	// Copy the content of the first string to the concatenated string
	ft_strlcpy(s3, str1, s3_len + 1);
	
	// Concatenate the second string to the concatenated string
	ft_strlcat(s3, s2, s3_len + 1);
	
	// Return the concatenated string
	return (s3);
}
