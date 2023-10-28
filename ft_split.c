#include "libft.h"
#include <stdlib.h>

int		ft_words(char *s, int c)
{
	int	i;
	int	words;
	int	check;

	check = 0;
	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			check = 0;
		else if (!check)
		{
			check = 1;
			words++;
		}
		i++;
	}
	return (words);
}

void	ft_freeSplit(char **result, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_all(char *s, char **result, int words, char c)
{
	int	i;
	int	letter;
	int	j;

	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		letter = 0;
		while (s[letter] && s[letter] != c)
			letter++;
		result[i] = (char *)malloc(sizeof(char) * (letter + 1));
		if (!result[i])
		{
			ft_freeSplit(result, i);
			return (NULL);
		}
		j = 0;
		while (*s && *s != c)
			result[i][j++] = *s++;
		result[i++][j] = '\0';
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = ft_words((char *)s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	return(ft_all((char *)s, result, words, c));
}
