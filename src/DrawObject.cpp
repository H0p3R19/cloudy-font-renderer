#include "../include/DrawObject.h"
#include <iostream>
std::vector<Vec2> DrawObject(Vec2 origin_point , int scale , char input , int canvas_width , int canvas_height){
    //Variables
    std::vector<Vec2> result;
    std::vector<Vec2> temp;
    Vec2 cursor;

    
    switch (input)
    {
    case 'A':{

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }
        
        origin_point.e[0] += scale;

        
        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < 2*scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1]- 2*scale - i;
                temp.push_back(cursor);
                cursor.e[1] = origin_point.e[1]- 4*scale - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += 2*scale;

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        break;
    }

    case 'B':{

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += scale;

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < 2*scale; j++)
            {
                //width
                cursor.e[0] = origin_point.e[0] + j;

                //Bottom Line
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);

                //Mid Line
                cursor.e[1] = origin_point.e[1]- 2*scale - i;
                temp.push_back(cursor);

                //Top Line
                cursor.e[1] = origin_point.e[1] - 4*scale - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += 2*scale;

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }
        break;
    }

    case 'C':{

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }
        
        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < 4*scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
                cursor.e[1] = origin_point.e[1]- 4*scale - i;
                temp.push_back(cursor);
            }
        }
        break;
    }

    case 'D':{

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }
        origin_point.e[0] += scale;
        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
                cursor.e[1] = origin_point.e[1]- 4*scale - i;
                temp.push_back(cursor);
            }
        }
        origin_point.e[0] += scale;
        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1]- scale - i;
                temp.push_back(cursor);
                cursor.e[1] = origin_point.e[1]- 3*scale - i;
                temp.push_back(cursor);
            }
        }
        origin_point.e[0] += scale;
        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1]- 2*scale - i;
                temp.push_back(cursor);

            }
        }
        break;
    }
    case 'E':{

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += scale;

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < 3*scale; j++)
            {
                //width
                cursor.e[0] = origin_point.e[0] + j;

                //Bottom Line
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);

                //Mid Line
                cursor.e[1] = origin_point.e[1]- 2*scale - i;
                temp.push_back(cursor);

                //Top Line
                cursor.e[1] = origin_point.e[1] - 4*scale - i;
                temp.push_back(cursor);
            }
        }
        break;
    }
    case 'F':{

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += scale;

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < 3*scale; j++)
            {
                //width
                cursor.e[0] = origin_point.e[0] + j;

                //Mid Line
                cursor.e[1] = origin_point.e[1]- 2*scale - i;
                temp.push_back(cursor);

                //Top Line
                cursor.e[1] = origin_point.e[1] - 4*scale - i;
                temp.push_back(cursor);
            }
        }
        break;
    }
    case 'G':{

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += scale;

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < 2*scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
                cursor.e[1] = origin_point.e[1] - 4*scale - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += 2*scale;

        for (int i = 0; i < 3*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += scale;

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] - scale - j;
                cursor.e[1] = origin_point.e[1] - 2*scale - i;
                temp.push_back(cursor);
            }
        }

        break;
    }

    case 'H':{

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += scale;

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < 2*scale; j++)
            {
                //width
                cursor.e[0] = origin_point.e[0] + j;

                //Mid Line
                cursor.e[1] = origin_point.e[1]- 2*scale - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += 2*scale;

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }
        break;
    }

    case 'I':{

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }
        break;
    }

    case 'J':{

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < 2*scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += 2*scale;

        for (int i = 0; i < 4*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] -= scale;
        origin_point.e[1] -= 4*scale;

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < 3*scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }
        break;
    }

    case 'K':{

        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += scale;
        origin_point.e[1] -= 2*scale;

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += scale;

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - scale - i;
                temp.push_back(cursor);
                cursor.e[1] = origin_point.e[1] + scale - i;
                temp.push_back(cursor);
            }
        }
        origin_point.e[0] += scale;
        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - 2*scale - i;
                temp.push_back(cursor);
                cursor.e[1] = origin_point.e[1] + 2*scale - i;
                temp.push_back(cursor);
            }
        }

        break;
    }

    case 'L':{
    for (int i = 0; i < 5*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[0] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < 3*scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }
    break;
    }

    case 'M':{
    for (int i = 0; i < 4*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
           
            //Height Doesnt Change.
            cursor.e[1] = origin_point.e[1] - i;

            //3 Vertical Lines rendered at once.
            cursor.e[0] = origin_point.e[0] + j; 
            temp.push_back(cursor);
            cursor.e[0] = origin_point.e[0] + 2*scale + j;
            temp.push_back(cursor);
            cursor.e[0] = origin_point.e[0] + 4*scale + j;
            temp.push_back(cursor);
        }

    }

    origin_point.e[1] -= 4*scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < 5*scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    break;
    }

    case 'N':{
    for (int i = 0; i < 5*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[1] = origin_point.e[1] - i;
            cursor.e[0] = origin_point.e[0] + j; 
            temp.push_back(cursor);
        }

    }

    origin_point.e[1] -= 3*scale;
    origin_point.e[0] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[1] += scale;
    origin_point.e[0] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[1] += scale;
    origin_point.e[0] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[1] += scale;
    origin_point.e[0] += scale;

    for (int i = 0; i < 5*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[1] = origin_point.e[1] - i;
            cursor.e[0] = origin_point.e[0] + j; 
            temp.push_back(cursor);
        }

    }
    break;
    }

    case 'O':{
    origin_point.e[1] -= scale;
    for (int i = 0; i < 3*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[1] += scale;
    origin_point.e[0] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < 2*scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
            cursor.e[1] = origin_point.e[1]- 4*scale - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[0] += 2*scale;
    origin_point.e[1] -= scale;

    for (int i = 0; i < 3*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }
    break;
    }

    case 'P':{
    for (int i = 0; i < 5*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[0] += scale;
    origin_point.e[1] -= 2*scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < 2*scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
            cursor.e[1] = origin_point.e[1] - 2*scale - i;
            temp.push_back(cursor);
        }
    }
    origin_point.e[0] += scale;

    for (int i = 0; i < 3*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }
    break;
    }

    case 'Q':{
    origin_point.e[1] -= scale;
    for (int i = 0; i < 3*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[1] += scale;
    origin_point.e[0] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < 2*scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
            cursor.e[1] = origin_point.e[1]- 4*scale - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[0] += 2*scale;
    origin_point.e[1] -= scale;

    for (int i = 0; i < 3*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }
    
    origin_point.e[0] += scale;
    origin_point.e[1] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }
    break;
    }

    case 'R':{
        for (int i = 0; i < 5*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += scale;
        origin_point.e[1] -= 2*scale;

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < 2*scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
                cursor.e[1] = origin_point.e[1] - 2*scale - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] += scale;

        for (int i = 0; i < 3*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[0] -= scale;

        for (int n = 0; n < 2; n++)
        {
            for (int i = 0; i < scale; i++)
            {
                for (int j = 0; j < scale; j++)
                {
                    cursor.e[0] = origin_point.e[0] + j + n*scale;
                    cursor.e[1] = origin_point.e[1] + i + n*scale;
                    temp.push_back(cursor);
                }
            }
        }
        break;
    }

    case 'S':{
        origin_point.e[1] -= 3*scale;
        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[1] += 3*scale;
        origin_point.e[0] += scale;

        for (int i = 0; i < scale; i++)
        {

            for (int j = 0; j < 2*scale; j++)
            {
                //width
                cursor.e[0] = origin_point.e[0] + j;

                //Bottom Line
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);

                //Mid Line
                cursor.e[1] = origin_point.e[1]- 2*scale - i;
                temp.push_back(cursor);

                //Top Line
                cursor.e[1] = origin_point.e[1] - 4*scale - i;
                temp.push_back(cursor);
            }
        }
        
        origin_point.e[0] += 2*scale;
        origin_point.e[1] -= scale;

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }
        break;
    }

    case 'T':{

    origin_point.e[0] += 2*scale;
    
    for (int i = 0; i < 4*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[0] -= 2*scale;
    origin_point.e[1] -= 4*scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < 5*scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }
    break;
    }

    case 'U':{

    origin_point.e[1] -= scale;

    for (int i = 0; i < 4*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[1] += scale;
    origin_point.e[0] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < 3*scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[1] -= scale;
    origin_point.e[0] += 3*scale;

    for (int i = 0; i < 4*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    break;
    }

    case 'V':{

    origin_point.e[1] -= 2*scale;

    for (int i = 0; i < 3*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[1] += scale;
    origin_point.e[0] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[1] += scale;
    origin_point.e[0] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[1] -= scale;
    origin_point.e[0] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }

    origin_point.e[1] -= scale;
    origin_point.e[0] += scale;

    for (int i = 0; i < 3*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }
    break;
    }

    case 'W':{
    origin_point.e[1] -= scale;
    for (int i = 0; i < 4*scale; i++)
    {
        for (int j = 0; j < scale; j++)
        {
           
            //Height Doesnt Change.
            cursor.e[1] = origin_point.e[1] - i;

            //3 Vertical Lines rendered at once.
            cursor.e[0] = origin_point.e[0] + j; 
            temp.push_back(cursor);
            cursor.e[0] = origin_point.e[0] + 2*scale + j;
            temp.push_back(cursor);
            cursor.e[0] = origin_point.e[0] + 4*scale + j;
            temp.push_back(cursor);
        }

    }

    origin_point.e[1] += scale;

    for (int i = 0; i < scale; i++)
    {
        for (int j = 0; j < 5*scale; j++)
        {
            cursor.e[0] = origin_point.e[0] + j;
            cursor.e[1] = origin_point.e[1] - i;
            temp.push_back(cursor);
        }
    }
    break;
    }


    case 'X':{
        for (int n = 0; n < 5; n++)
        {
            for (int i = 0; i < scale; i++)
            {
                for (int j = 0; j < scale; j++)
                {
                    cursor.e[0] = origin_point.e[0] + j + n*scale;
                    cursor.e[1] = origin_point.e[1] - 5*scale + i + n*scale;
                    temp.push_back(cursor);
                    cursor.e[1] = origin_point.e[1] - i - n*scale;
                    temp.push_back(cursor);
                }
            }
        }
        break;
    }

    case 'Y':{

        origin_point.e[1] -= 5*scale;

        for (int n = 0; n < 3; n++)
        {
            for (int i = 0; i < scale; i++)
            {
                for (int j = 0; j < scale; j++)
                {
                    cursor.e[0] = origin_point.e[0] + j + n*scale;
                    cursor.e[1] = origin_point.e[1] + i + n*scale;
                    temp.push_back(cursor);
                }
            }
        }

        origin_point.e[1] += 2*scale;
        origin_point.e[0] += 2*scale;
        for (int i = 0; i < 3*scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] + i;
                temp.push_back(cursor);
            }
        }
        
        origin_point.e[0] += scale;
        for (int n = 0; n < 2; n++)
        {
            for (int i = 0; i < scale; i++)
            {
                for (int j = 0; j < scale; j++)
                {
                    cursor.e[0] = origin_point.e[0] + j + n*scale;
                    cursor.e[1] = origin_point.e[1] - i - n*scale;
                    temp.push_back(cursor);
                }
            }
        }
        break;
    }

    case 'Z':{
        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < 5*scale; j++)
            {
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
                cursor.e[1] = origin_point.e[1] - 4*scale - i;
                temp.push_back(cursor);
            }
        }

        origin_point.e[1] -= scale;
        origin_point.e[0] += scale;

        for (int n = 0; n < 3; n++)
        {
            for (int i = 0; i < scale; i++)
            {
                for (int j = 0; j < scale; j++)
                {
                    cursor.e[0] = origin_point.e[0] + j + n*scale;
                    cursor.e[1] = origin_point.e[1] - i - n*scale;
                    temp.push_back(cursor);
                }
            }
        }

        break;
    }

    case '.':{

        for (int i = 0; i < scale; i++)
        {
            for (int j = 0; j < scale; j++)
            {
                
                cursor.e[0] = origin_point.e[0] + j;
                cursor.e[1] = origin_point.e[1] - i;
                temp.push_back(cursor);
            }
        }
        break;
    }

    default:
        break;
    }

    for (Vec2 c : temp)
    {
        std::clog << c.e[0] << "," << c.e[1] << "\n";
        if (c.e[0] >= canvas_width || c.e[1] >= canvas_height || c.e[0] < 0 || c.e[1] < 0)
        {
            
            std::clog << "OUT OF BOUNDS AT " << c.e[0] << "," << c.e[1] << "\n";
            continue;
        }
        result.push_back(c); 
    }
    return result;
}