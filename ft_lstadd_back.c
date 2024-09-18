/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:04:34 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/19 18:32:04 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Adds the nodes ’new’ at the end of the list.*/
/*First and only node can also be passed without error.*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (*lst == new)
		return ;
	ft_lstlast(*lst)->next = new;
}
