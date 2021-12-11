/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_solo_up_or_down.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:43:00 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 19:43:03 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_solo_up(t_stk *stack, int intercal)
{
	if ((*stack).b->next != NULL)
	{
		if (intercal == 3)
			sb(stack);
	}
	pa(stack);
	sa(stack);
	if ((*stack).b != NULL)
	{
		pa(stack);
		if ((*stack).a->content > (*stack).a->next->next->next->content)
			ra(stack);
	}
}

void	ft_solo_down(t_stk *stack, int intercal)
{
	if ((*stack).b->next != NULL)
	{
		if (intercal == 6)
			sb(stack);
	}
	rra(stack);
	pa(stack);
	ra(stack);
	ra(stack);
	if ((*stack).b != NULL)
	{
		pa(stack);
		if ((*stack).a->content > (*stack).a->next->next->next->content)
			ra(stack);
	}
}
