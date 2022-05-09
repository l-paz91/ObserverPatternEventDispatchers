// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <iostream>

#include "Button.h"
#include "Cubes.h"

// -----------------------------------------------------------------------------

SpinningCube::SpinningCube(Button* pButton)
	: mButton(pButton)
{
	if (mButton)
	{
		mButton->registerObserver(this);
	}
	else
	{
		std::cout << "The button is not valid. Cannot register with it for notifications" << std::endl;
	}
}

// -----------------------------------------------------------------------------

void SpinningCube::displayMessage()
{
	std::cout << "I'm spinning around, move outta my way" << std::endl;
}

// -----------------------------------------------------------------------------

ColourChangingCube::ColourChangingCube(Button* pButton)
	: mButton(pButton)
{
	if (mButton)
	{
		mButton->registerObserver(this);
	}
	else
	{
		std::cout << "The button is not valid. Cannot register with it for notifications" << std::endl;
	}
}
// -----------------------------------------------------------------------------

void ColourChangingCube::displayMessage()
{
	std::cout << "<<Changing colour>>" << std::endl;
	mButton->removeObserver(this);
}

FireCube::FireCube(Button* pButton)
	: mButton(pButton)
{
	if (mButton)
	{
		mButton->registerObserver(this);
	}
	else
	{
		std::cout << "The button is not valid. Cannot register with it for notifications" << std::endl;
	}
}

// -----------------------------------------------------------------------------

void FireCube::displayMessage()
{
	std::cout << "THE CUBE, THE CUBE, THE CUBE IS ON FIRE. IF YOU WANNA PARTY THEN RAISE YO HANDS HIGHER" << std::endl;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
