/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:25:56 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/11 16:26:02 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_call_atoi(char *argv[], t_stk *stack, t_utils *ptr, int i)
{
	long	result;

	(*ptr).flag_recursiv = -1;
	result = ft_atoi(argv[i], ptr, stack);
	if (result > 2147483647 || result < -2147483648)
		ft_error("Error", ptr, stack);
	if ((*ptr).flag_arg == 0 && (*ptr).flag_only_whitespaces == 0)
		ft_create_list_and_check_double((int)result, stack, ptr);
}

void	ft_sort_four_to_five_numbers(t_stk *stack, t_utils *ptr, int argc)
{
	pb(stack);
	if ((argc + (*ptr).count_recursiv) == 6)
		pb(stack);
	ft_sort_three_numbers(stack);
	ft_sort_five_numbers(stack);
}

void	ft_free_and_exit(t_stk *stack, t_utils *ptr)
{
	ft_free_t_utils(&ptr);
	ft_free_t_stk(&stack);
	exit(1);
}

void	ft_check_params(int argc, char *argv[], t_stk *stack, t_utils *ptr)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_call_atoi(argv, stack, ptr, i);
		i++;
	}
	if ((*stack).a == NULL)
		ft_free_and_exit(stack, ptr);
	if (ft_is_list_sorted((*stack).a))
		ft_free_and_exit(stack, ptr);
	else if ((argc + (*ptr).count_recursiv) == 3)
		sa(stack);
	else if ((argc + (*ptr).count_recursiv) == 4)
		ft_sort_three_numbers(stack);
	else if ((argc + (*ptr).count_recursiv) > 4 && \
			(argc + (*ptr).count_recursiv) <= 6)
		ft_sort_four_to_five_numbers(stack, ptr, argc);
	else
		ft_sort_more_numbers(stack, ptr);
	ft_free_t_utils(&ptr);
	ft_free_t_stk(&stack);
}

int	main(int argc, char *argv[])
{
	t_utils	*ptr;
	t_stk	*stack;

	if (argc == 1)
		exit (1);
	ft_struct_init_stack(&stack);
	ft_struct_init_utils(&ptr);
	ft_check_params(argc, argv, stack, ptr);
	return (0);
}
