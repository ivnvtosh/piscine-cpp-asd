/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:35:51 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 19:38:18 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static bool myIsDigit(int character) {
	return character >= 48 && character <= 57;
}

static bool myIsSpace(int character) {
	return (character >= 9 && character <= 13) || character == 32;
}

int myAtoi(std::string string) {
	int num;
	int sign;
	int i;

	i = 0;
	while (myIsSpace(string[i]) == true) {
		i += 1;
	}

	switch (string[i]) {
	case '-':
		sign = -1;
		i += 1;
		break;

	case '+':
		sign = 1;
		i += 1;
		break;
	
	default:
		sign = 1;
		break;
	}

	num = 0;
	while (myIsDigit(string[i]) == true) {
		num = num * 10 + string[i] - 48;
		i += 1;
	}

	return (num * sign);
}

bool onlyDigit(std::string string) {
	int i = 0;
	while (int character = string[i]) {
		if (myIsDigit(character) == false) {
			return false;
		}
		i += 1;
	}

	return true;
}
