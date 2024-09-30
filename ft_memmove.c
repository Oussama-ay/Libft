#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*_src;
	unsigned char	*_dest;
	size_t	i;

	_src = (unsigned char *)src;
	_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		_dest[i] = _src[i];
		i++;
	}
	return (dest);
}
