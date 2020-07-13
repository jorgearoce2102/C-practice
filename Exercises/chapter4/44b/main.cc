
#include <iostream>
#include "getUserInfo.h"
#include <string>

int main()
{
    //Get user information name and age
    std::string MyName{getUserInfo()};
    int age{getUserAge()};

    //Calculate
    float years{GetYears(MyName, age)};

    //prompt result
    std::cout<<"You've lived "<<years<<" for each letter in your name"<<std::endl;

    return 0;

}
