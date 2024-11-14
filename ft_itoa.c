/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:05:21 by oayyoub           #+#    #+#             */
/*   Updated: 2024/10/27 12:09:12 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_digits(int n)
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
	char	*result;
	int		is_negative;
	int		size;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negative = n < 0;
	if (is_negative)
		n = -n;
	size = nbr_digits(n) + is_negative;
	result = malloc(size + 1);
	if (!result)
		return (0);
	i = size;
	result[i--] = '\0';
	while (i >= 0)
	{
		result[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	if (is_negative)
		result[0] = '-';
	return (result);
}
/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("min int = %s\n", ft_itoa(-2147483648));
	printf("max int = %s\n", ft_itoa(2147483647));
	printf("\n\n------------------------------------------\n\n");
	for (int i = -20; i < 31; i++)
		printf("integer = %d, string = %s\n", i, ft_itoa(i));
	return 0;
}*/
