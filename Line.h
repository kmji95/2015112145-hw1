#pragma once
#include <GLFW/glfw3.h>
#include "Pixel.h"



class Line : public Pixel
{
public:
	int i0, j0, i1, j1;
	float red, green, blue;
	
public:
	void draw(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue, Pixel pixel);

};