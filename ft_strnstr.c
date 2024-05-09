/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:21:38 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/03 17:53:20 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (*little == '\0')
		return (big);
	j = 0;
	while (big[j] && j < len)
	{
		i = 0;
		while (big[j + i] == little[i] && j + i < len)
		{
			i++;
			if (little[i] == '\0')
				return (&big[j]);
		}
		j++;
	}
	return (NULL);
}
