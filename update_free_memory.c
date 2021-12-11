/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_free_memory.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:22:29 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 16:22:32 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_free_struct_lst(t_list **p)
{
	if (*p != NULL)
	{
		ft_free_struct_lst(&((*p)->next));
		free(*p);
		*p = NULL;
	}
}

void	ft_free_t_stk(t_stk **stk)
{
	if (*stk != NULL)
	{
		ft_free_struct_lst(&((*stk)->a));
		ft_free_struct_lst(&((*stk)->b));
		free(*stk);
		*stk = NULL;
	}
}

void	ft_free_t_utils(t_utils **ptr)
{
	if (*ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

t_stk	*ft_struct_init_stack(t_stk **stack)
{
	*stack = (t_stk *)malloc(sizeof(t_stk));
	if (!(*stack))
		return (0);
	(*stack)->a = NULL;
	(*stack)->b = NULL;
	return (*stack);
}

t_utils	*ft_struct_init_utils(t_utils **ptr)
{
	*ptr = (t_utils *)malloc(sizeof(t_utils));
	if (!(*ptr))
		return (0);
	(*ptr)->flag_arg = -1;
	(*ptr)->flag_recursiv = -1;
	(*ptr)->count_recursiv = 0;
	(*ptr)->whitespaces_count = 0;
	return (*ptr);
}
