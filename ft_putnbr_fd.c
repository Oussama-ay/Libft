/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:48:45 by oayyoub           #+#    #+#             */
/*   Updated: 2024/10/25 17:51:11 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	n = n % 10 + '0';
	write (fd, &n, 1);
}

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
	ft_putnbr_fd(atoi(argv[1]), 1);
	// for (int i = -66; i <= 66; i++)
	// {
	// 	ft_putnbr_fd2(i, 1);
	// 	printf("\n");
	// }
	return 0;
}*/
