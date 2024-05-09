/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:40:48 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/03 16:45:34 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	len_dst;
	int	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	size -= len_dst;
	dst += len_dst;
	while (size > 1 && *src)
	{
		*dst++ = *src++;
		size--;
	}
	if (size == 1)
		++*dst == '\0';
	return (len_dst + len_src);
}
