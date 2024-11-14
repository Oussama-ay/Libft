/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:43:48 by oayyoub           #+#    #+#             */
/*   Updated: 2024/10/27 22:10:17 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		write (fd, &s[i++], 1);
}
/*
#include <errno.h>
#include <fcntl.h>

int main()
{
	int fd = open("test.txt", O_WRONLY | O_CREAT);
	ft_putstr_fd("xi7aja a sadi9i wax fhamtini", fd);
	close(fd);
}*/
