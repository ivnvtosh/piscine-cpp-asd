/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:35:41 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/22 11:09:08 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact::Contact() {

}

Contact::Contact(std::string firstName,
				 std::string lastName,
				 std::string nickname,
				 std::string phoneNumber,
				 std::string darkestSecret) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

static void _printSpaces(int count) {
	for (int i = 0; i < count; i += 1) {
		std::cout << " ";
	}
}

static void _print(std::string left, std::string right) {
	std::cout << "\x1b[43m\x1b[30m\x1b[1m"
			  << left
			  << "\x1b[0m ";

	std::cout << "\x1b[47m\x1b[30m\x1b[1m "
			  << right;
	_printSpaces(20 - right.length());
	std::cout << " \x1b[0m\n";
}

void Contact::description() {
	_print(" 👤 Имя             : ", this->firstName);
	_print(" 👤 Фамилия         : ", this->lastName);
	_print(" 👤 Логин           : ", this->nickname);
	_print(" 👤 Номер телефона  : ", this->phoneNumber);
	_print(" 👤 Секрет          : ", this->darkestSecret);

	std::cout << std::endl;
}

std::string Contact::getFirstName() {
	return firstName;
}

std::string Contact::getLastName() {
	return lastName;
}

std::string Contact::getNickname() {
	return nickname;
}
