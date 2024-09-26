#include "libft.h"

char	*strdup(const char *s)
{
	const char	*dest;
	int		i;

	dest = malloc(sizeof(const char) * (ft_strlen(s) + 1));
	if (!dest)
		return (0);
	i = 0;
	while (s[i])
		dest[i] = s[i++];
	dest[i] = 0;
	return ((char *)dest);
}
