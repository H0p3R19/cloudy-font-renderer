#pragma once

#include "color.h"
#include "2Dvec.h"
#include <vector>

std::vector<Vec2> FindColoredPixels(std::string& input , int scale , int canvas_width , int canvas_height);