#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	int	i;

	str = (char *)s;
	i = 0;
	while (str[i])
		str[i++] = 0;
}
