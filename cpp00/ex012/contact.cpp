/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:49:15 by olyetisk          #+#    #+#             */
/*   Updated: 2025/02/02 15:31:36 by olyetisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "contact.hpp"

void Contact::setContact(const std::string &fName, const std::string &lName, const std::string &nname,
                         const std::string &pNumber, const std::string &dSecret) {
    this->firstName = fName;
    this->lastName = lName;
    this->nickname = nname;
    this->phoneNumber = pNumber;
    this->darkestSecret = dSecret;
}

std::string Contact::getFirstName() const { return firstName; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getPhoneNumber() const { return phoneNumber; }
std::string Contact::getDarkestSecret() const { return darkestSecret; }