/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:44:10 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/13 15:54:03 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	helperfunction(int n, int fd)
{
	char	a;

	if (n <= -10)
		helperfunction(n / 10, fd);
	a = '0' + (n % 10 * -1);
	ft_putchar_fd(a, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n > 0)
		n *= -1;
	helperfunction(n, fd);
}
