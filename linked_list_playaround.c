/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_playaround.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:23:56 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/14 19:27:58 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // NULL
#include <stdio.h>	// printf

typedef struct s_list
{
	int	value;
	struct s_list	*next;
}					node_t;

void	printlist(node_t *head)
{
	node_t	*temporary;

	temporary = head;
	while (temporary != NULL)
	{
		printf("%d ", temporary->value);
		temporary = temporary->next;
	}
	printf("\n");
}

node_t	*create_new_node(int value)
{
	node_t	*result;

	result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
	return (result);
}

node_t	*insert_at_head(node_t **head, node_t *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
	return (node_to_insert);
}

void	insert_after_node(node_t *node_to_insert_after, node_t *newnode)
{
	newnode->next = node_to_insert_after->next;
	node_to_insert_after->next = newnode;
}

node_t	*find_node(node_t *head, int value)
{
	node_t	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		if (tmp->value == value)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

int	main(void)
{
	node_t	*head;
	node_t	*tmp;
	int		i;

	i = 0;
	head = NULL;
	while (i < 25)
	{
		tmp = create_new_node(i);
		insert_at_head(&head, tmp);
		i++;
	}
	tmp = find_node(head, 13);
	printf("found node with value %d\n", tmp->value);
	insert_after_node(tmp, create_new_node(75));
	printlist(head);
	return (0);
}
