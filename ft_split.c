/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:48:36 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/18 17:40:14 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns the occurences of char c in string s. In this case the delimiter.*/
static	int	str_cnt_char(char const *str, char c)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (*str == c)
			cnt++;
		str++;
	}
	return (cnt);
}

/* Counts the number of chars between delimiting chars.
i=0 will count between start and first delimiter.
i=1 will count between first and second delimiter.
For n delimiters, i=n will count between the n-th delimter and the end.*/
static	int	substr_len(char const *str, char dlm, int i)
{
	int	cnt;

	cnt = 0;
	while (i > 0)
	{
		if (*str == dlm)
			i--;
		str++;
	}
	while (*str != dlm)
	{
		str++;
		cnt++;
	}
	return (cnt);
}

/* Copies from str to sub. Iterates over str until i delimiters are found,
 then starts copying and null-terminates.*/
static	void	substr_cpy(char const *str, char dlm, int i, char *sub)
{
	while (i > 0)
	{
		if (*str == dlm)
			i--;
		str++;
	}
	while (*str != dlm)
	{
		*sub++ = *str++;
	}
	*sub = '\0';
}

static void	free_all(char **ptr, int i)
{
	int	j;

	while (i > 0)
	{
		i--;
		j = 0;
		while (ptr[i][j])
			ptr[i][j++] = 0;
		free(ptr[i]);
	}
	j = 0;
	while (ptr[j])
		ptr[j++] = NULL;
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	int		lmt_cnt;
	char	**ptr;
	int		i;

	lmt_cnt = str_cnt_char(s, c);
	ptr = calloc(lmt_cnt + 2, sizeof(void *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i <= lmt_cnt)
	{
		ptr[i] = calloc(substr_len(s, c, i) + 1, sizeof(char));
		if (ptr[i] == NULL)
		{
			free_all(ptr, i);
			return (NULL);
		}
		substr_cpy(s, c, i, ptr[i]);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
