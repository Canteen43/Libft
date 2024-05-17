/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:27:55 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/17 14:22:04 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Analogous to memchr, s and c will be interpreted as unsigned char. 'A' + 256 
will be interpreted as 'A'.*/
char	*ft_strrchr(const char *s, int c)
{
	const char	*start;

	start = s;
	s += ft_strlen(s);
	while (*(unsigned char *)s != (unsigned char)c && s != start)
		s--;
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
