

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

Fixed::Fixed() :
	data(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) :
	data(value << this->F_BITS_COUNT) //burdada << çarparak saklıyor ilk önce 
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value) :
	data((int)std::roundf(value * (1 << this->F_BITS_COUNT))) //burda dediği şey value bizim sayımız mesela 5 * 1 << 8 yani 256 ile çarp cevir diyor
{
	std::cout << "Float constructor called" << std::endl; //roudf ile floatı yuvarlayıp int tipinde saklıyor
	//çünkü float ile saklanırsa hatalar meydana geliyor int e cevirip saklıyoruz
}//bizde önce floatı işliyoruz sonra roundf ile yuvaryalıp tam sayıya çeviriyoruz sonra saklıyoruz

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

	if (this == &from)
		return *this;

	this->data = from.data;

	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->data;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;

	this->data = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->data / (float)(1 << this->F_BITS_COUNT)); //burda ise saklanan fixedpointtek inti floata ceviriyoruz 
}//mesela innte saklanan değer 20 /256 = 0.078125 oluyor

int Fixed::toInt(void) const
{
	return this->data >> this->F_BITS_COUNT;//bitsihft ile bölme yapar daha hızlıdır / bundan 2 üzeri 8 ile saklar 2 üzeri 1 ile bölmeye
	//başlar sonrasında 2 üzeri 2 yapar gider
}//mesela 10 değeri var 10*256=2560 sonra bitshift ile bölüyor 8 e yani 2560/256 = 10 oluyor

std::ostream& operator<<(std::ostream &output, const Fixed &v)
{
	output
		<< v.toFloat();//burda çıktıda float olark istiyor bizde mesela floata gönderip gelen değeri yazdıyıyruz
	return output;
}
