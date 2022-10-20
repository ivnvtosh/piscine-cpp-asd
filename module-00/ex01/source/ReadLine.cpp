/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadLine.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:21:28 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 18:21:06 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string readLine() {
	std::string	string;

	std::cout << "\n\033[1F"
				 "\x1b[47m\x1b[30m\x1b[1m"
				 " 🗿                                          "
				 "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
				 "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";


	std::getline(std::cin, string);

	std::cout << "\x1b[0m" << std::endl;

	return string;
}
