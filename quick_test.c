/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:22:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/19 14:09:11 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>	// string-functions like strlcat
#include <stdio.h>	// printf()
#include <unistd.h>	// write()
#include <stdlib.h>	// malloc(), free(), NULL, and size_t
#include <limits.h>	// INT_MIN and INT_MAX

int	main(void)
{
	size_t	a;
	size_t	b;

	a = 1;
	b = 2;
	printf("%lu", a-b);
}

