/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:05:34 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/17 12:10:47 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s1 - *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
