#pragma once
#include "Pixel.h"
#include <GLFW/glfw3.h>

class Buffer : public Pixel
{
public:
	//Buffer();
	void draw(Pixel pixel);
};
