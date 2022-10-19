# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 02:30:17 by ccamie            #+#    #+#              #
#    Updated: 2022/10/20 02:56:17 by ccamie           ###   ########.fr        #
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

.PHONY		:	all clean fclean re test-00 test-01 test-02 test

%.o			:	%.c
				$(CC) $(CPPFLAGS) -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJECT)
				$(CC) $(CXXFLAGS) $(OBJECT) -o $(NAME)

test-00		:	test.out
				./$(NAME) "shhhhh... I think the students are asleep..." | ./test.out "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."

test-01		:	test.out
				./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off." | ./test.out "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."

test-02		:	test.out
				./$(NAME) | ./test.out "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

test.out	:	test.o
				$(CC) $(CXXFLAGS) test.cpp -o test.out

test		:	test-00 test-01 test-02

clean		:
				$(RM) $(OBJECT)

fclean		:
				$(RM) $(OBJECT)
				$(RM) $(NAME)

re			:	fclean all
