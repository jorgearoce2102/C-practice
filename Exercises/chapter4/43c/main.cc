

//This program outputs a greeting: "Hello World"

#include <iostream>
#include "getUserInfo.h"
#include <bitset>

int main()
{
    extern int y;
    using namespace std;
    cout<< "The value of y is: "<<y<<endl;
    //Request a number to user
    //std::bitset<8> myArticleFlags;

    //Print number
    unsigned char option_viewed = 0x01;
    unsigned char option_edited = 0x02;
    unsigned char option_favorited = 0x04;
    unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;

    unsigned char myArticleFlags = 0;

    myArticleFlags |= option_favorited;
    myArticleFlags |= option_viewed;

    myArticleFlags &= ~option_favorited;

    cout<< bitset<8> (myArticleFlags)<<endl;

    return 0;

}
