/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_no_insert.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:41:59 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 19:42:03 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_e_sup_to_bottom(t_stk *stack)
{
	if ((*stack).b->content > (*stack).a->content)
	{
		pa(stack);
		ra(stack);
		pa(stack);
		ra(stack);
	}
	else
	{
		pa(stack);
		pa(stack);
		ra(stack);
	}
}

void	ft_e_inf_to_top(t_stk *stack)
{
	sb(stack);
	pa(stack);
	pa(stack);
}

void	ft_no_insert_both(t_stk *stack)
{
	if ((!((*stack).b->content < (*stack).b->next->content)))
		sb(stack);
	if ((*stack).b->content < (*stack).b->next->content)
	{
		if ((*stack).b->next->content < (*stack).a->content)
			ft_e_inf_to_top(stack);
		else if ((*stack).b->next->content > (*stack).a->next->next->content)
			ft_e_sup_to_bottom(stack);
	}
}

void	ft_no_insert_d_alone(t_stk *stack)
{
	if ((*stack).b->content < (*stack).a->content)
		pa(stack);
	else
	{
		pa(stack);
		ra(stack);
	}
}
