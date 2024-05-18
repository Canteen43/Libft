/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:40:48 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/18 14:54:24 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

/*The strlcat() function appends at most (dstsize-strlen(dst)-1) characters of 
src to dst (dstsize being the size of the string buffer dst). If the string 
pointed to by dst contains a null-terminated string that fits into dstsize 
bytes when strlcat() is called, the string pointed to by dst will be a 
null-terminated string that fits in dstsize bytes (including the terminating 
null character) when it completes, and the initial character of src will 
override the null character at the end of dst. If the string pointed to by 
dst is longer than dstsize bytes when strlcat() is called, the string pointed 
to by dst will not be changed. The function returns min{dstsize, strlen(dst)} 
+ strlen(src).*/
/*I don't understand what the purpose of using size is only for len(dst),
but OK. As with strlcpy, program will have undefined behavior if not given
null-terminated strings.*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	dst_len_org;

	dst_len_org = ft_strlen(dst);
	i = 0;
	while (src[i] && dst_len_org + i + 1 < size)
	{
		dst[dst_len_org + i] = src[i];
		i++;
	}
	if (dst_len_org + i < size)
		dst[dst_len_org + i] = '\0';
	return (min(dst_len_org, size) + ft_strlen(src));
}
