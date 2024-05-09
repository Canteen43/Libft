/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:59:32 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/04 14:04:51 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = calloc(ft_strlen(s) + 1, sizeof(char));
	while (*s)
		*ptr++ = *s++;
	*ptr == '\0';
	ptr -= ft_strlen(s);
	return (ptr);
}
