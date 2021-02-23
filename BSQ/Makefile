CC 			= gcc
OBJS 		= $(SRCS:.c=.o)
CFLAGS 		= -Wall -Wextra -Werror

NAME 		= BSQ
RM 			= rm -rf

SRCS_NAME 	=
SRC_PATH 	= srcs
SRCS 		= $(addprefix $(SRC_PATH)/,$(SRCS_NAME))


INC_NAME 	= ft.h
INC_PATH 	= includes
INC 		= $(addprefix $(INC_PATH)/,$(INC_NAME))
IFLAGS 		= -I$(INC_PATH)

all:		$(NAME)

$(NAME):	$(OBJS) $(INC)
			$(GCC) $(FLAGS) -o $(NAME) $(OBJS)

%.o:%.c
			$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
.PHONY: 	all clean fclean re
