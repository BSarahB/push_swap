/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:57:05 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/12/11 17:57:08 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	int				position;
	struct s_list	*next;
}			t_list;

typedef struct s_stk
{
	int		size;
	t_list	*a;
	t_list	*b;
}			t_stk;

typedef struct s_utils
{
	int	flag_arg;
	int	flag_recursiv;
	int	count_recursiv;
	int	list_size;
	int	size_a;
	int	size_b;
	int	flag_only_whitespaces;
	int	whitespaces_count;
}			t_utils;

void		ft_putstr_fd(char *s, int fd);
int			ft_error(char *const str, t_utils *ptr, t_stk *stack);
int			ft_is_list_sorted(t_list *a);
void		ft_aff_list_int_content(t_list *alst);
int			ft_isdigit(int c);
void		ft_swap(int *a, int *b);
long		find_length(long n);
t_list		*ft_lst_get_very_bottom(t_list *lst);
t_list		*ft_lstnew(int content);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **alst, t_list *new);
void		ft_lstadd_front(t_list **alst, t_list *new);
int			ft_lstsize(t_list *lst);
t_utils		*ft_struct_init_utils(t_utils **ptr);
t_stk		*ft_struct_init_stack(t_stk **stack);
int			ft_create_list_and_check_double(int number, t_stk *stack, \
t_utils *ptr);
void		sa(t_stk *stack);
void		sb(t_stk *stack);
void		ss(t_stk *stack);
void		ra(t_stk *stack);
void		rb(t_stk *stack);
void		rr(t_stk *stack);
void		pb(t_stk *stack);
void		pa(t_stk *stack);
void		rra(t_stk *stack);
void		rrb(t_stk *stack);
void		ft_sort_three_numbers(t_stk *stack);
void		ft_sort_four_to_five_numbers(t_stk *stack, t_utils *ptr, int argc);
void		ft_sort_five_numbers(t_stk *stack);
int			ft_define_intercal(t_stk *stack);
void		ft_same_division_up(t_stk *stack);
void		ft_same_division_down(t_stk *stack);
void		ft_solo_up(t_stk *stack, int intercal);
void		ft_solo_down(t_stk *stack, int intercal);
void		ft_divided_aligned(t_stk *stack);
void		ft_divided_crossed(t_stk *stack);
void		ft_no_insert_both(t_stk *stack);
void		ft_no_insert_d_alone(t_stk *stack);
void		ft_e_sup_to_bottom(t_stk *stack);
void		ft_e_inf_to_top(t_stk *stack);
void		ft_sort_more_numbers(t_stk *stack, t_utils *ptr);
void		ft_simplify_list(t_list *lst);
int			ft_bit_rank(int n);
int			ft_digibit(int n, int r);
int			ft_log(int base, int value);
void		ft_sort_stackb_0_bit_right(t_stk *stack, t_utils *ptr);
void		ft_free_struct_lst(t_list **p);
void		ft_free_and_exit(t_stk *stack, t_utils *ptr);
void		ft_free_t_stk(t_stk **stk);
void		ft_free_t_utils(t_utils **ptr);
void		ft_check_params(int argc, char *argv[], t_stk *stack, t_utils *ptr);
void		ft_call_atoi(char *argv[], t_stk *stack, t_utils *ptr, int i);
long int	ft_atoi(char *str, t_utils *ptr, t_stk *stack);
void		ft_atoi_recursiv(t_stk *stack, t_utils *ptr, char *str);
int			ft_sign_followed_by_digit(char *str);
int			ft_space_preceeded_by_sign(char *str);
int			ft_sign(char *str);
void		ft_check_error(t_stk *stack, t_utils *ptr, char *str);
void		ft_check_error2(t_stk *stack, t_utils *ptr, char *str);
void		ft_check_error3(t_stk *stack, t_utils *ptr, char *str);
void		ft_check_whitespaces(t_utils *ptr, char **str);
void		ft_check_flag_only_whitespaces(t_utils *ptr, char **str, long *k);

#endif
