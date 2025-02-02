#include <iostream>
#include <iomanip>
#include <vector>
#include "Contact.hpp"

class PhoneBook
{
private:
	int directory;
	int repdirectory;
	Contact People[8];
	std::string SetLen(std::string str);
public:

	void ADD();
	void SEARCH();
	PhoneBook();
};
