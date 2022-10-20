/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:35:30 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 16:48:34 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#define MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int myToUpper(int character) {
    if (character >= 97 && character <= 122) {
		return character - 32;
	} else {
		return character;
	}
}

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << MESSAGE << std::endl;
		return EXIT_SUCCESS;
	}

	int j = 1;
	while (char *string = argv[j]) {

		int i = 0;
		while (int character = string[i]) {
			std::cout << (char)myToUpper(character);
			i += 1;
		}

		j += 1;
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}
