/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Message.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:35:50 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/21 16:22:13 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Message.hpp"
#include <iostream>

void Message::welcome() {
	std::cout << "\033c"
				 "\x1b[47m\x1b[30m\x1b[1m"
			     " ✋ Здравствуйте,                            "
				 "\x1b[0m\n";

	std::cout << "\x1b[47m\x1b[30m\x1b[1m"
				 " 📘 Добро пожаловать в телефоную книгу 3000! "
				 "\x1b[0m\n";

	std::cout << std::endl;
}

void Message::invalidInput() {
	std::cout << "\x1b[41m\x1b[30m\x1b[1m"
				 " ❌ Недействительный ввод!                   "
				 "\x1b[0m\n";

	std::cout << std::endl;
}

void Message::newContact() {
	std::cout << "\n\033[1F"
				 "\x1b[47m\x1b[30m\x1b[1m"
				 " ✋ Новый контакт:                           "
				 "\x1b[0m\n";

	std::cout << std::endl;
}

void Message::contactRecorded() {
	std::cout << "\x1b[47m\x1b[30m\x1b[1m"
				 " ✅ Котнакт записан                          "
				 "\x1b[0m\n";

	std::cout << std::endl;
}

void Message::yourContact() {
	std::cout << "\n\033[1F"
				 "\x1b[47m\x1b[30m\x1b[1m"
				 " 📚 Твои контакты:                           "
			  	 "\x1b[0m\n";

	std::cout << std::endl;
}

void Message::contactNotFound() {
	std::cout << "\x1b[47m\x1b[30m\x1b[1m"
				 " 🗑  Пора найти друзей!                       "
			  	 "\x1b[0m\n";

	std::cout << std::endl;
}

void Message::fillInField() {
	std::cout << "\x1b[41m\x1b[30m\x1b[1m"
				" ❌ Заполните поле!                          "
				"\x1b[0m\n";

	std::cout << std::endl;
}

void Message::invalidIndex() {
	std::cout << "\x1b[41m\x1b[30m\x1b[1m"
				 " ❌ Контакт не найден                        "
			  	 "\x1b[0m\n";

	std::cout << std::endl;
}

void Message::bye() {
	std::cout << "\x1b[47m\x1b[30m\x1b[1m"
				 " 👋 Спасибо, до свидания!                    "
				 "\x1b[0m\n";

	std::cout << "\x1b[47m\x1b[30m\x1b[1m"
				 " 🗿 Ваши контакты безвозмездно утеряны!      "
				 "\x1b[0m\n";

	std::cout << std::endl;
}

void Message::emergency() {
	std::cout << "\x1b[41m\x1b[30m\x1b[1m"
				 " 🚨 Аварийная ситуация!                      "
			  	 "\x1b[0m\n";

	std::cout << std::endl;
}
