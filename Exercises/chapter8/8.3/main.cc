
#include <iostream>

class Point3d{
 int m_x, m_y,m_z;

public:
 void setValues(int x,int y, int z){
 m_x = x;
 m_y= y;
 m_z = z;
}
 void print(){
  std::cout<<'<'<<m_x<<','<< m_y<<','<<m_z<<"> \n";
 }
 bool isEqual(Point3d &d){
  return (m_x == d.m_x && m_y == d.m_y && m_z == d.m_z);
 }
};


main(){

 Point3d point1;
 point1.setValues(1, 2, 3);

 Point3d point2;
 point2.setValues(1, 8, 3);

 std::cout<<point1.isEqual(point2);
  return 0;
}
