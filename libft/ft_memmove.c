#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*_src;
	char	*_dest;
	size_t	i;

	_src = (char *)src;
	_dest = (char *)dest;
	i = 0;
	while (_src[i] && i < n)
		_dest[i] = _src[i++];
	return (dest);
}
