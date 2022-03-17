SRCS		=	ft_printf.c ft_print_c.c ft_print_s.c
OBJS		=	$(SRCS:.c=.o)
BONUS_OBJS	= $(BONUS:.c=.o)
CC			=	gcc
RM			=	rm -f
CFLAGS		= -I.
NAME		= libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean $(NAME)

#bonus:                  $(OBJS) $(BONUS_OBJS)
#								ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:		all clean fclean re bonus
