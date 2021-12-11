/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:58:23 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 16:58:27 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_digibit(int n, int r)
{
	int	ret;

	ret = ((n >> r) & 1);
	return (ret);
}

void	ft_simplify_list(t_list *lst)
{
	t_list	*tmp;
	t_list	*tmp_a;
	int		position;

	tmp_a = lst;
	while (lst)
	{
		position = 1;
		tmp = tmp_a;
		while (tmp)
		{
			if (lst->content > tmp->content)
				position++;
			tmp = tmp->next;
		}
		lst->position = position;
		lst = lst->next;
	}
}

int	ft_bit_rank(int n)
{
	if (n == 0)
		return (0);
	return (ft_log(2, n));
}

void	ft_sort_stackb_0_bit_right(t_stk *stack, t_utils *ptr)
{
	(*ptr).size_b = ft_lstsize((*stack).b);
	while ((*ptr).size_b)
	{
		pa(stack);
		(*ptr).size_b--;
	}
}

void	ft_sort_more_numbers(t_stk *stack, t_utils *ptr)
{
	int	i;
	int	j;
	int	ret;
	int	highest_bit_rank;

	i = 0;
	j = 0;
	ft_simplify_list((*stack).a);
	(*ptr).size_a = ft_lstsize((*stack).a);
	highest_bit_rank = ft_bit_rank((*ptr).size_a);
	while (i <= highest_bit_rank)
	{
		j = 0;
		while (j < (*ptr).size_a)
		{
			ret = ft_digibit((*stack).a->position, i);
			if (ret == 0)
				pb(stack);
			else
				ra(stack);
			j++;
		}
		ft_sort_stackb_0_bit_right(stack, ptr);
		i++;
	}
}
