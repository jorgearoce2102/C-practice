#include <iostream>

std::string getUserInfo(){
  std::cout<< "Enter your full name"<<std::endl;
  std::string MyName;
  std::getline(std::cin, MyName);

  return MyName;
}

int getUserAge(){
  std::cout<< "Enter your age: ";
  int age{0};
  std::cin>>age;
  return age;

}

float GetYears(std::string MyName, int age){
  float ageNew{static_cast<float>(age)};
  float nameNew{static_cast<float>(MyName.length())};
  return nameNew/ageNew;
}
