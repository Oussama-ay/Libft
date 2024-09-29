#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	size;
	int	i;
	char	*result;

	size = ft_strlen(s);
	result = malloc(size + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
		result[i] = (*f)(i, result);
	result[i] = 0;
	return (result);
}
