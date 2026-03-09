/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergin <iergin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 16:33:41 by iergin            #+#    #+#             */
/*   Updated: 2026/03/09 11:41:06 by iergin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*last;

	if (!lst || !new_node)
		return ;
	if (!*lst)
	{
		*lst = new_node;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new_node;
}

void	ft_lstadd_front(t_list **lst, t_list *new_node)
{
	if (!lst || !new_node)
		return ;
	new_node->next = *lst;
	*lst = new_node;
}
