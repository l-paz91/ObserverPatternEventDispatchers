// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <iostream>

#include "Button.h"

// -----------------------------------------------------------------------------

void Button::registerObserver(ObserverInterface* pObserver)
{
	mObservers.push_back(pObserver);
}

// -----------------------------------------------------------------------------

void Button::removeObserver(ObserverInterface* pObserver)
{
	auto iterator = std::find(mObservers.begin(), mObservers.end(), pObserver);
	if (iterator == mObservers.end())
	{
		std::cout << "No observer found." << std::endl;
	}
	else
	{
		mObservers.erase(iterator);
	}
}

// -----------------------------------------------------------------------------

void Button::notifyObservers()
{
	for (ObserverInterface* observer : mObservers)
	{
		observer->onNotification();
	}
}

// -----------------------------------------------------------------------------

void Button::buttonPressed()
{
	notifyObservers();
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
