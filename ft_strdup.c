#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int	i;

	dest = malloc(ft_strlen(s) + 1);
	if (!dest)
		return (0);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
