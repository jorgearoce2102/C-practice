
#include <iostream>
#include "headers.h"


// int add(int x, int y);

main(){

  Cents cents1(6);
	Cents cents2(8);
	Cents centsSum = cents1 + cents2;
	std::cout << "I have " << centsSum.getCents() << " cents." << std::endl;

	return 0;
}
