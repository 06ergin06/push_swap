/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_alg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergin <iergin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 13:18:04 by iergin            #+#    #+#             */
/*   Updated: 2026/03/05 21:32:05 by iergin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	min_max_parse(stack_a, &stack_b);
	sort_a_to_b(stack_a, &stack_b);
	sort_b_to_a(stack_a, &stack_b);
}
