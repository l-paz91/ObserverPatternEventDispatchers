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

	Button button(&mainDispatcher);

	SpinningCube spinningCube(&mainDispatcher);
	ColourChangingCube colourChangingCube(&mainDispatcher);
	FireCube fireCube(&mainDispatcher);

	while (true)
	{
		button.buttonPressed();
	}

	std::cout << "\nPress any key to continue...";
	_getch();
	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
