#include <iostream>

int getUserInfo(){
  std::cout<< "introduce an integer number"<<std::endl;
  int x{0};
  std::cin>>x;

  return x;
}

bool ifeven(int x){
  if(x%2==0){return true;}
  return false;
}

int y(2);
