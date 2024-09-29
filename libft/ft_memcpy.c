#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*_dest;
	char	*_src;
	size_t	i;

	_dest = (char *)dest;
	_src = (char *)src;
	i = 0;
	while (i < n)
	{
		_dest[i] = _src[i];
		i++;
	}
	return (dest);
}
