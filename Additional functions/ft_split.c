
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	//If the current character in the string is not the delimiter character and the string has not reached the end it's a word so increment the counter
	if (*s != c && *s != '\0')
		count++;
	
	while (*s != '\0')
	{
		//If the current character is the delimiter character and the next characters are not the delimiter character or the end of the string has reached it's a word
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			count++;
		s++;
	}
	//Return the number of words
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	i;
	size_t	j;

	//Dynamically allocated the number of words +1 for the null
	strings = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	j = 0;
	if (strings == NULL)
		return (NULL);

	while (*s && count_words(s, c) != 0)
	{
		//As long as the current character is equal to the delimiter character and the string still exists, it advances to the next character
		while (*s == c && *s)
			s++;
		i = 0;
		//If it reached the end of the string and the previous position is a delimiter character, exit the while loop
		if (*s == '\0' && *(s - 1) == c)
			break ;

		//Advances through the string until the delimiter character and counts the characters of the word
		while (*s != c && *s)
		{
			s++;
			i++;
		}
		//Calls a function that allocates a string, makes a substring and stores it in the strings array
		strings[j++] = ft_substr(s - i, 0, i);
	}
	strings[j] = NULL;
	//Return the strings array
	return (strings);
}
