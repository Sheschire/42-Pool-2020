SRCS_NAME = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRC_PATH = srcs
CC = gcc
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
RM = rm -rf
INC_NAME = ft.h
INC_PATH = includes
INC = $(addprefix $(INC_PATH)/,$(INC_NAME))
SRCS = $(addprefix $(SRC_PATH)/,$(SRCS_NAME))
AR = ar
ARFLAGS = rcs
IFLAGS = -I$(INC_PATH)
all:		$(NAME)
$(NAME):	$(OBJS) $(INC)
			$(AR) $(ARFLAGS) $(NAME) $(OBJS)
%.o:%.c
			$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean all
.PHONY:		all clean fclean re
.SUFFIXES:	.c.o.h
