#pragma once

#include <GLFW/glfw3.h>

class Pixel {
public:
	 const int width = 800;
     const int height = 900;
     float* pixels = new float[width*height * 3];

	 

		virtual void draw(const int& i, const int& j, const float& red, const float& green, const float& blue) {
		pixels[(i + width* j) * 3 + 0] = red;
		pixels[(i + width* j) * 3 + 1] = green;
		pixels[(i + width* j) * 3 + 2] = blue;
	}
};

