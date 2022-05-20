// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <conio.h>
#include <iostream>
#include <Windows.h>

#include "Button.h"
#include "Cubes.h"
#include "EventDispatcher.h"

// -----------------------------------------------------------------------------

int main()
{
	EventDispatcher mainDispatcher;

	Keyboard keyboard(&mainDispatcher);

	SpinningCube spinningCube(&mainDispatcher);
	ColourChangingCube colourChangingCube(&mainDispatcher);
	FireCube fireCube(&mainDispatcher);

	while (true)
	{
		keyboard.keyPressed();

	}

	std::cout << "\nPress any key to continue...";
	_getch();
	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
