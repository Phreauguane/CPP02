#include "Fixed.h"


Fixed::Fixed()
{
	bits = 0;
}

Fixed::Fixed(const Fixed& i)
{
	*this = i;
}

const Fixed Fixed::operator=(const Fixed& i)
{
	bits = i.getRawBits();
}

int Fixed::getRawBits() const
{
	return bits;
}

void Fixed::setRawBits(int const bits)
{
	this->bits = bits;
}

Fixed::~Fixed(){}