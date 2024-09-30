#include "libft.h"

int	valid(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int	end;
	int	start;
	int	i;

	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	while (valid(s1[start], set))
		start++;
	while (end > start && valid(s1[end - 1], set))
		end--;
	trimmed = malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed[i++] = s1[start++];
	trimmed[i] = 0;
	return (trimmed);
}
