/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:18:46 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/14 12:48:50 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h> // Memmove
#include <stdio.h>	// Printf

/*This function wants to print address, byte value and ASCII of that value of
a memory area of size n pointed to by ptr.
- byte values from 128 to 255 give <?> as output. Other byte values should not
	be possible.
- theoretically, program should crash when trying to read memory without
	permission. So far, no crashes.
Issues:
- have not figured out to print pointer adresses.*/
/*
static void	checkmem(void *ptr, size_t n)
{
	unsigned char	*byteptr;

	byteptr = (unsigned char *) ptr;
	ft_putendl_fd("<Address>: <Byte Value> - <ASCII>", 1);
	while (n-- > 0)
	{
		ft_putstr_fd("No addresses yet: ", 1);
		ft_putnbr_fd((int) *byteptr, 1);
		ft_putstr_fd(" - ", 1);
		ft_putchar_fd((int) *byteptr, 1);
		ft_putendl_fd("", 1);
		byteptr++;
	}
}
*/

/* This is my checkmem but simplified by using printf.*/
static void	fcheckmem(void *ptr, size_t n)
{
	unsigned char	*byteptr;

	byteptr = (unsigned char *) ptr;
	ft_putendl_fd("<Address>: <Byte Value> - <ASCII>", 1);
	while (n-- > 0)
	{
		printf("%p: %u - %c\n", byteptr, *byteptr, *byteptr);
		byteptr++;
	}
}

/*og for original function. nw for my version*/
void	test_memmove(void)
{
	char	*dest;
	char	*src;
	size_t	n;

	src = "Hallo, ich bin's mal wieder, ihr Luschen.";
	dest = src + 4;
	n = 4;
	fcheckmem(ft_memmove(dest, src, n), 25);
}
