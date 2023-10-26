
#include "libft.h"

//Function to count the words in the string 's' delimited by the char 'c'.
static size_t	count_words(char const *s, char c);

//This functions takes two parameters, the string and the delimiter character. The goal is to split the string 's' in words delimited by the character 'c' passed as a argument
char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	i;
	size_t	j;

	//Dynamically allocated the number of words provided as a return for the function "count words" +1 for the null 
	strings = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	j = 0;
	if (strings == NULL)
		return (NULL);

	while (*s && count_words(s, c) != 0)
	{
		//As long as the current character is equal to the delimiter character and the string still exists, it advances to the next character because it's not a word
		while (*s == c && *s)
			s++;
		i = 0;
		//If it reached the end of the string and the previous position is a delimiter character, exit the while loop
		if (*s == '\0' && *(s - 1) == c)
			break ;

		//Advances through the string until the delimiter character and counts the characters of the word so it's possible to allocate properly the len
		while (*s != c && *s)
		{
			s++;
			i++;
		}
		//Calls a function that allocates and makes a substring with the function "ft_substr" and stores it in a array of strings
		strings[j++] = ft_substr(s - i, 0, i);
	}
	strings[j] = NULL;
	//Return the array of strings
	return (strings);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	//If the current character in the string is not the delimiter character and the string has not reached the end it's the first word so increment the counter
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
