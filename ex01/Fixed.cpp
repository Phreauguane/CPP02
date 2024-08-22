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

Fixed::Fixed(const int i)
{
	cout("Int constructor called");
	bits = i << nbits;
}

Fixed::Fixed(const float f)
{
	cout("Float constructor called");
	bits = int(f * float(1 << nbits)); // get the integer part
}

int Fixed::toInt() const
{
	return bits >> nbits;
}

float Fixed::toFloat() const
{
	return float(bits) / float(1 << nbits);
}

int Fixed::getRawBits() const
{
	return bits;
}

void Fixed::setRawBits(int const bits)
{
	this->bits = bits;
}

const Fixed& Fixed::operator=(const Fixed& i)
{
	cout("Copy assignment operator called");
	bits = i.getRawBits();
	
	return *this;
}

std::ostream &operator<<(std::ostream &output, Fixed const &fixed)
{
	output << fixed.toFloat();
	return (output);
}

bool Fixed::operator<(const Fixed& f)
{
	return this->toFloat() < f.toFloat();
}

bool Fixed::operator<=(const Fixed& f)
{
	return this->toFloat() <= f.toFloat();
}

bool Fixed::operator>(const Fixed& f)
{
	return this->toFloat() > f.toFloat();
}

bool Fixed::operator>=(const Fixed& f)
{
	return this->toFloat() >= f.toFloat();
}

bool Fixed::operator==(const Fixed& f)
{
	return this->toFloat() == f.toFloat();
}

bool Fixed::operator!=(const Fixed& f)
{
	return this->toFloat() != f.toFloat();
}

const Fixed& Fixed::operator+(const Fixed& f)
{
	return Fixed(this->toFloat() + f.toFloat());
}

const Fixed& Fixed::operator-(const Fixed& f)
{
	return Fixed(this->toFloat() - f.toFloat());
}

const Fixed& Fixed::operator*(const Fixed& f)
{
	return Fixed(this->toFloat() * f.toFloat());
}

const Fixed& Fixed::operator/(const Fixed& f)
{
	return Fixed(this->toFloat() / f.toFloat());
}

const Fixed& Fixed::operator++()
{
	++bits;
	return *this;
}

const Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++bits;
	return temp;
}

const Fixed& Fixed::operator--()
{
	--bits;
	return *this;
}

const Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--bits;
	return temp;
}

const Fixed& Fixed::operator+=(const Fixed& f)
{
	*this = *this + f;
	return *this;
}

const Fixed& Fixed::operator-=(const Fixed& f)
{
	*this = *this - f;
	return *this;
}

Fixed::~Fixed()
{
	cout("Destructor called");
}