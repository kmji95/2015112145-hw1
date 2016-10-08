#pragma once
#include <GLFW/glfw3.h>
#include "Line.h"

class Box : public Line
{
public:
	void draw(double x0, double y0, double x1, double y1, Pixel pixel);
	void drawChangeBox(double x0, double y0, double x1, double y1, Pixel pixel);
}; 
