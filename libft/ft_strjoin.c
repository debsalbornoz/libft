#include "libft.h"


/*Concatenates the strings s1 and s2, dynamically allocating memory for the resulting new string.
It returns a pointer to the newly concatenated string.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t s3_len;
	char *s3;
	char *str1;

	str1 = (char *)s1;
	
	s3_len = ft_strlen(s1) + ft_strlen(s2);
	
	s3 = (char *)malloc((s3_len + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	ft_strlcpy(s3, str1, s3_len + 1);
	ft_strlcat(s3, s2, s3_len + 1);
	return (s3);
}
