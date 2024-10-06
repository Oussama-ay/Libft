#include "libft.h"

char	*ft_strcat(char *dest, char const *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = 0;
	return (dest);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	string = malloc(size + 1);
	if (!string)
		return(NULL);
	string = ft_strcpy(string, s1);
	string = ft_strcat(string, s2);
	return (string);
}
