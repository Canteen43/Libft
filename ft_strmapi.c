/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:04:18 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/08 16:45:02 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	ptr = calloc(ft_strlen(s) + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
		ptr[i] = f(i, s[i++]);
	ptr[i] = '\0';
	return (ptr);
}
