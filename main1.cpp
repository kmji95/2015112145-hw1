#include <GLFW/glfw3.h>
#include <cstring>
#include <stdlib.h>        // srand, rand
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "math.h"
#include "Pixel.h"
#include "Buffer.h"
#include "Circle.h"
#include "Line.h"



int main(void)
{
	//double xpos, ypos;

	GLFWwindow* window;
	Pixel pixel;
	Buffer my_buffer;
	Circle my_circle;
	Line my_line;
	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(pixel.width, pixel.height, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);
	glClearColor(1, 1, 1, 1); // while background

							  /* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		//glClear(GL_COLOR_BUFFER_BIT);
		my_buffer.draw(pixel);
		for (int j = 0; j < 2; j++) {

			//pattern 1
			for (int i = 0; i < 5; i++)
			{
				my_line.draw(70, (778 + i)- 400 * j, 130, (818 + i) -400 * j, 1.0f, 0.0f, 0.0f, pixel);
			}

			//pattern 2
			my_circle.draw(250, 800 - 400 * j, 25, 20, pixel);

			//pattern 3
			my_line.draw(380, 775 - 400 * j, 420, 775 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(380, 825 - 400 * j, 420, 825 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(380, 775 - 400 * j, 380, 825 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(420, 775 - 400 * j, 420, 825 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);

			//pattern 4
			my_line.draw(530, 775 - 400 * j, 570, 825 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(530, 825 - 400 * j, 570, 775 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);

			for (int i = 0; i < 2; i++) {

				my_line.draw(530, (775 + i)-400*j, 570, (825 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(530, (825 + i) - 400 * j, 570, (775 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			}

			//pattern 5
			my_line.draw(700, 780 - 400 * j, 700, 825 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(680, 795 - 400 * j, 700, 780 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(700, 780 - 400 * j, 720, 795 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);

			//pattern 6
			my_line.draw(70, 600 - 400 * j, 120, 600 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(100, 620 - 400 * j, 120, 600 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(100, 580 - 400 * j, 120, 600 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);

			//pattern 7
			my_line.draw(235, 605 - 400 * j, 265, 605 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			for (int i = 0; i < 2; i++) {

				my_line.draw(220, (575 + i)-400*j, 250, (630 + i)-400*j, 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(250, (630 + i) - 400 * j, 280, (575 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			}

			//pattern 8
			my_line.draw(400, 570 - 400 * j, 400, 630 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);


			//pattern 9
			my_line.draw(530, 600 - 400 * j, 580, 600 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			for (int i = 0; i < 2; i++) {

				my_line.draw(530, (600 + i) - 400 * j, 540, (620 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(530, (600 + i) - 400 * j, 540, (580 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			}

			//pattern 10
			my_line.draw(700, 570 - 400 * j, 700, 620 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			for (int i = 0; i < 2; i++) {
				my_line.draw(680, (600 + i) - 400 * j, 700, (620 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(700, (620 + i) - 400 * j, 720, (600 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			}


		}
		glDrawPixels(pixel.width, pixel.height, GL_RGB, GL_FLOAT, pixel.pixels);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();

		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}

	glfwTerminate();

	delete[] pixel.pixels; // or you may reuse pixels array 

	return 0;
}

