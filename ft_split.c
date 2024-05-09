/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:48:36 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/09 17:40:19 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Split should create substrings of string s with char c as delimiter.*/

/* Returns the occurences of char c in string s. In this case the delimiter.*/
static	int	count_char(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

/* This function should return amount of characters between the delimiters */
static	int	substr_len(char const *s, char c, int i)
{
	int	j;
	int	cnt;

	j = 0;
	while (j < i)
	{
		if (*s == c)
			j++;
		s++;
	}
	while (*s != c)
	{
		s++;
		cnt++;
	}
	return (cnt);
}

/* Function copies str to location.*/
static	void	substr_cpy(char const *s, char c, int i, char *sub)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (*s == c)
			j++;
		s++;
	}
	while (*s != c)
	{
		*sub++ = *s++;
	}
	*sub = '\0';
}

char	**ft_split(char const *s, char c)
{
	int		lmt_cnt;
	char	**ptr;
	int		i;

	lmt_cnt = count_char(s, c);
	ptr = calloc(lmt_cnt + 2, sizeof(void *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i <= lmt_cnt)
	{
		ptr[i] = calloc(substr_len(s, c, i) + 1, sizeof(char));
		if (ptr[i] == NULL)
			return (NULL);
		substr_cpy(s, c, i, ptr[i]);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
