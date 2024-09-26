#include "lifbt.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	i = 0;
	while (i < size - 1 && src[i])
		dest[i] = src[i++];
	dest[i] = 0;
	return (src_len);
}
