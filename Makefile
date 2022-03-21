SRCS		=	srcs/ft_print_c.c srcs/ft_print_s.c srcs/ft_print_p.c srcs/ft_print_d.c \
				srcs/ft_print_i.c srcs/ft_print_u.c srcs/ft_print_x.c srcs/ft_print_X.c \
				srcs/ft_print_percent.c srcs/utils.c srcs/ft_len.c ft_printf.c
OBJS		=	$(SRCS:.c=.o)
BONUS_OBJS	=	$(BONUS:.c=.o)
CC			=	gcc
RM			=	rm -f
CFLAGS		= 	-Wall -Wextra -Werror -I./includes
NAME		= 	libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re bonus
