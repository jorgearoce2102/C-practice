#include "Something.h"
#include <iostream>

Something::Something(){std::cout<<m_int++;}

int Something::m_int = 0;
