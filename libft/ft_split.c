#include "libft.h"

static size_t	count_words(char const *s, char c);
char *ft_strncpy(char *dest, const char *src, int len);

// Function to split a string 's' into an array of substrings based on delimiter 'c'

char	**ft_split(char const *s, char c)
{
	int i;
	int j;
	int start;
	int end;
	char **str_array;

	i = 0;
	j = 0;
	start = 0;
	end = 0;
	// Allocate memory for the array of strings
	str_array = malloc((count_words(s,c) + 1) * sizeof(char *));
	//Find the start and end of each substring
	while(s[i] != '\0')
	{
		while(s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while(s[i] != c && s[i] != '\0')
			i++;
		end = i;
		if(end > start)
		{
			// Allocate memory for the substring and copy it
			str_array[j] = malloc((end - start + 1) * sizeof(char));
			ft_strncpy(str_array[j], &s[start], end - start);
			j++;
		}
	}
	str_array[j] = NULL;
	// Return the resulting array of strings
	return(str_array);
}

// Function to count the number of words in a string separated by 'c'

static size_t	count_words(char const *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while(s[i] != '\0')
	{
		while(s[i] == c && s[i] != '\0')
			i++;
		if(s[i] != c && s[i] != '\0')
			words++;
		while(s[i] != c && s[i] != '\0')
			i++;
	}
	return(words);
}

// Function to copy a specified length of characters from 'src' to 'dest'

char *ft_strncpy(char *dest, const char *src, int len)
{
	int i = 0;
	while(len > i)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

