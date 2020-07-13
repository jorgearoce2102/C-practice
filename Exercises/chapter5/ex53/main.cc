
#include <iostream>
#include "include.h"


struct structInfo{
  int x,y;
  char c;
};

extern structInfo getInfo()
{

  structInfo info;
  std::cout<<"enter a number: ";
  std::cin>>info.x;
  std::cout<<"enter another number: ";
  std::cin>>info.y;
  std::cout<<"What operation would you like to perform: ";
  std::cin>>info.c;
  return info;
}


main(){
  //Get values from user
  structInfo data{getInfo()};

  //Perform switch operation

  switch(data.c){
    case static_cast<int>('*'):
      std::cout<<data.x * data.y;
      break;
    case static_cast<int>('+'):
      std::cout<<data.x + data.y;
      break;
    case static_cast<int>('-'):
      std::cout<<data.x - data.y;
      break;
    case static_cast<int>('/'):
      if(data.y==0)
      {
        std::cout<<"operation not valid";
        break;
      }
      else std::cout<<data.x + data.y;
      break;
  }

  return 0;
}
