/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:17:11 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 16:17:14 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_sort_three_numbers(t_stk *stack)
{
	int	top;
	int	mid;
	int	bottom;

	top = (*stack).a->content;
	mid = (*stack).a->next->content;
	bottom = (*stack).a->next->next->content;
	if (top > mid && mid < bottom && bottom > top)
		sa(stack);
	else if (top > mid && mid > bottom && bottom < top)
	{
		sa(stack);
		rra(stack);
	}
	else if (top > mid && mid < bottom && bottom < top)
		ra(stack);
	else if (top < mid && mid > bottom && bottom > top)
	{
		sa(stack);
		ra(stack);
	}
	else if (top < mid && mid > bottom && bottom < top)
		rra(stack);
}
