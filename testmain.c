/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:39:26 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/18 15:39:45 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>	// write()
#include <stdlib.h>	// malloc(), free(), NULL, and size_t
#include <limits.h>	// INT_MIN and INT_MAX
#include <stdio.h>	// printf
#include <bsd/string.h> // checking str-functions
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

void	fcheckmem(void *ptr, size_t n)
{
	unsigned char	*byteptr;

	byteptr = (unsigned char *) ptr;
	printf("<Address>: <Byte Value> - <ASCII>\n");
	while (n-- > 0)
	{
		printf("%p: %u - %c\n", byteptr, *byteptr, *byteptr);
		byteptr++;
	}
}

static size_t	min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	else
		return (a);
}*/

int	main(void)
{
	char	*ptr;

	ptr = malloc(-1);
	printf("%p", ptr);
}
