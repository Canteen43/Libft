/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:22:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/19 17:40:47 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>	// string-functions like strlcat
#include <stdio.h>	// printf()
#include <unistd.h>	// write()
#include <stdlib.h>	// malloc(), free(), NULL, and size_t
#include <limits.h>	// INT_MIN and INT_MAX

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int	main(void)
{
	printf("%lu", sizeof(t_list));
}
