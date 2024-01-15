#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;

	start = 0;
	
	// Find the index of the first character in 's1' not present in 'set'
	while (ft_strchr(set, (int)s1[start]))
		start++;
	
	// Find the index of the last character in 's1' not present in 'set'
	end = ft_strlen(s1);
	while (ft_strchr(set, (int)s1[end - 1]))
		end--;
	
	// Create a new substring from 's1' excluding leading and trailing 'set' characters
	return (ft_substr(s1, start, end - start));
}
