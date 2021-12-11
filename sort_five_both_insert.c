/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_both_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:41:17 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 19:41:23 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_same_division_up(t_stk *stack)
{
	if ((*stack).b->content < (*stack).b->next->content)
		sb(stack);
	ra(stack);
	pa(stack);
	pa(stack);
	rra(stack);
}

void	ft_same_division_down(t_stk *stack)
{
	if ((*stack).b->content < (*stack).b->next->content)
		sb(stack);
	rra(stack);
	pa(stack);
	pa(stack);
	ra(stack);
	ra(stack);
	ra(stack);
}

void	ft_divided_aligned(t_stk *stack)
{
	pa(stack);
	sa(stack);
	rra(stack);
	pa(stack);
	ra(stack);
	ra(stack);
}

void	ft_divided_crossed(t_stk *stack)
{
	rra(stack);
	pa(stack);
	ra(stack);
	ra(stack);
	pa(stack);
	sa(stack);
}
