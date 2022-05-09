// -----------------------------------------------------------------------------
#ifndef SubjectInterface_H
#define SubjectInterface_H
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "ObserverInterface.h"

// -----------------------------------------------------------------------------

class SubjectInterface
{
public:
	virtual void registerObserver(ObserverInterface* pObserver) = 0;
	virtual void removeObserver(ObserverInterface* pObserver) = 0;
	virtual void notifyObservers() = 0;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !SubjectInterface_H
