// -----------------------------------------------------------------------------
#ifndef InteractableCubeInterface_H
#define InteractableCubeInterface_H
// -----------------------------------------------------------------------------

//--INCLUDES--//


// -----------------------------------------------------------------------------

class InteractableCubeInterface
	: public ObserverInterface
{
public:
	// Begin ObserverInterface
	virtual void onNotification() override { displayMessage(); }
	// End ObserverInterface

	virtual void displayMessage() = 0;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !InteractableCubeInterface_H
