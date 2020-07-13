#include <iostream>


int readNumber(){
  int x;
  std::cout<<"please introuduce a value\n";
  std::cin>>x;
  return x;
}

int sumNumbers(int val1, int val2){
  return val2 + val1;

}
void writeAnswer(int sum){
  std::cout<<"the answer to this sum is"
    ": "<<sum<<'\n';

}
