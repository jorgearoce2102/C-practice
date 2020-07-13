
#include <iostream>
#include "getUserInfo.h"
#include <string>

int main()
{
  struct Employee
  {
    short id;
    int age;
    double wage;
  };

  Employee Jorge{211,26,1000};


  std::cout<<"Jorge's age is: "<<Jorge.wage<<"\n";
  std::cout<<"size is: "<<sizeof(Jorge)<<"\n";

  return 0;

}
