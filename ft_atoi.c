/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:05:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/09 21:54:56 by kweihman         ###   ########.fr       */
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
	int	nbr;
	int	factor;
	int	max_neg;

	max_neg = -2147483648;
	factor = -1;
	while (whitespace(*nptr++))
		;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			factor = 1;
	nbr = 0;
	while (ft_isdigit(*nptr))
	{
		if (nbr < max_neg / 10 || (nbr == max_neg / 10 && *nptr > max_neg % 10))
			return (0);
		nbr = nbr * 10 - (*nptr++ - '0');
	}
	return (nbr * factor);
}

int	ft_atoi2(const char *nptr)
{
	int	nbr;
	int	factor;
	int	max_neg;

	max_neg = -2147483648;
	factor = -1;
	while (whitespace(*nptr++))
		;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			factor = 1;
	nbr = 0;
	while (ft_isdigit(*nptr))
	{
		if (nbr < max_neg / 10 || (nbr == max_neg / 10 && *nptr > max_neg % 10))
			return (0);
		nbr = nbr * 10 - (*nptr++ - '0');
	}
	return (nbr * factor);
}