#include "../include/input.h"
#include <iostream>

//std::clog << " \n"; 

enum class ColorsPreset{
    BLACK = 1,
    RED,
    GREEN,
    BLUE,
    WHITE,
    YELLOW
};


bool ValidateInput(const std::string& input){
    if (input.empty()){std::clog << "ERROR: INPUT IS EMPTY \n"; return false;}
    if (input.length() > 50){std::clog << "ERROR: INPUT IS TOO LONG \n";return false;}
    for (char c: input)
    {
        if (static_cast<unsigned int>(c) < 32 || static_cast<unsigned int>(c) > 126)
        {
            std::clog << "ERROR: ILLEGAL CHARACTER (" << c << ")\n"; 
            return false;
        }
    }
    return true;
}

Color MenuFontColor(const std::string& input){

    Color result;
    ColorsPreset choice = static_cast<ColorsPreset>(input[0] - '0');
    int r,g,b;


    switch (choice)
    {
    case ColorsPreset::BLACK: 
        r=0;
        g=0;
        b=0;
        break;

    case ColorsPreset::RED:
        r = 255;
        g = 0;
        b = 0;
        break;

    case ColorsPreset::GREEN:
        r = 0;
        g = 255;
        b = 0;
        break;

    case ColorsPreset::BLUE:
        r = 0;
        g = 0;
        b = 255;
        break;

    case ColorsPreset::WHITE:
        r = 255;
        g = 255;
        b = 255;
        break;

    case ColorsPreset::YELLOW:
        r = 255;
        g = 255;
        b = 0;
        break;

    default:
        std::clog << "ERROR: CHOICE NOT VALID , ASSUMING BLACK... \n"; 
        r=0;
        g=0;
        b=0;
        break;
    }

    result.c[0] = r;
    result.c[1] = g;
    result.c[2] = b;

    return result;
}
