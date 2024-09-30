#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	int	j;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (i < n && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (needle[j] == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
