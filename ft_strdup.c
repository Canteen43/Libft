/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:59:32 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/18 15:21:07 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*start;

	ptr = calloc(ft_strlen(s) + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	start = ptr;
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (start);
}
