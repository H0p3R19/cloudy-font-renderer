#include "../include/PixelData.h"
#include "../include/DrawObject.h"

std::vector<Vec2> FindColoredPixels(std::string& input , int scale , int canvas_width , int canvas_height){

    int center_x = canvas_width/2;
    int center_y = canvas_height/2;
    int text_width = 0;
    int letterAmount = input.length();
    int padding = scale;
    std::vector<Vec2> result;
    std::vector<int> letter_width_list;
    std::vector<Vec2> temp;
    Vec2 current_letter_origin;
    
    //This is for debugging

    /*Vec2 DebugLines;
    for (int i = 0; i < canvas_height; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            DebugLines.e[0] = center_x;
            DebugLines.e[1] = i;
            temp.push_back(DebugLines);
        }
    }
    
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < canvas_width; j++)
        {
            DebugLines.e[0] = j;
            DebugLines.e[1] = center_y;
            temp.push_back(DebugLines);
        }
    }

    for (Vec2 c : temp)
    {
        result.push_back(c);
    }

    temp.clear();*/

    //The first For loop computes the width of every letter and puts it in a vector . This is done so I can accurately set the first letter origin for a justified text.
    for (char c : input)
    {
        switch (c)
        {
        case 'A':
            letter_width_list.push_back(4*scale);
            break;
        case 'B':
            letter_width_list.push_back(4*scale);
            break;
        case 'C':
            letter_width_list.push_back(4*scale);
            break;
        case 'D':
            letter_width_list.push_back(4*scale);
            break;
        case 'E':
            letter_width_list.push_back(4*scale);
            break;
        case 'F':
            letter_width_list.push_back(4*scale);
            break;
        case 'G':
            letter_width_list.push_back(4*scale);
            break;
        case 'H':
            letter_width_list.push_back(4*scale);
            break;
        case 'I':
            letter_width_list.push_back(1*scale);
            break;
        case 'J':
            letter_width_list.push_back(4*scale);
            break;
        case 'K':
            letter_width_list.push_back(4*scale);
            break;
        case 'L':
            letter_width_list.push_back(4*scale);
            break;
        case 'M':
            letter_width_list.push_back(5*scale);
            break;
        case 'N':
            letter_width_list.push_back(5*scale);
            break;
        case 'O':
            letter_width_list.push_back(4*scale);
            break;
        case 'P':
            letter_width_list.push_back(3*scale);
            break;
        case 'Q':
            letter_width_list.push_back(5*scale);
            break;
        case 'R':
            letter_width_list.push_back(3*scale);
            break;
        case 'S':
            letter_width_list.push_back(4*scale);
            break;
        case 'T':
            letter_width_list.push_back(5*scale);
            break;
        case 'U':
            letter_width_list.push_back(5*scale);
            break;
        case 'V':
            letter_width_list.push_back(5*scale);
            break;
        case 'W':
            letter_width_list.push_back(5*scale);
            break;
        case 'X':
            letter_width_list.push_back(5*scale);
            break;
        case 'Y':
            letter_width_list.push_back(5*scale);
            break;
        case 'Z':
            letter_width_list.push_back(5*scale);
            break;
        case '.':
            letter_width_list.push_back(scale);
            break;
        case ' ':
            letter_width_list.push_back(1*scale);
        default:
            break;
        }
    }

    //compute text width

    for (int i : letter_width_list)
    {
        text_width += i;
    }

    //Add padding later

    text_width += (letterAmount-1)*padding;
    
    //Compute the first letter's origin
    current_letter_origin.e[0] = center_x;
    current_letter_origin.e[0] -= text_width/2;
    current_letter_origin.e[1] = center_y ;

    for (int i = 0; i < letterAmount ; i++)
    {
        switch (input[i])
        {
        case 'A':
            
            temp = DrawObject(current_letter_origin , scale , 'A' , canvas_width , canvas_width);
            break;
        case 'B':
            temp = DrawObject(current_letter_origin , scale , 'B', canvas_width , canvas_width);
            break;
        case 'C':
            temp = DrawObject(current_letter_origin , scale , 'C', canvas_width , canvas_width);
            break;
        case 'D':
            temp = DrawObject(current_letter_origin , scale , 'D', canvas_width , canvas_width);
            break;
        case 'E':
            temp = DrawObject(current_letter_origin , scale , 'E', canvas_width , canvas_width);
            break;
        case 'F':
            temp = DrawObject(current_letter_origin , scale , 'F', canvas_width , canvas_width);
            break;
        case 'G':
            temp = DrawObject(current_letter_origin , scale , 'G', canvas_width , canvas_width);
            break;
        case 'H':
            temp = DrawObject(current_letter_origin , scale , 'H', canvas_width , canvas_width);
            break;
        case 'I':
            temp = DrawObject(current_letter_origin , scale , 'I', canvas_width , canvas_width);
            break;
        case 'J':
            temp = DrawObject(current_letter_origin , scale , 'J', canvas_width , canvas_width);
            break;
        case 'K':
            temp = DrawObject(current_letter_origin , scale , 'K', canvas_width , canvas_width);
            break;
        case 'L':
            temp = DrawObject(current_letter_origin , scale , 'L', canvas_width , canvas_width);
            break;
        case 'M':
            temp = DrawObject(current_letter_origin , scale , 'M', canvas_width , canvas_width);
            break;
        case 'N':
            temp = DrawObject(current_letter_origin , scale , 'N', canvas_width , canvas_width);
            break;
        case 'O':
            temp = DrawObject(current_letter_origin , scale , 'O', canvas_width , canvas_width);
            break;
        case 'P':
            temp = DrawObject(current_letter_origin , scale , 'P', canvas_width , canvas_width);
            break;
        case 'Q':
            temp = DrawObject(current_letter_origin , scale , 'Q', canvas_width , canvas_width);
            break;
        case 'R':
            temp = DrawObject(current_letter_origin , scale , 'R', canvas_width , canvas_width);
            break;
        case 'S':
            temp = DrawObject(current_letter_origin , scale , 'S', canvas_width , canvas_width);
            break;
        case 'T':
            temp = DrawObject(current_letter_origin , scale , 'T', canvas_width , canvas_width);
            break;
        case 'U':
            temp = DrawObject(current_letter_origin , scale , 'U', canvas_width , canvas_width);
            break;
        case 'V':
            temp = DrawObject(current_letter_origin , scale , 'V', canvas_width , canvas_width);
            break;
        case 'W':
            temp = DrawObject(current_letter_origin , scale , 'W', canvas_width , canvas_width);
            break;
        case 'X':
            temp = DrawObject(current_letter_origin , scale , 'X', canvas_width , canvas_width);
            break;
        case 'Y':
            temp = DrawObject(current_letter_origin , scale , 'Y', canvas_width , canvas_width);
            break;
        case 'Z':
            temp = DrawObject(current_letter_origin , scale , 'Z', canvas_width , canvas_width);
            break;
        case '.':
            temp = DrawObject(current_letter_origin , scale , '.', canvas_width , canvas_width);
            break;
        default:
            break;
        }

        current_letter_origin.e[0] += letter_width_list[i] + padding;
        for (Vec2 c : temp)
        {
            result.push_back(c);
        }
        
    }
    return result;
}