#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*duplicate;
	int		i;

	len = ft_strlen(s) + 1;
	duplicate = (char *)malloc(len * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	*duplicate = '\0';
	i = 0;
	while (s[i] != '\0')
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
