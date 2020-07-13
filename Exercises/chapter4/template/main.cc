#include <iostream>
#include "extra.h"

int main(){
  //declare and read values from user
  int val1{readNumber()};
  int val2{readNumber()};

  //perform sum
  int sum{sumNumbers(val1, val2)} ;

  //output sum
  writeAnswer(sum);

  return 0;
}
