
#include <iostream>
#include <cassert>

// #define NDEBUG

int add(int x, int y);

main(){
 std::cout<<"Introduce a number: ";
 int x{0};
 std::cin>>x;

 assert((x>=0 && x<9)&& "The x is not correct dummy!");

 std::cout<<"The number is correct";


  return 0;
}
