/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_parsing_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:18:22 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/11 16:18:26 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_check_flag_only_whitespaces(t_utils *ptr, char **str, long *k)
{
	if ((*ptr).flag_only_whitespaces == 1)
	{
		*str = *str + (*ptr).whitespaces_count;
		*k = 0;
	}
}

void	ft_check_whitespaces(t_utils *ptr, char **str)
{
	*str = *str + 1;
	(*ptr).flag_only_whitespaces = 1;
	(*ptr).whitespaces_count ++;
}

int	ft_sign_followed_by_digit(char *str)
{
	if ((*str == '-' || *str == '+') && \
			((*(str + 1)) >= '0' && (*(str + 1)) <= '9'))
		return (1);
	return (0);
}

int	ft_sign(char *str)
{
	if (*str == '-' || *str == '+')
		return (1);
	return (0);
}

int	ft_space_preceeded_by_sign(char *str)
{
	if (*str == ' ' || *str == '\0')
	{
		if (*(str - 1) == '+' || *(str -1) == '-')
		{
			return (1);
		}
	}
	return (0);
}
