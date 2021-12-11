/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:04:47 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/09 16:04:52 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_is_list_sorted(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_aff_list_int_content(t_list *alst)
{
	while (alst)
	{
		printf("%d * ", (alst)->content);
		alst = (alst)->next;
	}
	printf("\n");
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s != 0)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
	write(fd, "\n", 1);
}

int	ft_error(char *const str, t_utils *ptr, t_stk *stack)
{
	ft_putstr_fd(str, 2);
	ft_free_t_utils(&ptr);
	ft_free_t_stk(&stack);
	exit(0);
}
