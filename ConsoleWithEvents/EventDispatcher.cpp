// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <iostream>

#include "EventDispatcher.h"

// -----------------------------------------------------------------------------

void EventDispatcher::registerEvent(EventHandle* pEvent)
{
	mEvents.push_back(pEvent);
}

// -----------------------------------------------------------------------------

void EventDispatcher::removeEvent(EventHandle* pEvent)
{
	auto iterator = std::find(mEvents.begin(), mEvents.end(), pEvent);
	if (iterator == mEvents.end())
	{
		std::cout << "No event found." << std::endl;
	}
	else
	{
		mEvents.erase(iterator);
	}
}

// -----------------------------------------------------------------------------

void EventDispatcher::fireEvent(Event pEvent)
{
	for (EventHandle* e : mEvents)
	{
		if (pEvent == e->eventType)
		{
			e->OnEvent();
		}
	}
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
