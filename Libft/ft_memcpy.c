/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:03:01 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/19 22:00:43 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*NULL-guard makes little sense in my mind and was added to pass unit tester.
I would prefer for function to crash. Also, it makes no sense that to only
guard against both NULL and crash when one is NULL.*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*start;

	if (!dest && !src)
		return (NULL);
	start = dest;
	while (n-- > 0)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (start);
}
