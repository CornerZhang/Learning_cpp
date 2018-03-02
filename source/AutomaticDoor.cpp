#include "AutomaticDoor.h"




bool AutomaticDoor::IsOpen() const
{
	return state == State::open;
}

bool AutomaticDoor::IsClosed() const
{
	return state == State::closed;
}

bool AutomaticDoor::IsClosing() const
{
	return state == State::closing;
}
