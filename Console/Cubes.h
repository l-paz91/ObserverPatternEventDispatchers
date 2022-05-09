// -----------------------------------------------------------------------------
#ifndef Cubes_H
#define Cubes_H
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "InteractableCubeInterface.h"

class Button;

// -----------------------------------------------------------------------------

class SpinningCube
	: public InteractableCubeInterface
{
public:
	SpinningCube(Button* pButton);
	~SpinningCube() { mButton->removeObserver(this); }

	// Begin InteractableCubeInterface
	void displayMessage() override;
	// End InteractableCubeInterface

private:
	Button* mButton;
};

// -----------------------------------------------------------------------------

class ColourChangingCube
	: public InteractableCubeInterface
{
public:
	ColourChangingCube(Button* pButton);
	~ColourChangingCube() { mButton->removeObserver(this); }

	// Begin InteractableCubeInterface
	void displayMessage() override;
	// End InteractableCubeInterface

private:
	Button* mButton;
};

// -----------------------------------------------------------------------------

class FireCube
	: public InteractableCubeInterface
{
public:
	FireCube(Button* pButton);
	~FireCube() { mButton->removeObserver(this); }

	// Begin InteractableCubeInterface
	void displayMessage() override;
	// End InteractableCubeInterface

private:
	Button* mButton;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !Cubes_H
