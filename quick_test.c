/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:22:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/17 16:14:10 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>

int	main(void)
{
	char	*s;
	char	*s2;

	s = "Hello, it's me";
	s2 = "Moin, ich bin der dicke Bernd.";
	strlcpy(s2, s, 7);
}
