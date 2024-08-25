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
	bool operator<(const Fixed&) const;
	bool operator<=(const Fixed&) const;
	bool operator>(const Fixed&) const;
	bool operator>=(const Fixed&) const;
	bool operator==(const Fixed&) const;
	bool operator!=(const Fixed&) const;
	float operator+(const Fixed&);
	float operator-(const Fixed&);
	float operator*(const Fixed&);
	float operator/(const Fixed&);
	const Fixed& operator+=(const Fixed&);
	const Fixed& operator-=(const Fixed&);
	const Fixed& operator++();
	const Fixed operator++(int);
	const Fixed& operator--();
	const Fixed operator--(int);
	static const Fixed& max(const Fixed&, const Fixed&);
	static const Fixed& min(const Fixed&, const Fixed&);
	static Fixed& max(Fixed&, Fixed&);
	static Fixed& min(Fixed&, Fixed&);
	int getRawBits() const;
	void setRawBits(int const bits);
	float toFloat() const;
	int toInt() const;
	~Fixed();
};

std::ostream& operator<<(std::ostream&, const Fixed&);