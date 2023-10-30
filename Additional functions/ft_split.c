#include "libft.h"

static size_t	count_words(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	i;
	size_t	j;

	// Dynamically allocate memory for the array of strings
	strings = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	j = 0;
	if (strings == NULL)
		return (NULL);

	// Iterate through the string and split it into words
	while (*s && count_words(s, c) != 0)
	{
		// Skip delimiter characters
		while (*s == c && *s)
			s++;
		i = 0;

		// Extract characters until the next delimiter is encountered, creating a word
		while (*s != c && *s)
		{
			s++;
			i++;
		}
		// Allocate memory for the word and store it in the array of strings
		strings[j++] = ft_substr(s - i, 0, i);
	}
	strings[j] = NULL;

	// Return the array of strings containing individual words
	return (strings);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;

	// If the current character is not a delimiter and the string is not empty, it is the first word, so increment the counter
	if (*s != c && *s != '\0')
		count++;

	// Iterate through the string and count words
	while (*s != '\0')
	{
		// If the current character is a delimiter and the next character is not a delimiter or the end of the string, it is a word
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			count++;
		s++;
	}

	// Return the total number of words
	return (count);
}
