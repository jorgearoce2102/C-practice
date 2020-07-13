#include <iostream>
#include "extra.h"

int main()
{
    int value{readNumber()};

    std::cout << "The value given is prime?:" <<static_cast<char>(isPrime(value))<<"\n";
    return 0;
}
