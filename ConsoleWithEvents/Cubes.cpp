// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <iostream>

#include "Cubes.h"

// -----------------------------------------------------------------------------

SpinningCube::SpinningCube(EventDispatcher* pDispatcher)
{
	mDispatcher = pDispatcher;

	mEventHandle.eventType = Event::eHKeyPressed;
	mEventHandle.OnEvent = [this]() { onEvent(); };

	mDispatcher->registerEvent(&mEventHandle);
}

// -----------------------------------------------------------------------------

void SpinningCube::onEvent()
{
	std::cout << "I'm spinning around, move outta my way" << std::endl;
}

// -----------------------------------------------------------------------------

ColourChangingCube::ColourChangingCube(EventDispatcher* pDispatcher)
{
	mDispatcher = pDispatcher;

	mEventHandle.eventType = Event::eGKeyPressed;
	mEventHandle.OnEvent = [this]() { onEvent(); };

	mDispatcher->registerEvent(&mEventHandle);
}

// -----------------------------------------------------------------------------

void ColourChangingCube::onEvent()
{
	std::cout << "<<Changing colour>>" << std::endl;
}

// -----------------------------------------------------------------------------

FireCube::FireCube(EventDispatcher* pDispatcher)
{
	mDispatcher = pDispatcher;

	mEventHandle.eventType = Event::eHKeyPressed;
	mEventHandle.OnEvent = [this]() { onEvent(); };

	mDispatcher->registerEvent(&mEventHandle);
}

// -----------------------------------------------------------------------------

void FireCube::onEvent()
{
	std::cout << "THE CUBE, THE CUBE, THE CUBE IS ON FIRE. IF YOU WANNA PARTY THEN RAISE YO HANDS HIGHER" << std::endl;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
