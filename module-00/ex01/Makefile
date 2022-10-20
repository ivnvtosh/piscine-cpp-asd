# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 16:35:48 by ccamie            #+#    #+#              #
#    Updated: 2022/10/20 19:27:54 by ccamie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL		=	/bin/sh

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS	+=	-std=c++98
CPPFLAGS	+=	-I include
CPPFLAGS	+=	-g

CXXFLAGS	=	

MKDIR		=	mkdir -p

RMDIR		=	rm -rf
RM			=	rm -f

NAME		=	phonebook.out

HEADER		=	ClassContact.hpp	\
				ClassPhoneBook.hpp	\

FUNCTIONS	=	ClassContact.cpp	\
				ClassPhoneBook.cpp	\
				Main.cpp			\
				Messages.cpp		\
				ReadLine.cpp		\
				Utils.cpp			\

SOURCE		=	$(addprefix source/, $(FUNCTIONS))
OBJECT		=	$(addprefix object/, $(FUNCTIONS:.cpp=.o))
FOLDER		=	$(sort $(dir object/ $(OBJECT)))
HEADER		=	$(addprefix include/, $(HEADER))

.SUFFIXES	:
.SUFFIXES	:	.cpp .o

.PHONY		:	all clean fclean re test

%.o			:	%.cpp
				$(CC) $(CPPFLAGS) -c $< -o $@

object/%.o	:	source/%.cpp 
				$(CC) $(CPPFLAGS) -c $< -o $@

all			:	$(FOLDER) $(NAME)

$(FOLDER)	:
				$(MKDIR) $@

$(NAME)		:	$(OBJECT)
				$(CC) $(CXXFLAGS) $(OBJECT) -o $(NAME)

test		:	all
				./$(NAME) < test/test-00 > test/returned-00.log
				diff test/expected-00 test/returned-00.log
				./$(NAME) < test/test-01 > test/returned-01.log
				diff test/expected-01 test/returned-01.log

clean		:
				$(RM) $(OBJECT)
				$(RMDIR) $(FOLDER)

fclean		:
				$(RM) $(OBJECT)
				$(RMDIR) $(FOLDER)
				$(RM) $(NAME)

re			:	fclean all
