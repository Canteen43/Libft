/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:21:04 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/09 20:18:03 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nbr_digs(int n)
{
	int	i;

	if (n > 0)
		n *= -1;
	i = 1;
	while (n <= -10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static	void	fill_array(char *ptr, int n)
{
	if (n > 0)
		n *= -1;
	if (n <= -10)
		fill_array(ptr, n / 10);
	ptr[nbr_digs(n) -1] = '0' + (n % 10) * -1;
}

char	*ft_itoa(int n)
{
	int		digs;
	size_t	size;
	char	*ptr;

	digs = nbr_digs(n);
	size = digs + 1;
	if (n < 0)
		size += 1;
	ptr = ft_calloc(size, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (n < 0)
		*ptr++ = '-';
	fill_array(ptr, n);
	ptr[digs] = '\0';
	if (n < 0)
		ptr--;
	return (ptr);
}
