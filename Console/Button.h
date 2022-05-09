// -----------------------------------------------------------------------------
#ifndef Button_H
#define Button_H
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <vector>

#include "SubjectInterface.h"

// -----------------------------------------------------------------------------

class Button
	: public SubjectInterface
{
public:
	Button() {}

	// Begin SubjectInterface
	void registerObserver(ObserverInterface* pObserver) override;
	void removeObserver(ObserverInterface* pObserver) override;
	void notifyObservers() override;
	// End SubjectInterface

	void buttonPressed();

private:
	std::vector<ObserverInterface*> mObservers;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !Button_H
