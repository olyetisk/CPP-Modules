/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:48:58 by olyetisk          #+#    #+#             */
/*   Updated: 2025/02/02 15:12:17 by olyetisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook {
private:
    Contact contacts[8];
    int directory;
    int olddirectory;

    std::string control(const std::string &str) const;

public:
    PhoneBook();
    void addContact();
    void searchContacts() const;
};

#endif
