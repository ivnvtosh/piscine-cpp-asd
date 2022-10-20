# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 02:30:17 by ccamie            #+#    #+#              #
#    Updated: 2022/10/20 03:29:43 by ccamie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL		=	/bin/sh

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS	+=	-std=c++98

CXXFLAGS	=	

RM			=	rm -f

NAME		=	megaphone.out

SOURCE		=	megaphone.cpp

OBJECT		=	megaphone.o

.SUFFIXES	:
.SUFFIXES	:	.cpp .o

.PHONY		:	all clean fclean re test

%.o			:	%.c
				$(CC) $(CPPFLAGS) -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJECT)
				$(CC) $(CXXFLAGS) $(OBJECT) -o $(NAME)

test.out	:	test.o
				$(CC) $(CXXFLAGS) test.cpp -o test.out

test		:
				./$(NAME) "shhhhh... I think the students are asleep..." | ./test.out "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
				./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off." | ./test.out "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
				./$(NAME) | ./test.out "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

clean		:
				$(RM) $(OBJECT)

fclean		:
				$(RM) $(OBJECT)
				$(RM) $(NAME)

re			:	fclean all
