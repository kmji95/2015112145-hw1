
#include "Box.h"

#include <GLFW/glfw3.h>

void Box::draw(double x0, double y0, double x1, double y1, Pixel pixel)
{
	Line::draw(x0, y0, x1, y0, 0.0f, 0.0f, 1.0f, pixel);
	Line::draw(x0, y1, x1, y1, 0.0f, 0.0f, 1.0f, pixel);
	Line::draw(x0, y0, x0, y1, 0.0f, 0.0f, 1.0f, pixel);
	Line::draw(x1, y0, x1, y1, 0.0f, 0.0f, 1.0f, pixel);
}

void Box::drawChangeBox(double x0, double y0, double x1, double y1, Pixel pixel)
{
	Line::draw(x0, y0, x1, y0, 0.0f, 1.0f, 0.0f, pixel);
	Line::draw(x0, y1, x1, y1, 0.0f, 1.0f, 0.0f, pixel);
	Line::draw(x0, y0, x0, y1, 0.0f, 1.0f, 0.0f, pixel);
	Line::draw(x1, y0, x1, y1, 0.0f, 1.0f, 0.0f, pixel);
}