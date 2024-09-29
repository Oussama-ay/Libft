#include "libft.h"

void	ft_convert(char *result, long n, int *i)
{
	if (n > 9)
		ft_convert(result, n, i);
	result[*i] = n % 10 + '0';
	(*i)++;
}

char *ft_itoa(int n)
{
	char	*result;
	long	nbr;
	int	i;

	nbr = n;
	i = 0;
	result = malloc(size + 1);
	if (!result)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		redult[i++] = '-';
	}
	ft_convert(result, nbr, &i);
	result[i] = 0;
	return (result);
}
