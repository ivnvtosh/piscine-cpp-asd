/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:35:44 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 20:31:41 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->numberOfContacts = 0;
}

void PhoneBook::_offset() {
	int	count = this->numberOfContacts - 1;
	for (int i = 0; i < count; i += 1) {
		this->contacts[i] = this->contacts[i + 1];
	}
}

void PhoneBook::append(Contact contact) {
	if (this->numberOfContacts == 8) {
		_offset();
		this->contacts[7] = contact;
	} else {
		this->contacts[this->numberOfContacts] = contact;
		this->numberOfContacts += 1;
	}
}

bool PhoneBook::isEmpty() {
	return this->numberOfContacts == 0;
}

static bool inRange(int a, int x, int b) {
	return a <= x && x < b;
}

bool PhoneBook::isEmpty(int index) {
	return !inRange(0, index, this->numberOfContacts);
}

static void _printSpaces(int count) {
	for (int i = 0; i < count; i += 1) {
		std::cout << " ";
	}
}

static void _print(std::string string) {
	int length = string.length();
	if (length <= 10) {
		_printSpaces(10 - length);
		std::cout << string
				  << "|";
		return;
	}
	
	for (int i = 0; i < 9; i += 1) {
		std::cout << string[i];
	}
	std::cout << ".|";
}

void PhoneBook::description() {
	int	count = this->numberOfContacts;
	for (int i = 0; i < count; i += 1) {
		Contact contact = this->contacts[i];

		std::cout << "+----------+----------+----------+----------+\n";
		std::cout << "|         " << i << "|" ;
		_print(contact.getFirstName());
		_print(contact.getLastName());
		_print(contact.getNickname());
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+\n";

	std::cout << std::endl;
}

void PhoneBook::description(int index) {
	this->contacts[index].description();
}

static std::string getInput(std::string message) {
	if (std::cin.eof() == true) {
		return "";
	}

	std::string	string;



	while (1) {
		std::cout << "\n\033[1F"
				  << "\x1b[43m\x1b[37m\x1b[1m"
				  << message
				  << "\x1b[0m"
				     " ";

		std::cout << "\x1b[47m\x1b[30m\x1b[1m"
					 " \0337                      \0338\0337";

		std::getline(std::cin, string);

		std::cout << "\0338" << string << "\n";

		if (std::cin.eof() == true) {
			return "";
		}

		if (string.empty() == true) {
			std::cout << "\x1b[0m" << std::endl;

			std::cout << "\x1b[41m\x1b[30m\x1b[1m"
						 " ❌ Заполните поле!                          "
						 "\x1b[0m\n";

			std::cout << "\x1b[0m" << std::endl;
			continue;
		}

		std::cout << "\x1b[0m";

		return string;
	}
}

void PhoneBook::newContact() {
	std::string	firstName     = getInput(" 👤 Имя            : ");
	std::string	lastName      = getInput(" 👤 Фамилия        : ");
	std::string	nickname      = getInput(" 👤 Логин          : ");
	std::string	phoneNumber   = getInput(" 👤 Номер телефона : ");
	std::string	darkestSecret = getInput(" 👤 Секрет         : ");
	if (std::cin.eof() == true) {
		return;
	}

	std::cout << std::endl;

	Contact	contact = Contact(firstName,
							  lastName,
							  nickname,
							  phoneNumber,
							  darkestSecret);

	this->append(contact);
}
