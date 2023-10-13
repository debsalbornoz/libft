#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, (int)s1[start]))
		start++;
	while (ft_strchr(set, (int)s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}