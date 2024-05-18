/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:29:27 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/17 16:55:51 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The strlcpy() function copies at most dstsize−1 characters (dstsize being the
 size of the string buffer dst) from src to dst, truncating src if necessary. 
 The result is always null-terminated. The function returns strlen(src).
 Depends on \0-terminated src string.*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	len;

	len = ft_strlen(src);
	while (*src && size >= 2)
	{
		*dst++ = *src++;
		size--;
	}
	if (size >= 1)
		*dst = '\0';
	return (len);
}
