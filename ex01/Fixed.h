#pragma once

#include <iostream>
#define cout(x) std::cout << x << std::endl

class Fixed
{
private:
	int bits;
	static const int nbits = 8;
public:
	Fixed();
	Fixed(const Fixed&);
	Fixed(const int);
	Fixed(const float);
	const Fixed& operator=(const Fixed&);
	int getRawBits() const;
	void setRawBits(int const bits);
	float toFloat() const;
	int toInt() const;
	~Fixed();
};

std::ostream& operator<<(std::ostream&, const Fixed&);