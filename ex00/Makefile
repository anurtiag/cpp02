# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 13:48:02 by anurtiag          #+#    #+#              #
#    Updated: 2024/06/13 09:22:02 by anurtiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	fixed_point


SRCS			=	main.cpp Fixed.cpp

OBJ				=	$(SRCS:.cpp=.o)


CC				=	c++


CFLAGS			=	-Wall -Wextra -Werror -std=c++98


RM				=	rm -rf


all:			$(NAME)


$(NAME):		$(OBJ)
				@$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)


clean:
				@$(RM) $(OBJ)


fclean:			clean
				@$(RM) $(NAME)


re:				fclean all


.PHONY:			all clean fclean re