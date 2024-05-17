/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:39:26 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/17 14:32:35 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include <string.h>
/*
em(void *ptr, size_t n)
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
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	len;

	len = strlen(src);
	while (*src && size >= 2)
	{
		*dst++ = *src++;
		size--;
	}
	if (size >= 1)
		*dst = '\0';
	return (len);
}

int	main(void)
{
	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);

	printf("%lu\n%lu\n%s\n%s\n%d\n%c\n", ft_strlcpy(dest, src, -1), strlen(src), src, dest, strcmp(src, dest), dest[strlen(src) + 1]);
	/*
	 memset(dest, 'A', 10);
	ft_strlcpy(dest, src, 8) == strlen(src) && !memcmp(src, dest, 7)); showLeaks(); memset(dest, 'A', 10);
	ft_strlcpy(dest, "", 42) == 0 && !memcmp("", dest, 1)); showLeaks(); memset(dest, 0, 10);
	ft_strlcpy(dest, "1", 0) == 1 && dest[0] == 0); showLeaks(); memset(dest, 'A', 10);
	*/
}
