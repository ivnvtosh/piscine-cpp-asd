/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:35:50 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 18:21:21 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void welcomeMessage() {
	std::cout << "\033c"
				 "\x1b[47m\x1b[30m\x1b[1m"
			     " ✋ Здравствуйте,                            "
				 "\x1b[0m\n";

	std::cout << "\x1b[47m\x1b[30m\x1b[1m"
				 " 📘 Добро пожаловать в телефоную книгу 3000! "
				 "\x1b[0m\n";

	std::cout << std::endl;
}

void invalidInputMessage() {
	std::cout << "\x1b[41m\x1b[30m\x1b[1m"
				 " ❌ Недействительный ввод!                   "
				 "\x1b[0m\n";

	std::cout << std::endl;
}

void newContactMessage() {
	std::cout << "\n\033[1F"
				 "\x1b[47m\x1b[30m\x1b[1m"
				 " ✋ Новый контакт:                           "
				 "\x1b[0m\n";

	std::cout << std::endl;
}

void contactRecordedMessage() {
	std::cout << "\x1b[47m\x1b[30m\x1b[1m"
				 " ✅ Котнакт записан                          "
				 "\x1b[0m\n";

	std::cout << std::endl;
}

void yourContactMessage() {
	std::cout << "\n\033[1F"
				 "\x1b[47m\x1b[30m\x1b[1m"
				 " 📚 Твои контакты:                           "
			  	 "\x1b[0m\n";

	std::cout << std::endl;
}

void emptyMessage() {
	std::cout << "\x1b[47m\x1b[30m\x1b[1m"
				 " 🗑  Пора найти друзей!                       "
			  	 "\x1b[0m\n";

	std::cout << std::endl;
}

void invalidIndexMessage() {
	std::cout << "\x1b[41m\x1b[30m\x1b[1m"
				 " ❌ Контакт не найден                        "
			  	 "\x1b[0m\n";

	std::cout << std::endl;
}

void byeMessage() {
	std::cout << "\x1b[47m\x1b[30m\x1b[1m"
				 " 👋 Спасибо, до свидания!                    "
				 "\x1b[0m\n";

	std::cout << "\x1b[47m\x1b[30m\x1b[1m"
				 " 🗿 Ваши контакты безвозмездно утеряны!      "
				 "\x1b[0m\n";

	std::cout << std::endl;
}

void emergencyMessage() {
	std::cout << "\n"
				 "\x1b[41m\x1b[30m\x1b[1m"
				 " 🚨 Аварийная ситуация!                      "
			  	 "\x1b[0m\n";

	std::cout << std::endl;
}
