
#include "Buffer.h"
#include <iostream>
#include <cstring>
#include <stdlib.h>        // srand, rand
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds


void Buffer::draw(Pixel pixel)
{
	
	std::fill_n(pixel.pixels, width*height * 3, 1.0f); 
												  

	const int i = rand() % width, j = rand() % height;
	pixel.draw(i, j, 0.0f, 0.0f, 0.0f);

}