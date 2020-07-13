
#include <iostream>



int add(int x, int y);

main(){
int (*fnPtr)(int,int) = add;




 std::cout<<fnPtr(3,5)<<std::endl;

  return 0;
}
