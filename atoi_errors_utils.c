/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_errors_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:18:55 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/11 16:18:58 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_check_error3(t_stk *stack, t_utils *ptr, char *str)
{
	if (*str != ' ' && *str != '\0' && !ft_isdigit(*str) && !ft_sign(str))
		ft_error("Error", ptr, stack);
}

void	ft_check_error2(t_stk *stack, t_utils *ptr, char *str)
{
	if (*str != ' ' && *str != '\0' && !ft_isdigit(*str) && \
			!ft_sign_followed_by_digit(str))
		ft_error("Error", ptr, stack);
}

void	ft_check_error(t_stk *stack, t_utils *ptr, char *str)
{
	if ((*str != ' ' && *str != '\0' && !ft_isdigit(*str)) \
			|| ft_space_preceeded_by_sign(str))
		ft_error("Error", ptr, stack);
}
