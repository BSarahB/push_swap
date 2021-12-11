/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:05:21 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 16:06:08 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sa(t_stk *stack)
{
	t_list	*very_top;
	t_list	*second;

	if ((*stack).a == NULL || (*stack).a->next == NULL)
		return ;
	very_top = (*stack).a;
	second = (*stack).a->next;
	ft_swap(&(very_top->content), &(second->content));
	write(1, "sa\n", 3);
}

void	sb(t_stk *stack)
{
	t_list	*very_top;
	t_list	*second;

	if ((*stack).b == NULL || (*stack).b->next == NULL)
		return ;
	very_top = (*stack).b;
	second = (*stack).b->next;
	ft_swap(&(very_top->content), &(second->content));
	write(1, "sb\n", 3);
}

void	ss(t_stk *stack)
{
	sa(stack);
	sb(stack);
	write(1, "ss\n", 3);
}
