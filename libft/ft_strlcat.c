#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	if (size == 0 || size < i)
		return
	j = 0;
	while (j < size - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = 0;
	return (i);
}
