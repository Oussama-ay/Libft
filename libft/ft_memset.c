#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
