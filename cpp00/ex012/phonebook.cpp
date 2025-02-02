/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:48:54 by olyetisk          #+#    #+#             */
/*   Updated: 2025/02/02 15:29:48 by olyetisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "phonebook.hpp"

PhoneBook::PhoneBook() : directory(0), olddirectory(0) {}

std::string PhoneBook::control(const std::string &str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::addContact() {
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkestSecret);

    if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty()) {
        std::cout << "Empty Files." << std::endl;
        return;
    }

    contacts[olddirectory].setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    olddirectory = (olddirectory + 1) % 8;
    if (directory < 8) directory++;
    std::cout << "Directory added successfully!" << std::endl;
}

void PhoneBook::searchContacts() const {
    if (directory == 0) {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    for (int i = 0; i < directory; ++i) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << control(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << control(contacts[i].getLastName()) << "|"
                  << std::setw(10) << control(contacts[i].getNickname()) << std::endl;
    }

    std::cout << "Enter the index of the contact to view: ";
    int index;
    std::cin >> index;
    std::cin.ignore();

    if (index < 0 || index >= directory) {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}
