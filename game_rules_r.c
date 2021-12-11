/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_rules_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:10:25 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 16:11:15 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ra(t_stk *stack)
{
	t_list	*ex_very_top;
	t_list	*very_bottom;

	if ((*stack).a == NULL || (*stack).a->next == NULL)
		return ;
	ex_very_top = (*stack).a;
	(*stack).a = (*stack).a->next;
	very_bottom = ft_lstlast((*stack).a);
	very_bottom->next = ex_very_top;
	ex_very_top->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stk *stack)
{
	t_list	*ex_very_top;
	t_list	*very_bottom;

	if ((*stack).b == NULL || (*stack).b->next == NULL)
		return ;
	ex_very_top = (*stack).b;
	(*stack).b = (*stack).b->next;
	very_bottom = ft_lstlast((*stack).b);
	very_bottom->next = ex_very_top;
	ex_very_top->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_stk *stack)
{
	ra(stack);
	rb(stack);
	write(1, "rr\n", 3);
}

void	rra(t_stk *stack)
{
	t_list	*very_bottom;

	if (!(*stack).a || !(*stack).a->next)
		return ;
	very_bottom = ft_lst_get_very_bottom((*stack).a);
	very_bottom->next = (*stack).a;
	(*stack).a = very_bottom;
	write(1, "rra\n", 4);
}

void	rrb(t_stk *stack)
{
	t_list	*very_bottom;

	if (!(*stack).b || !(*stack).b->next)
		return ;
	very_bottom = ft_lst_get_very_bottom((*stack).b);
	very_bottom->next = (*stack).b;
	(*stack).b = very_bottom;
	write(1, "rrb\n", 4);
}
