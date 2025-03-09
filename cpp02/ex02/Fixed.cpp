#include "Fixed.hpp"

FixedPoint::FixedPoint() : raw(0)
{
}

FixedPoint::FixedPoint(const FixedPoint &other)
{
	*this = other;
}

FixedPoint &FixedPoint::operator=(const FixedPoint &other)
{
	if (this != &other)
		raw = other.getRawBits();
	return *this; 
}

FixedPoint::~FixedPoint(){}

int FixedPoint::getRawBits(void) const
{
	return raw;
}

void FixedPoint::setRawBits(int const raw)
{
	this->raw = raw;
}

FixedPoint::FixedPoint(int value)
{
	this->raw = value << fract_bits;
}

FixedPoint::FixedPoint(const float value)
{
	this -> raw = (int)roundf(value * (1 << fract_bits));//sayıyı int yapıp sklıyoruz
}

float FixedPoint::toFloat(void) const
{
	return((float) this->raw / (1 << fract_bits));
}

int FixedPoint::toInt(void) const
{
	return (this->raw >> this->fract_bits);//bitshift ile böler
}

std::ostream &operator << (std::ostream &output, const FixedPoint &fixed)
{
    output << fixed.toFloat();//floata cevirip yazdırıyor
    return output;
}
FixedPoint &FixedPoint::operator++()//önce artar sonra döndürür
{
	this->raw++;
	return (*this);
}

FixedPoint FixedPoint::operator++(int)//önce döndürür sonra artar
{
	FixedPoint tmp = *this;
	this->raw++;
	return(tmp);
}
FixedPoint &FixedPoint::operator--()//önce azaltır sonra döndürür
{
	this->raw--;
	return (*this);
}
FixedPoint FixedPoint::operator--(int)//önce döndürür sonra azaltır)
{
	FixedPoint tmp = *this;
	this->raw--;
	return(tmp);
}

FixedPoint &FixedPoint::min(FixedPoint &r1, FixedPoint &r2)
{
	return ((r1.raw > r2.getRawBits()) ? r2 : r1);
}
FixedPoint& FixedPoint::max(FixedPoint &r1, FixedPoint &r2)
{
    return ((r1.raw > r2.getRawBits()) ? r1 : r2);
}

const FixedPoint& FixedPoint::min(const FixedPoint &r1, const FixedPoint &r2)
{
    return ((r1.raw > r2.getRawBits()) ? r2 : r1);//? if else gibi çalışır r1 r2 den büyükse r1 yi döndürür r2 büyükse r2 yi döndürür
}
const FixedPoint& FixedPoint::max(const FixedPoint &r1, const FixedPoint &r2)
{
    return ((r1.raw > r2.getRawBits()) ? r1 : r2);
}

bool FixedPoint::operator < (const FixedPoint &r) const
{
    return  (this->raw < r.getRawBits());
}
bool FixedPoint::operator > (const FixedPoint &r) const
{
    return (this->raw > r.getRawBits());
}
bool FixedPoint::operator >= (const FixedPoint &r) const
{
    return (this->raw >= r.getRawBits());
}
bool FixedPoint::operator <= (const FixedPoint &r) const
{
    return (this->raw <= r.getRawBits());
}
bool FixedPoint::operator == (const FixedPoint &r) const
{
    return (this->raw == r.getRawBits());
}
bool FixedPoint::operator != (const FixedPoint &r) const
{
    return (this->raw != r.getRawBits());
}
float FixedPoint::operator + (const FixedPoint &r) const
{
    return (this->toFloat() + r.toFloat());
}
float FixedPoint::operator - (const FixedPoint &r) const
{
    return (this->toFloat() - r.toFloat());
}
float FixedPoint::operator / (const FixedPoint &r) const
{
    return (this->toFloat() / r.toFloat());
}
float FixedPoint::operator * (const FixedPoint &r) const
{
    return (this->toFloat() * r.toFloat());
}