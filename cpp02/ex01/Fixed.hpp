
#include <iostream>

class Fixed
{
private:
	static const int F_BITS_COUNT = 8;
	int data;

public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(const Fixed& from);
	~Fixed();

	Fixed &operator=(const Fixed& from);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

};
std::ostream& operator<<(std::ostream &output, const Fixed &v);
