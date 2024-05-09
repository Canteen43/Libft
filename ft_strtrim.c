/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:26:48 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/04 17:19:59 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	int		start;
	int		end;

	start = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) != NULL)
		start++;
	end = 0;
	while (ft_strchr(set, s1[len - 1 - end]) != NULL)
		end++;
	return (ft_substr(s1, start, (end - start + 1)));
}
