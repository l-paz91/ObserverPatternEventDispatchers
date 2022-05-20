// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <conio.h>
#include <iostream>

#include "Keyboard.h"
#include "Event.h"

// -----------------------------------------------------------------------------

void Keyboard::keyPressed()
{
	std::cout << "waiting...\n";
	char ch = _getch();
	switch (ch)
	{
	case 'F': case 'f':
		mEventDispatcher->fireEvent(Event::eFKeyPressed);
		break;
	case 'G': case 'g':
		mEventDispatcher->fireEvent(Event::eGKeyPressed);
		break;
	case 'H': case 'h':
		mEventDispatcher->fireEvent(Event::eHKeyPressed);
		break;
	default:
		std::cout << "nothing happened....." << std::endl;
		break;
	}
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
