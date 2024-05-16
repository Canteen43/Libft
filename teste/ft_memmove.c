/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:51:37 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/04 14:22:44 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = n - 1;
	if (dest > src)
		while (n-- > 0)
			*((unsigned char *)dest++ + n) = *((unsigned char *)src++ + n);
	else
		while (n-- > 0)
			*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (dest - i);
}
