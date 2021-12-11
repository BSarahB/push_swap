/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list_and_check_double.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:02:02 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 16:02:11 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_create_list_and_check_double(int number, t_stk *stack, t_utils *ptr)
{
	t_list	*tmp;
	t_list	*new;

	tmp = (*stack).a;
	while (tmp)
	{
		if (tmp->content == number)
			ft_error("Error", ptr, stack);
		tmp = tmp->next;
	}
	new = ft_lstnew(number);
	if ((*ptr).flag_recursiv == 1)
	{
		ft_lstadd_front(&stack->a, new);
	}
	else
		ft_lstadd_back(&stack->a, new);
	return (0);
}
