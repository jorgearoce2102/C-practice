
#include <iostream>
#include <string>


int add(int x, int y);

main(){

  //Declare array
  std::string array[]={"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};


  //Ask user for name
  std::cout<<"Enter a name: "<<"\n";
  std::string name{"0"};
  std::cin >> name;


  //Iterate all over the array
  for(auto &ref : array){
    //Print result
    if(name==ref) std::cout<< name<<" was found \n";
    
  }


  return 0;
}
