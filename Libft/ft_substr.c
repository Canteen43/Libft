/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:06:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/19 14:13:50 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	find_min(char const *s, size_t start, size_t len)
{
	if (ft_strlen(s) <= start)
		return (0);
	if (len <= ft_strlen(s) - start)
		return (len);
	return (ft_strlen(s) - start);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	start = (size_t) start;
	if (start >= ft_strlen(s))
	{
		sub = ft_calloc(1, sizeof(char));
		if (!sub)
			return (NULL);
		*sub = '\0';
		return (sub);
	}
	sub = ft_calloc(find_min(s, start, len) + 1, sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
