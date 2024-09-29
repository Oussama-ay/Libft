#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	size;
	int	i;
	char	*str;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	str = malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	while (s[i + start] && i < len)
		str[i] = s[start + i++];
	str[i] = 0;
	return (str);
}
