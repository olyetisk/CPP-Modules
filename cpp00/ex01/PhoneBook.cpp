#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->directory = 0;
	this->repdirectory = 0;
}
void PhoneBook::ADD()
{
	std::string 	name;
	std::string 	surname;
	std::string 	username;
	std::string 	number;
	std::string 	darkestsecret;
	unsigned long	num;
	int 			error;
 
	if (this ->directory == 8)
		this->directory = 0;
	if (this -> repdirectory != 8)
		this->repdirectory++;
	while(!std::cin.eof())
	{
		std::cout << "Name :";
		std::getline(std::cin, name);
		if (std::cin.eof())
			break ;
		std::cout << "Surname :";
		std::getline(std::cin, surname);
		if (std::cin.eof())
			break ;
		std::cout << "Username :";
		std::getline(std::cin, username);
		if (std::cin.eof())
			break ;
		while(!std::cin.eof())
		{
			error = 0;
			std::cout <<"Phone Number :";
			std::getline(std::cin, number);
			if (std::cin.eof())
				break ;
			int i;
			for(i = 0; number[i];  i++)
			{
				if(!std::isdigit(number[i]))
				{
						std::cout << "Enter Number!" << std::endl;
					error = 1;
					break;
				}

			}
			if (error == 1)
				continue;
			num = atol(number.c_str());
			if (number.c_str > 4294967295)
   			{
       			std::cout << "Number is out of valid range!" << std::endl;
        		continue;
    		}
            break;
		}
		if (std::cin.eof())
			break ;
		std::cout << "Darkest Secret :";
		std::getline(std::cin, darkestsecret);
		if (std::cin.eof())
			break ;
		if (name.empty() || surname.empty() || username.empty() || darkestsecret.empty() || number.empty())
		{
			std::cout << "Error: Cannot be empty. Please enter a valid value." << std::endl;
			continue ;
		}
		break ;
	}
	People[this->directory].SetName(name);
	People[this->directory].SetSurname(surname);
	People[this->directory].SetUsername(username);
	People[this->directory].SetNumber(num);
	People[this->directory].SetSecret(darkestsecret);
	this->directory++;
}

std::string PhoneBook::SetLen(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + '.';
	return (str);
}

void PhoneBook::SEARCH()
{
    std::string index;
    int index2;

    if (this->repdirectory == 0)
	{
        std::cout << "Empty Phonebook" << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "Name" << "|"
              << std::setw(10) << "Surname" << "|" << std::setw(10) << "Username" << std::endl;
	int x;
    for (x = 0; x < this->repdirectory; x++)
	{
        std::cout << std::setw(10) << x << "|" << std::setw(10) << SetLen(this->People[x].getName())
                  << "|" << std::setw(10) << SetLen(this->People[x].getSurname()) << "|"
                  << std::setw(10) << SetLen(this->People[x].getUsername()) << std::endl;
    }

    while (!std::cin.eof())
	{
        std::cout << "Index Please :";
        std::getline(std::cin, index);
        std::cout << std::endl;
		if (std::cin.eof())
			return;
		if (index.empty() || index.find_first_not_of("0123456789") != std::string::npos || (index.length() > 1))
		{
        	std::cout << "Incorrect index!" << std::endl;
        	continue;
		}

        index2 = this->repdirectory;
        if (index2 < 0)
		{
            std::cout << "Incorrect index!" << std::endl;
            continue;
        }
        break;
    }

    std::cout << std::endl << "Index :" << index2 << std::endl
              << "Name :" << this->People[index2].getName() << std::endl
              << "Surname :" << this->People[index2].getSurname() << std::endl
              << "Username :" << this->People[index2].getUsername() << std::endl
              << "Number :" << this->People[index2].getNumber() << std::endl
              << "Secret :" << this->People[index2].getSecret() << std::endl;
    std::cout << std::endl;
}
