

#include <iostream>

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
//ortodoks katonik form mantıksal ifadelerin standart hale getirilmiş halidir yani
//consturacot felan hepsi bir katolik form bu sayede güvenli ve kopyalama iyi çalşır