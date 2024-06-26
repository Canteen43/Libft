/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:22:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/19 21:54:35 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>	// string-functions like strlcat
#include <stdio.h>	// printf()
#include <unistd.h>	// write()
#include <stdlib.h>	// malloc(), free(), NULL, and size_t
#include <limits.h>	// INT_MIN and INT_MAX

int	main(void)
{
	memcpy(((void *)0), ((void *)0), 3);
}
