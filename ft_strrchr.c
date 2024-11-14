/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:43:51 by oayyoub           #+#    #+#             */
/*   Updated: 2024/10/24 18:04:17 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	end;

	end = ft_strlen(s);
	while (end >= 0)
	{
		if (s[end] == (unsigned char)c)
			return ((char *)&s[end]);
		end--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    int i = -265;

    while (i < 300)
    {
        printf("%d:\t%p\t",i,ft_strrchr("",i));

        printf("%p\n",strrchr("",i));
        i++;
    }
}*/
