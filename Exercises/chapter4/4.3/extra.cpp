#include <iostream>


int readNumber(){
  int x;
  std::cout<<"please introuduce a value\n";
  std::cin>>x;
  return x;
}

int isPrime(int value){

  if(value%1 == 0 && value%value == 0)
    return true;
  else
    return false;
}

void writeAnswer(int sum){
  std::cout << std::boolalpha;
  std::cout<<"the answer to this sum is"
    ": "<<'\n';

}
