
#pragma once 
#include <iostream>

class Color
{

public:

    //Default color is black.
    int c[3];
    Color(){
        c[0] = 0;
        c[1] = 0;
        c[2] = 0;
    }

    Color(int r , int g , int b){
        c[0] = r;
        c[1] = g;
        c[2] = b;
    }

};

inline void PrintColor(std::ostream& out , const Color& color){
    out << color.c[0] << ' ' << color.c[1] << ' ' << color.c[2] << '\n';
}

