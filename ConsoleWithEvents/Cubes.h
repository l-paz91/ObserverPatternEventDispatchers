// -----------------------------------------------------------------------------
#ifndef Cubes_H
#define Cubes_H
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "EventDispatcher.h"
#include "EventHandle.h"

// -----------------------------------------------------------------------------

class SpinningCube
{
public:
	SpinningCube(EventDispatcher* pDispatcher);
	~SpinningCube() { mDispatcher->removeEvent(&mEventHandle); }

	void onEvent();

private:
	EventHandle mEventHandle;
	EventDispatcher* mDispatcher;
};

// -----------------------------------------------------------------------------

class ColourChangingCube
{
public:
	ColourChangingCube(EventDispatcher* pDispatcher);
	~ColourChangingCube() { mDispatcher->removeEvent(&mEventHandle); }

	void onEvent();

private:
	EventHandle mEventHandle;
	EventDispatcher* mDispatcher;
};

// -----------------------------------------------------------------------------

class FireCube
{
public:
	FireCube(EventDispatcher* pDispatcher);
	~FireCube() { mDispatcher->removeEvent(&mEventHandle); }

	void onEvent();

private:
	EventHandle mEventHandle;
	EventDispatcher* mDispatcher;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !Cubes_H
