#include <iostream>
#include "../include/input.h"
#include "../include/PixelData.h"
#include <fstream>
#include <algorithm> 
// This Project was made by H0p3R19 


int main(){
    int image_height = 1000;
    int image_width = 1000; //theese two are self explanitory.
    int scale;
    std::ofstream out("output.ppm");
    std::string input;
    Color font_color;
    Color background_color;


    std::cout << "Please Enter a text" << std::endl;
    do
    {
        std::getline(std::cin , input); 
    } while (!ValidateInput(input));
    
    std::cout << "Please Enter Font Color: \n 1.Black \n 2.Red \n 3.Green \n 4.Blue \n 5.White \n 6.Yellow \n";
    std::string font_color_input;
    std::cin >> font_color_input;
    font_color = MenuFontColor(font_color_input);

    std::cin.ignore(); 
    std::cout << "Please Enter Background Color: \n 1.Black \n 2.Red \n 3.Green \n 4.Blue \n 5.White \n 6.Yellow \n";
    std::string background_color_input;
    std::cin >> background_color_input;
    background_color = MenuFontColor(background_color_input);
    std::cin.ignore(); 

    std::cout << "Please Enter Font Size" << std::endl;
    std::cin >> scale;

    //this is Necessary for creating a ppm image
    out << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    Vec2 current_position;
    std::vector<Vec2> colored_pixels = FindColoredPixels(input , scale , image_width , image_height);

    //Two nested for loops. one with 'J' is the y coordinate, other is the x coordinate.
    //when running , the image will start being generated from the upper left to bottom right.
    for (int j = 0; j < image_height; j++)
    {
        for (int i = 0; i < image_width; i++)
        {
            current_position.e[0] = i; // Set x coordinate
            current_position.e[1] = j; // Set y coordinate
            auto it = std::find(colored_pixels.begin(), colored_pixels.end(), current_position);

            if (it != colored_pixels.end()) {
                PrintColor(out , font_color);
            } else {
                PrintColor(out , background_color);
            }
            
        }
        
    }
    std::clog << "Done! \n ";
    std::cin.ignore(); 
    std::cin.get();

    return 0;
}