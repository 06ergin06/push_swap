/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergin <iergin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:44:42 by iergin            #+#    #+#             */
/*   Updated: 2026/03/09 14:20:38 by iergin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_list **stack_src)
{
	t_list	*tmp;

	if (!stack_src)
		return ;
	tmp = *stack_src;
	*stack_src = (*stack_src)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_src, tmp);
}

void	ra(t_list **stack_a, int *cnt)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
	(*cnt)++;
}

void	rb(t_list **stack_b, int *cnt)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
	(*cnt)++;
}

void	rr(t_list **stack_a, t_list **stack_b, int *cnt)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
	(*cnt)++;
}
