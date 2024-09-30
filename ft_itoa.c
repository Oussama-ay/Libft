#include "libft.h"

void	ft_convert(char *result, long n, int *i)
{
	if (n > 9)
		ft_convert(result, n / 10, i);
	result[*i] = n % 10 + '0';
	(*i)++;
}

int	ft_count(long n)
{
	int	count;

	count = 1;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	char	*result;
	long	nbr;
	int	i;
	int	size;

	nbr = n;
	i = 0;
	size = ft_count(nbr);
	result = malloc(size + 1);
	if (!result)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		result[i++] = '-';
	}
	ft_convert(result, nbr, &i);
	result[i] = 0;
	return (result);
}
