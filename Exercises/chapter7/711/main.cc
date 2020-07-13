
#include <iostream>
#include "string"



int factorial(const int &x){
 if (x>1)
  return x*factorial(x-1);
 else
  return x;
}

int sumDigits(std::string &number){
 // If the size of the number is 1 then return it, no further sum
 if (number.size()==1)
  return std::stoi(number);
 else
 {
  //Save the last digit into a variable
  std::string x{number[number.size()-1]};

  //Erase the last digit from "number"
  number.pop_back();

  //return the sum of the digits left and the one poped back
  return sumDigits(number)+std::stoi(x);
  }
}

void question2(){
 //This function answer question 2 of the quiz, The user is
 //asked to introduce a number and then its digits are all sumed

 //Get number from user
 std::cout<<"Introduce the number: ";
 std::string number;
 std::cin >> number;

 //Sum and print digits
 std::cout<<sumDigits(number)<<'\n';

}


int add(int x, int y);

main(){
//*********Quiz question 1*******************
// std::cout<<factorial(7)<<std::endl;

//*********Quiz question 2*******************
//question2();
  return 0;
}
