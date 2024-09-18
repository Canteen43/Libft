/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:51:37 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/19 22:00:35 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*NULL-guard makes little sense in my mind and was added to pass unit tester.
I would prefer for function to crash. Also, it makes no sense that to only
guard against both NULL and crash when one is NULL.*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		*((unsigned char *)dest + n - 1) = *((unsigned char *)src + n - 1);
		n--;
	}
	return (dest);
}
