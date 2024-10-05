#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*_src;
	unsigned char	*_dest;
	size_t	i;

	if (!dest && !src)
		return (dest);
	_src = (unsigned char *)src;
	_dest = (unsigned char *)dest;
	if (_dest > _src)
	{
		while (n--)
			_dest[n] = _src[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_dest[i] = _src[i];
			i++;
		}
	}
	return (dest);
}
