// First SDL test project from caveofprogramming.com

#include <iostream>
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

	bool quit = false;
	

	while (true)
	{
		// Update Particles
		// Draw Particles
		// Check for messages/events
		if (!screen.processEvents())
		{
			break;
		}
	}

	screen.close();

	return 0;
}