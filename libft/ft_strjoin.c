#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	string = malloc(size + 1);
	string = ft_strcpy(string, s1);
	string = ft_strcat(string, s2);
	return (string);
}
