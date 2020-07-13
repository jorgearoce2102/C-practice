#pragma once

enum class monsterType{
  UNDEFINED,
  OGRE,
  DRAGON,
  ORC,
  GIANT_SPYDER,
  SLIME
};


struct Monster
{
  typedef std::string monsterName;
  monsterType type;
  int health;
};
