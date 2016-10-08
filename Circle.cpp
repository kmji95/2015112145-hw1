#include "Circle.h"

#include <GLFW/glfw3.h>
#include "math.h"

void Circle::draw(double c1, double c2, int r1, int r2, Pixel pixel)
{
	
	for (int a = 0; a < width; a++)
	{
		for (int b = 0; b < height; b++)
		{

			if (sqrt((c1 - a)*(c1 - a) + (c2 - b)*(c2 - b)) < r1)
				pixel.draw(a, b, 1.0f, 0.0f, 0.0f);
			if (sqrt((c1 - a)*(c1 - a) + (c2 - b)*(c2 - b)) < r2)
				pixel.draw(a, b, 1.0f, 1.0f, 1.0f);
		}

	}



}
void Circle::drawChangeCircle(double c1, double c2, Pixel pixel)
{
	int r = 50;
	for (int a = 0; a < width; a++)
	{
		for (int b = 0; b < height; b++)
		{

			if (sqrt((c1 - a)*(c1 - a) + (c2 - b)*(c2 - b)) < r)
				pixel.draw(a, b, 0.0f, 0.0f, 1.0f);
			if (sqrt((c1 - a)*(c1 - a) + (c2 - b)*(c2 - b)) < 48)
				pixel.draw(a, b, 1.0f, 1.0f, 1.0f);
		}

	}

	
}