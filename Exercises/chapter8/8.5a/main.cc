
#include <iostream>
#include <cstdint>

typedef std::uint_fast8_t unit;
// typedef std::cout print;

class RGBA{
private:
 const unit m_red;
 const unit m_green;
 const unit m_blue;
 const unit m_alpha;

public:
   RGBA(const unit red=0, const unit green=0, const unit blue=0, const unit alpha=255)
   : m_red{red}, m_green{green}, m_blue{blue}, m_alpha{alpha}
   {}
   void print(){
    std::cout<<"r="<<static_cast<int>(m_red)<<" g="<<static_cast<int>(m_green)<<
     " b="<<static_cast<int>(m_blue)<<" alpha="<<static_cast<int>(m_alpha)<<"\n";
   }
  };
main(){

 RGBA color(0,127,127);
 color.print();


  return 0;
}
