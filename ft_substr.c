/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:06:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/09 20:56:35 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	helper_returnlower(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	old_len;
	char	*ptr;
	size_t	i;

	i = 0;
	old_len = ft_strlen(s);
	ptr = ft_calloc(helper_returnlower(len, old_len - start) + 1, sizeof(char));
	s += start;
	while (*s && i < len)
		ptr[i++] = *s++;
	return (ptr);
}
