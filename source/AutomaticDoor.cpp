#include "AutomaticDoor.h"

using State = AutomaticDoor::State;


State AutomaticDoor::GetState() const {

	return State::closed;
}