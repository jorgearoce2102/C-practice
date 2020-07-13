
#include <iostream>



int add(int x, int y);

main(){

  std::cout<<"enter a number: \n";
  int x;
  std::cin>>x;

  if(x>10)
    std::cout<<"The number is greater than 10. \n";
  else
    std::cout<<"The number is smaller than 10. \n";

  return 0;
}
