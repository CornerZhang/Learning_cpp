#pragma once

class AutomaticDoor {
public:
	enum class State {
		closed = 1,
		opening,
		open,
		closing
	};

private:
	State state;

public:
	State GetState() const;
};