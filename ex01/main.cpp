#include "Fixed.h"

int main( void )
{
	Fixed a( 0.f );

	std::cout << a << " then " << ++a << std::endl;
	std::cout << a++ << " then " << a << std::endl;
	
	return 0;
}