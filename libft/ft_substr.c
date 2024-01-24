#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);	
	// Return an empty string if the starting index is beyond the length of the input string
	if (s_len < start)
		return (ft_strdup(""));
	// Adjust the length of the substring if it exceeds the length of the input string from the starting index
	if (s_len - start >= len)
		substr = malloc((len + 1) * sizeof(char));
	else
	{
		// Allocate memory for the substring
		substr = malloc((s_len - start + 1) * sizeof(char));
		len = s_len - start;
	}
	if (substr == NULL)
		return (NULL);
	//Copy the characters from the input string
	ft_strlcpy(substr, (s + start), (len + 1));
	
	// Return the newly allocated substring
	return (substr);
}
