/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:48:35 by kweihman          #+#    #+#             */
/*   Updated: 2024/04/30 16:23:20 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);

int	main(void)
{
	ft_putendl_fd("Hello again", 1);
	ft_putchar_fd('8', 1);
	ft_putstr_fd(" Hi there ", 1);
	ft_putnbr_fd(2147483647, 1);
	return (0);
}
