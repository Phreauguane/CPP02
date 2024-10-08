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
	const Fixed& operator=(const Fixed&);
	int getRawBits() const;
	void setRawBits(int const bits);
	~Fixed();
};
