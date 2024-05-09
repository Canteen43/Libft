/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:05:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/04 14:18:10 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	minus;
	int	max_neg;

	max_neg = -2147483648;
	minus = -1;
	while (9 <= *nptr && *nptr <= 13 || *nptr == 32)
		nptr++;
	if (*nptr == 43)
		nptr++;
	if (*nptr++ == 45)
		minus = 1;
	nbr = 0;
	while (ft_isdigit(*nptr))
	{
		if (nbr < max_neg / 10 || nbr == max_neg / 10 && *nptr > max_neg % 10)
			return (0);
		nbr = nbr * 10 - *nptr++;
	}
	return (nbr * minus);
}
