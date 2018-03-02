#include "Switch.h"
#include "Lamp.h"

Switch::Switch(Lamp& lamp) : lamp(lamp)
{

}

void Switch::Toggle()
{
	if (state) {
		state = false;
		lamp.Off();
	}
	else {
		state = true;
		lamp.On();
	}
}

