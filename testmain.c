/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:07:47 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/16 16:15:04 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

static void	fcheckmem(void *ptr, size_t n)
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

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i > n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};

	/* 1 */ printf(ft_memchr(s, 0, 0) == NULL);
	/* 2 */ check(ft_memchr(s, 0, 1) == s);
	/* 3 */ check(ft_memchr(s, 2, 3) == s + 2);
	/* 4 */ check(ft_memchr(s, 6, 6) == NULL);
	/* 5 */ check(ft_memchr(s, 2 + 256, 3) == s + 2); //Cast check
}
