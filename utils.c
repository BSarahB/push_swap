/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:19:54 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 16:19:57 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_log(int base, int value)
{
	if (value == 1)
		return (0);
	return (1 + ft_log(base, value / base));
}

t_list	*ft_lst_get_very_bottom(t_list *lst)
{
	t_list	*very_bottom;

	if (ft_lstsize(lst) > 1)
	{
		while (lst->next->next != NULL)
			lst = lst->next;
		very_bottom = lst->next;
		lst->next = NULL;
		return (very_bottom);
	}
	return (NULL);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

long	find_length(long n)
{
	long	length;

	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (n != 0)
	{
		length++;
		n = n / 10;
	}
	return (length);
}

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}
