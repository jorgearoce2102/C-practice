
#include <iostream>
#include "getUserInfo.h"
#include <string>

enum class monsterType{
  UNDEFINED,
  OGRE,
  DRAGON,
  ORC,
  GIANT_SPYDER,
  SLIME,
};


struct Monster
{
  typedef std::string monsterName;
  monsterType type;
  int health;
};

int main()
{


  Monster Jorge={"Jorge",monsterType::OGRE,10};
  std::cout<<Jorge.type <<"\n";
  return 0;

}
