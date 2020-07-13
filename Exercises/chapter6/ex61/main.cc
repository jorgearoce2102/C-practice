
#include <iostream>
#include <iterator>

int add(int x, int y);


enum studentsList{
  JORGE,
  ESTEBAN,
  MARCO,
  ADRIAN,
  PUROS,
  MAX_STUDENTS // 5 students
};

main(){

 int array[MAX_STUDENTS]{ 84, 92, 76, 81, 56};

 double sum{0.0};
 int length{sizeof(array)/sizeof(array[0])};
 for(int index=0; index < length; index++)
    sum+=array[index];
 std::cout<<sum;
 std::cout<<"the average is: "<< static_cast<double>(sum)/static_cast<double>(length)<<"\n";

  return 0;
}
