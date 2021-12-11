/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:20:17 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/11 16:20:22 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_recursiv_flag_and_count(t_utils *ptr)
{
	(*ptr).flag_recursiv = 1;
	(*ptr).count_recursiv = (*ptr).count_recursiv + 1;
}

void	ft_atoi_recursiv(t_stk *stack, t_utils *ptr, char *str)
{
	long	result_recursiv;
	long	k;

	k = 0;
	(*ptr).flag_arg = 0;
	(*ptr).flag_only_whitespaces = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	ft_check_error2(stack, ptr, str);
	if ((ft_isdigit(*str) && *(str - 1) == ' ') || \
			(ft_sign_followed_by_digit(str) && *(str - 1) == ' '))
	{
		if (*str == '+')
			str++;
		ft_recursiv_flag_and_count(ptr);
		result_recursiv = ft_atoi(str, ptr, stack);
		if (result_recursiv > 2147483647 || result_recursiv < -2147483648)
			ft_error("Error", ptr, stack);
		if ((*ptr).flag_arg == 0 && (*ptr).flag_only_whitespaces == 0)
			ft_create_list_and_check_double((int)result_recursiv, stack, ptr);
		k = find_length(result_recursiv);
		ft_check_flag_only_whitespaces(ptr, &str, &k);
	}
	ft_check_error3(stack, ptr, str);
	str = str + k;
}

long int	ft_atoi(char *str, t_utils *ptr, t_stk *stack)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	(*ptr).flag_only_whitespaces = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		ft_check_whitespaces(ptr, &str);
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
		ft_atoi_recursiv(stack, ptr, str);
	}
	ft_check_error(stack, ptr, str);
	if ((*ptr).flag_only_whitespaces == 1)
		return ((*ptr).whitespaces_count);
	return (result * sign);
}
