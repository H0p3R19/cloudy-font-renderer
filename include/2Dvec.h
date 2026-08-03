#pragma once

class Vec2
{
public:
    int e[2];
    Vec2(){
        e[0] = 0;
        e[1] = 0;
    }
    Vec2(int x , int y){
        e[0] = x;
        e[1] = y;
    }

    int operator[](int i) const {return e[i];}
    int& operator[](int i) {return e[i];}

    bool operator==(const Vec2& other) const {
        return e[0] == other.e[0] && e[1] == other.e[1];
    }
};

