// -----------------------------------------------------------------------------
#ifndef EventDispatcher_H
#define EventDispatcher_H
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <vector>

#include "EventHandle.h"

// -----------------------------------------------------------------------------

class EventDispatcher final
{
public:
	EventDispatcher() {}

	void registerEvent(EventHandle* pEvent);
	void removeEvent(EventHandle* pEvent);

	void fireEvent(Event pEvent);

private:
	std::vector<EventHandle*> mEvents;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !EventDispatcher_H
