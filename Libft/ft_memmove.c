/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:51:37 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/19 20:41:36 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		*((unsigned char *)dest + n - 1) = *((unsigned char *)src + n - 1);
		n--;
	}
	return (dest);
}
