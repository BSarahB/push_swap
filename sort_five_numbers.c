/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:40:54 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 19:40:57 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_define_intercal(t_stk *stack)
{
	int	intercal;

	intercal = 0;
	if ((*stack).b->content > (*stack).a->content && \
			(*stack).b->content < (*stack).a->next->content)
		intercal = intercal + 1;
	if ((*stack).b->content > (*stack).a->next->content && \
			(*stack).b->content < (*stack).a->next->next->content)
			intercal = intercal + 2;
	if ((*stack).b->next != NULL)
	{
		if ((*stack).b->next->content > (*stack).a->content && \
				(*stack).b->next->content < (*stack).a->next->content)
			intercal = intercal + 3;
		if ((*stack).b->next->content > (*stack).a->next->content && \
				(*stack).b->next->content < (*stack).a->next->next->content)
			intercal = intercal + 6;
	}
	return (intercal);
}

void	ft_sort_five_numbers(t_stk	*stack)
{
	int	intercal;

	intercal = ft_define_intercal(stack);
	if (intercal == 4)
		ft_same_division_up(stack);
	if (intercal == 8)
		ft_same_division_down(stack);
	if (intercal == 1 || intercal == 3)
		ft_solo_up(stack, intercal);
	if (intercal == 2 || intercal == 6)
		ft_solo_down(stack, intercal);
	if (intercal == 7)
		ft_divided_aligned(stack);
	if (intercal == 5)
		ft_divided_crossed(stack);
	if (intercal == 0)
	{
		if ((*stack).b->next != NULL)
			ft_no_insert_both(stack);
		else
			ft_no_insert_d_alone(stack);
	}
}
