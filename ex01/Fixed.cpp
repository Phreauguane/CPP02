#include "Fixed.h"


Fixed::Fixed()
{
	cout("Default constructor called");
	bits = 0;
}

Fixed::Fixed(const Fixed& i)
{
	cout("Copy constructor called");
	*this = i;
}

const Fixed& Fixed::operator=(const Fixed& i)
{
	cout("Copy assignment operator called");
	bits = i.getRawBits();
	
	return *this;
}

int Fixed::getRawBits() const
{
	cout("getRawBits called");
	return bits;
}

void Fixed::setRawBits(int const bits)
{
	cout("setRawBits called");
	this->bits = bits;
}

Fixed::~Fixed()
{
	cout("Destructor called");
}