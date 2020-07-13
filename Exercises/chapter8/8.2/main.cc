
#include <iostream>



//int add(int x, int y);

class IntPair{
public:
 int m_p1{2};
 int m_p2{2};

 void print(){
  std::cout<<"Pair("<<m_p1<<","<<m_p2<<") \n";
 }

 void set(int x, int y){
   m_p1 = x;
   m_p2 = y;
 }
};

main(){

 IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

 return 0;
}
