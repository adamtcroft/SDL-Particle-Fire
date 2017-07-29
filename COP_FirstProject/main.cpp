// First SDL test project from caveofprogramming.com

#include <iostream>
#include <math.h>
#include <SDL.h>
#include "Screen.h"

using namespace std;
using namespace caveofprogramming;

int main(int argc, char *argv[])
{
	Screen screen;

	if (screen.init() == false)
	{
		cout << "Error initializing SDL" << endl;
	}

	while (true)
	{
		// Update Particles

		// Draw Particles
		int elapsed = SDL_GetTicks();
		int red = (1 + sin(elapsed * 0.0001)) * 128;
		int green = (1 + sin(elapsed * 0.0002)) * 128;
		int blue = (1 + sin(elapsed * 0.0003)) * 128;


		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++)
		{
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++)
			{
				screen.setPixel(x, y, red, green, blue);
			}
		}

		//Draw the screen
		screen.update();

		// Check for messages/events
		if (screen.processEvents() == false)
		{
			break;
		}
	}

	screen.close();

	return 0;
}