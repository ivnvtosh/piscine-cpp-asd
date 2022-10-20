/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:35:45 by ccamie            #+#    #+#             */
/*   Updated: 2022/10/20 16:53:06 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_HPP
#define CLASS_PHONEBOOK_HPP

#include "ClassContact.hpp"

class PhoneBook {
private:
	Contact	contacts[8];
	int	numberOfContacts;

	void _offset();

public:
	PhoneBook();

	void append(Contact contact);

	bool isEmpty();
	bool isEmpty(int index);

	void description();
	void description(int index);

	void newContact();
};

#endif // CLASS_PHONEBOOK_HPP
