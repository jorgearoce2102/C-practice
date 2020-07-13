
#include <iostream>
#include <string>


// int add(int x, int y);

class Ball
{
private:
 std::string m_color{"black"};
 double m_radious{10.0};

public:
// //Commented out for question  1b)
 // Ball(const std::string &color)
 //  {
 //    m_color = color;
 //    m_radious = 10.5;
 //  }
 Ball(double radious){
    m_radious = radious;
  }
  Ball(const std::string color = "black", double radious = 10.0)
   {
     m_color = color;
     m_radious = radious;
   }

  void print(){
   std::cout<<"color: " << m_color << ", radious: " <<m_radious<< "\n";
  }

};
main(){

 Ball def;
def.print();

Ball blue("blue");
blue.print();

Ball twenty(20.0);
twenty.print();

Ball blueTwenty("blue", 20.0);
blueTwenty.print();

  return 0;
}
