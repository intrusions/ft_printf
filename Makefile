SRCS		=	srcs/ft_print_c.c srcs/ft_print_s.c srcs/ft_print_p.c srcs/ft_print_d.c \
				srcs/ft_print_i.c srcs/ft_print_u.c srcs/ft_print_x.c srcs/ft_print_X.c \
				srcs/ft_print_percent.c srcs/utils.c srcs/ft_len.c ft_printf.c

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

RM			=	rm -f

CFLAGS		= 	-Wall -Wextra -Werror -I./includes

NAME		= 	libftprintf.a

all:		$(NAME)
	@echo "                                                                                         "
	@echo " /6666666  /66     /66       /66   /66  /666666  /66   /66 /66   /66 /66666666 /66       "
	@echo "| 66__  66|  66   /66/      | 66  | 66 /666_  66| 66  | 66| 66  / 66| 66_____/| 66       "
	@echo "| 66  \ 66 \  66 /66/       | 66  | 66| 6666\ 66| 66  | 66|  66/ 66/| 66      | 66       "
	@echo "| 6666666   \  6666/        | 66666666| 66 66 66| 66666666 \  6666/ | 66666   | 66       "
	@echo "| 66__  66   \  66/         |_____  66| 66\ 6666|_____  66  >66  66 | 66__/   | 66       "
	@echo "| 66  \ 66    | 66                | 66| 66 \ 666      | 66 /66/\  66| 66      | 66       "
	@echo "| 6666666/    | 66                | 66|  666666/      | 66| 66  \ 66| 66666666| 66666666 "
	@echo "|_______/     |__/                |__/ \______/       |__/|__/  |__/|________/|________/ "

$(NAME):	$(OBJS)
	echo $(HEADER)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re bonus

#compile and creat an executable with a test main
#$(NAME):
#	$(CC) $(CFLAGS) $(SRCS) main_tester.c -o $(NAME) 
