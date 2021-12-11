/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_rules_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:06:57 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 16:07:01 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	pa(t_stk *stack)
{
	t_list	*to_push;

	if ((*stack).b == NULL)
		return ;
	to_push = (*stack).b;
	(*stack).b = (*stack).b->next;
	ft_lstadd_front(&stack->a, to_push);
	write(1, "pa\n", 3);
}

void	pb(t_stk *stack)
{
	t_list	*to_push;

	if ((*stack).a == NULL)
		return ;
	to_push = (*stack).a;
	(*stack).a = (*stack).a->next;
	ft_lstadd_front(&stack->b, to_push);
	write(1, "pb\n", 3);
}
