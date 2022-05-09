// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <conio.h>
#include <iostream>
#include <Windows.h>

#include "Button.h"
#include "Cubes.h"

// -----------------------------------------------------------------------------

int main()
{
	Button button;

	SpinningCube spinningCube(&button);
	ColourChangingCube colourChangingCube(&button);
	FireCube fireCube(&button);

	while (true)
	{
		std::cout << "waiting...\n";
		char ch = _getch();
		if (ch == 'f')
		{
			button.buttonPressed();
		}
	}

	std::cout << "\nPress any key to continue...";
	_getch();
	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
