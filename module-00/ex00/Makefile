# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 02:30:17 by ccamie            #+#    #+#              #
#    Updated: 2022/10/20 01:40:35 by ccamie           ###   ########.fr        #
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

test-00		:	test-00.out
				./$(NAME) "* LOUD AND UNBEARABLE FEEDBACK NOISE *" | ./test-00.out

test-01		:	test-01.out
				./$(NAME) "shhhhh... I think the students are asleep..." | ./test-01.out

test-02		:	test-02.out
				./$(NAME) " ! " "Sorry students, I thought this thing was off." | ./test-02.out

test-00.out	:	test-00.o
				$(CC) $(CXXFLAGS) test-00.cpp -o test-00.out

test-01.out	:	test-01.o
				$(CC) $(CXXFLAGS) test-01.cpp -o test-01.out

test-02.out	:	test-02.o
				$(CC) $(CXXFLAGS) test-02.cpp -o test-02.out

test		:	test-00 test-01 test-02

clean		:
				$(RM) $(OBJECT)

fclean		:
				$(RM) $(OBJECT)
				$(RM) $(NAME)

re			:	fclean all
