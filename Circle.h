#pragma once
#include <GLFW/glfw3.h>
#include "Pixel.h"



class Circle : public Pixel
{
public:
	int r1, r2;
	double c1, c2;
	//Circle();
public:
	
	void draw(double c1, double c2, int r1, int r2, Pixel pixel);
	void drawChangeCircle(double c1, double c2, Pixel pixel);
};