/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:28:28 by oayyoub           #+#    #+#             */
/*   Updated: 2024/10/24 15:02:31 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (!s)
		return NULL;
	size = strlen(s);
	if (start >= size)
	{
		str = malloc(1);
        i	f (!str)
            		return NULL;
        	*str = '\0';
        	return str;
    	}
    	if (len > size - start)
		len = size - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	strlcpy(str, s + start, len + 1);
	str[len] = '\0';
	return (str);
}
