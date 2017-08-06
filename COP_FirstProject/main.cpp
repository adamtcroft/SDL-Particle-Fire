// First SDL test project from caveofprogramming.com

#include <iostream>
#include <math.h>
#include <SDL.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Swarm.h"

using namespace std;
using namespace caveofprogramming;

int main(int argc, char *argv[])
{
	srand(time(NULL));

	Screen screen;

	if (screen.init() == false)
	{
		cout << "Error initializing SDL" << endl;
	}

	Swarm swarm;

	while (true)
	{
		// Update Particles

		// Draw Particles

		int elapsed = SDL_GetTicks();

		screen.clear();
		swarm.update(elapsed);

		int red = (1 + sin(elapsed * 0.0001)) * 128;
		int green = (1 + sin(elapsed * 0.0002)) * 128;
		int blue = (1 + sin(elapsed * 0.0003)) * 128;

		const Particle * const pParticles = swarm.getParticles();

		for (int i = 0; i < Swarm::NPARTICLES; i++) 
		{
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = (particle.m_y * Screen::SCREEN_WIDTH / 2) + Screen::SCREEN_HEIGHT/2;

			screen.setPixel(x, y, red, green, blue);
		}

		/*
		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++)
		{
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++)
			{
				screen.setPixel(x, y, red, green, blue);
			}
		}
		*/

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