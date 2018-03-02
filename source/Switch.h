#pragma once

class Lamp;

class Switch {
private:
	Lamp & lamp;
	bool state { false };

public:
	Switch(Lamp& lamp);

	void Toggle();
};
