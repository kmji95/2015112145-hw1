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
#include "Box.h"


int main(void)
{
	double xpos, ypos;

	GLFWwindow* window;
	Pixel pixel;
	Buffer my_buffer;
	Circle my_circle;
	Line my_line;
	Box my_box;
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

			//square 1
			my_box.draw(50, 750 - 400 * j, 150, 850 - 400 * j, pixel);
			glfwGetCursorPos(window, &xpos, &ypos);
			double f1_1 = (xpos - 100)*(xpos - 100) + (ypos - 105)*(ypos - 105) - 50 * 50;
			double f1_2 = (xpos - 100)*(xpos - 100) + (ypos - 500)*(ypos - 500) - 50 * 50;
			if (f1_1 <= 0.0) {
				my_box.drawChangeBox(50, 750, 150, 850, pixel);
				for (int i = 0; i < 5; i++)
				{
					my_line.draw(70, (778 + i), 130, (818 + i), 1.0f, 0.0f, 0.0f, pixel);
				}
			}
			if (f1_2 <= 0.0)
				my_box.drawChangeBox(50, 350, 150, 450, pixel);
			for (int i = 0; i < 5; i++)
			{
				my_line.draw(70, (778 + i) - 400 * j, 130, (818 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			}


			//circle 2
			my_box.draw(200, 750 - 400 * j, 300, 850 - 400 * j, pixel);
			double f2_1 = (xpos - 250)*(xpos - 250) + (ypos - 105)*(ypos - 105) - 50 * 50;
			if (f2_1 <= 0.0) {
				my_box.drawChangeBox(200, 750, 300, 850, pixel);
				my_circle.draw(250, 800, 25, 20, pixel);
			}
			double f2_2 = (xpos - 250)*(xpos - 250) + (ypos - 500)*(ypos - 500) - 50 * 50;
			if (f2_2 <= 0.0) {
				my_box.drawChangeBox(200, 350, 300, 450, pixel);
			}
			my_circle.draw(250, 800 - 400 * j, 25, 20, pixel);


			//circle 3
			my_box.draw(350, 750 - 400 * j, 450, 850 - 400 * j, pixel);
			double f3_1 = (xpos - 400)*(xpos - 400) + (ypos - 105)*(ypos - 105) - 50 * 50;
			if (f3_1 <= 0.0)
			{
				my_box.drawChangeBox(350, 750, 450, 850, pixel);
				my_line.draw(380, 775, 420, 775, 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(380, 825, 420, 825, 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(380, 775, 380, 825, 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(420, 775, 420, 825, 1.0f, 0.0f, 0.0f, pixel);

			}
			double f3_2 = (xpos - 400)*(xpos - 400) + (ypos - 500)*(ypos - 500) - 50 * 50;
			if (f3_2 <= 0.0)
				my_box.drawChangeBox(350, 350, 450, 450, pixel);

			my_line.draw(380, 775 - 400 * j, 420, 775 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(380, 825 - 400 * j, 420, 825 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(380, 775 - 400 * j, 380, 825 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(420, 775 - 400 * j, 420, 825 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);


			//circle 4
			my_box.draw(500, 750 - 400 * j, 600, 850 - 400 * j, pixel);
			double f4_1 = (xpos - 550)*(xpos - 550) + (ypos - 105)*(ypos - 105) - 50 * 50;
			if (f4_1 <= 0.0) {
				my_box.drawChangeBox(500, 750, 600, 850, pixel);
				my_line.draw(530, 775, 570, 825, 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(530, 825, 570, 775, 1.0f, 0.0f, 0.0f, pixel);

				for (int i = 0; i < 2; i++) {

					my_line.draw(530, (775 + i), 570, (825 + i), 1.0f, 0.0f, 0.0f, pixel);
					my_line.draw(530, (825 + i), 570, (775 + i), 1.0f, 0.0f, 0.0f, pixel);
				}
			}

			double f4_2 = (xpos - 550)*(xpos - 550) + (ypos - 500)*(ypos - 500) - 50 * 50;
			if (f4_2 <= 0.0)
				my_box.drawChangeBox(500, 350, 600, 450, pixel);

			my_line.draw(530, 775 - 400 * j, 570, 825 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(530, 825 - 400 * j, 570, 775 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);

			for (int i = 0; i < 2; i++) {

				my_line.draw(530, (775 + i) - 400 * j, 570, (825 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(530, (825 + i) - 400 * j, 570, (775 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			}


			//circle 5
			my_box.draw(650, 750 - 400 * j, 750, 850 - 400 * j, pixel);
			double f5_1 = (xpos - 700)*(xpos - 700) + (ypos - 105)*(ypos - 105) - 50 * 50;
			if (f5_1 <= 0.0)
				my_box.drawChangeBox(650, 750, 750, 850, pixel);
			my_line.draw(700, 780, 700, 825, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(680, 795, 700, 780, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(700, 780, 720, 795, 1.0f, 0.0f, 0.0f, pixel);

			double f5_2 = (xpos - 700)*(xpos - 700) + (ypos - 500)*(ypos - 500) - 50 * 50;
			if (f5_2 <= 0.0)
				my_box.drawChangeBox(650, 350, 750, 450, pixel);
			my_line.draw(700, 780 - 400 * j, 700, 825 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(680, 795 - 400 * j, 700, 780 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(700, 780 - 400 * j, 720, 795 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);


			//circle 6
			my_box.draw(50, 550 - 400 * j, 150, 650 - 400 * j, pixel);
			double f6_1 = (xpos - 100)*(xpos - 100) + (ypos - 300)*(ypos - 300) - 50 * 50;
			if (f6_1 <= 0.0)
				my_box.drawChangeBox(50, 550, 150, 650, pixel);
			my_line.draw(70, 600, 120, 600, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(100, 620, 120, 600, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(100, 580, 120, 600, 1.0f, 0.0f, 0.0f, pixel);

			double f6_2 = (xpos - 100)*(xpos - 100) + (ypos - 695)*(ypos - 695) - 50 * 50;
			if (f6_2 <= 0.0)
				my_box.drawChangeBox(50, 150, 150, 250, pixel);
			my_line.draw(70, 600 - 400 * j, 120, 600 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(100, 620 - 400 * j, 120, 600 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			my_line.draw(100, 580 - 400 * j, 120, 600 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);


			//circle 7
			my_box.draw(200, 550 - 400 * j, 300, 650 - 400 * j, pixel);
			double f7_1 = (xpos - 250)*(xpos - 250) + (ypos - 300)*(ypos - 300) - 50 * 50;
			if (f7_1 <= 0.0) {
				my_box.drawChangeBox(200, 550, 300, 650, pixel);
				my_line.draw(235, 605, 265, 605, 1.0f, 0.0f, 0.0f, pixel);
				for (int i = 0; i < 2; i++) {
					my_line.draw(220, (575 + i), 250, (630 + i), 1.0f, 0.0f, 0.0f, pixel);
					my_line.draw(250, (630 + i), 280, (575 + i), 1.0f, 0.0f, 0.0f, pixel);
				}
			}
			double f7_2 = (xpos - 250)*(xpos - 250) + (ypos - 695)*(ypos - 695) - 50 * 50;
			if (f7_2 <= 0.0)
				my_box.drawChangeBox(200, 150, 300, 250, pixel);
			my_line.draw(235, 605 - 400 * j, 265, 605 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			for (int i = 0; i < 2; i++) {

				my_line.draw(220, (575 + i) - 400 * j, 250, (630 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(250, (630 + i) - 400 * j, 280, (575 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			}


			//circle 8
			my_box.draw(350, 550 - 400 * j, 450, 650 - 400 * j, pixel);
			double f8_1 = (xpos - 400)*(xpos - 400) + (ypos - 300)*(ypos - 300) - 50 * 50;
			if (f8_1 <= 0.0) {
				my_box.drawChangeBox(350, 550, 450, 650, pixel);
				my_line.draw(400, 570, 400, 630, 1.0f, 0.0f, 0.0f, pixel);
			}

			double f8_2 = (xpos - 400)*(xpos - 400) + (ypos - 695)*(ypos - 695) - 50 * 50;
			if (f8_2 <= 0.0)
				my_box.drawChangeBox(350, 150, 450, 250, pixel);
			my_line.draw(400, 570 - 400 * j, 400, 630 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);


			//circle 9
			my_box.draw(500, 550 - 400 * j, 600, 650 - 400 * j, pixel);
			double f9_1 = (xpos - 550)*(xpos - 550) + (ypos - 300)*(ypos - 300) - 50 * 50;
			if (f9_1 <= 0.0) {
				my_box.drawChangeBox(500, 550, 600, 650, pixel);
				my_line.draw(530, 600, 580, 600, 1.0f, 0.0f, 0.0f, pixel);
				for (int i = 0; i < 2; i++) {

					my_line.draw(530, (600 + i), 540, (620 + i), 1.0f, 0.0f, 0.0f, pixel);
					my_line.draw(530, (600 + i), 540, (580 + i), 1.0f, 0.0f, 0.0f, pixel);
				}
			}

			double f9_2 = (xpos - 550)*(xpos - 550) + (ypos - 695)*(ypos - 695) - 50 * 50;
			if (f9_2 <= 0.0)
				my_box.drawChangeBox(500, 150, 600, 250, pixel);
			my_line.draw(530, 600 - 400 * j, 580, 600 - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			for (int i = 0; i < 2; i++) {
				my_line.draw(530, (600 + i) - 400 * j, 540, (620 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(530, (600 + i) - 400 * j, 540, (580 + i) - 400 * j, 1.0f, 0.0f, 0.0f, pixel);
			}


			//circle 10
			my_box.draw(650, 550 - 400 * j, 750, 650 - 400 * j, pixel);
			double f10_1 = (xpos - 700)*(xpos - 700) + (ypos - 300)*(ypos - 300) - 50 * 50;
			if (f10_1 <= 0.0)
				my_box.drawChangeBox(650, 550, 750, 650, pixel);
			my_line.draw(700, 570, 700, 620, 1.0f, 0.0f, 0.0f, pixel);
			for (int i = 0; i < 2; i++) {
				my_line.draw(680, (600 + i), 700, (620 + i), 1.0f, 0.0f, 0.0f, pixel);
				my_line.draw(700, (620 + i), 720, (600 + i), 1.0f, 0.0f, 0.0f, pixel);
			}

			double f10_2 = (xpos - 700)*(xpos - 700) + (ypos - 695)*(ypos - 695) - 50 * 50;
			if (f10_2 <= 0.0)
				my_box.drawChangeBox(650, 150, 750, 250, pixel);
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

