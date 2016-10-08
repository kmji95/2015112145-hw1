#include "Line.h"
#include <iostream>




void Line::draw(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue, Pixel pixel)
{
	if (i1 == i0)
	{
		for (int j = j0; j < j1; j++)
			pixel.draw(i0, j, red, green, blue);
		return;
	}
	for (int i = i0; i <= i1; i++)
	{
		const int j = (j1 - j0)*(i - i0) / (i1 - i0) + j0;

		pixel.draw(i, j, red, green, blue);
	}
}