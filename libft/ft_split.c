#include "libft.h"

int	is_delimiter(char s, char c)
{
	return (s == c);
}

int	ft_count(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_delimiter(*str, c))
			str++;
		if (*str)
			count++;
		while (*str && !is_delimiter(*str, c))
			str++;
	}
	return (count);
}

char	*ft_word(char const *str, char c)
{
	int	len;
	int	i;
	char	*word;

	len = 0;
	while (str[len] && !is_delimiter(str[len], c))
		len++;
	word = malloc(len + 1);
	if (!word)
		return (0);
	i = 0;
	while (i < len)
		word[i] = str[i++];
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int	nbr_words;
	int	i;

	nbr_words = ft_count(s, c);
	result = malloc(sizeof(char *) * (nbr_words + 1));
	if (!result)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && is_delimiter(*s, c))
			s++;
		if (*s)
		{
			result[i++] = ft_word(s, c);
			while (*s && !is_delimiter(*s, c));
				s++;
		}
	}
	result[i] = 0;
	return (result);
}
