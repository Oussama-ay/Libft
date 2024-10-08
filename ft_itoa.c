#include "libft.h"

int	ft_icount(int n)
{
	int	count;

	count = 1;
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int	is_negatif;
	int	digits;
	char	*T;
	int	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negatif = n < 0;
	if (is_negatif)
		n = -n;
	digits = ft_icount(n);
	T = malloc(digits + is_negatif + 1);
	if (!T)
		return (NULL);
	i = digits + is_negatif - 1;
	if (n == 0)
		T[i--] = '0';
	while (n != 0)
	{
		T[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	if (is_negatif)
		T[0] = '-';
	T[digits + is_negatif] = '\0';
	return (T);
}
