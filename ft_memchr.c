#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	_c;
	size_t	i;

	str = (char *)s;
	_c = (char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == _c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
