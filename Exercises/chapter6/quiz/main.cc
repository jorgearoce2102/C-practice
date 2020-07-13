
#include <iostream>
#include "header.h"
#include <string>



void captureInfo(Students *array, int &numberOfStudents){
  for(int i = 0; i<numberOfStudents; i++){
    std::cout<<"enter name of student #"<< i+1<<": \n";
    std::cin>>array[i].name;
    std::cout<<"enter grade of "+ array[i].name + ": \n";
    std::cin>>array[i].grade;
  }
}


void sortList(Students *array, int &numberOfStudents){
  for(int i=0; i<numberOfStudents; i++){
    if(numberOfStudents==1) break
    else
    {
      
    }
  }
}


main(){
  //Ask how many Students
  std::cout<<"how many students will you register? \n";
  int numberOfStudents;
  std::cin>>numberOfStudents;

  //Create dinamic array
  Students *array = new Students[numberOfStudents];

  //capture name and grade
   captureInfo(array, numberOfStudents);

  //sort list by grades
    sortList(array,numberOfStudents);

  //print list


  delete[] array;
}
