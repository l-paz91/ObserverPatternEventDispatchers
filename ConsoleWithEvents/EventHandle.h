// -----------------------------------------------------------------------------
#ifndef EventHandle_H
#define EventHandle_H
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <functional>

#include "Event.h"

// -----------------------------------------------------------------------------

class EventHandle
{
public:
	std::function<void()> OnEvent;
	Event eventType;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !EventHandle_H
