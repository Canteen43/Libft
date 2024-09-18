/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:05:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/11 18:23:26 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	whitespace(int c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	long int	nbr;
	int			factor;

	while (whitespace(*nptr))
		nptr++;
	factor = 1;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			factor = -1;
	nbr = 0;
	while (ft_isdigit(*nptr))
	{
		nbr = nbr * 10 + (*nptr - '0') * factor;
		if (nbr < INT_MIN || INT_MAX < nbr)
			return (0);
		nptr++;
	}
	return ((int) nbr);
}
