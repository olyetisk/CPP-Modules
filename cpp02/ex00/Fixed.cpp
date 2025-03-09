
#include <iostream>

#include "Fixed.hpp"

Fixed::Fixed() :
	data(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &from) :
	data(from.data)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &from)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &from) //c ve b aynısysa bişey yapma
		return *this;


	this->data = from.data; //farklıysa b nin değerini c ye ata aynı olsun

	return *this;
}

int Fixed::getRawBits(void) const //okumaya yarar her zaman başlangıçı 0 dır bir değer döndürür
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->data;
}

void Fixed::setRawBits(int const raw) //değeri değiştirmeye yarar
{
	std::cout << "setRawBits member function called" << std::endl;

	this->data = raw;
}
