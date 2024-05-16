/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ctype_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:05:35 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/13 15:23:28 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

static void	zero_return_compare(int (*f1)(int), int (*f2)(int))
{
	int	i;
	int	limit;
	int	err_cnt;

	i = 0;
	err_cnt = 0;
	limit = 127;
	while (i <= limit)
	{
		if ((f1(i) == 0 && f2(i) != 0)||(f2(i) == 0 && f1(i) != 0))
		{
			ft_putstr_fd("Alert! Different output for i = ", 2);
			ft_putnbr_fd(i, 2);
			ft_putendl_fd("", 2);
			ft_putstr_fd("Original output: ", 2);
			ft_putnbr_fd(f1(i), 2);
			ft_putstr_fd(", My function output: ", 2);
			ft_putnbr_fd(f2(i), 2);
			ft_putendl_fd("", 2);
			err_cnt++;
		}
		i++;
	}
	ft_putnbr_fd(err_cnt, 1);
	ft_putstr_fd(" errors occured for i from 0 to ", 1);
	ft_putnbr_fd(limit, 1);
	ft_putendl_fd("!", 1);
}

void	ctype_functions(void)
{
	ft_putstr_fd("Checking isalnum: ", 1);
	zero_return_compare(isalnum, ft_isalnum);
	ft_putstr_fd("Checking isalpha: ", 1);
	zero_return_compare(isalpha, ft_isalpha);
	ft_putstr_fd("Checking isascii: ", 1);
	zero_return_compare(isascii, ft_isascii);
	ft_putstr_fd("Checking isdigit: ", 1);
	zero_return_compare(isdigit, ft_isdigit);
	ft_putstr_fd("Checking isprint: ", 1);
	zero_return_compare(isprint, ft_isprint);
}
