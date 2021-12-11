NAME = push_swap
CC = clang

INCLUDE_DIR	=	.
SRC_DIR	=	src
SRCS			=	main.c \
					utils.c \
					list_utils.c \
					game_rules.c \
					game_rules_r.c \
					game_rules_p.c \
					atoi_parsing.c \
					atoi_parsing_utils.c \
					atoi_errors_utils.c \
					create_list_and_check_double.c \
					sort_three_numbers.c \
					sort_five_numbers.c \
					sort_five_no_insert.c \
					sort_five_both_insert.c \
					sort_five_solo_up_or_down.c \
					sort_more_numbers.c \
					update_free_memory.c \
					display.c \
					
OBJS = $(SRCS:.c=.o)

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I $(INCLUDE_DIR) 

all:		$(NAME)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	$(CC) -o $@ $^

clean:
			$(RM) $(OBJS) 

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:		clean fclean re all 