#pragma once

class AutomaticDoor {
private:
	enum class State {
		closed = 1,
		opening,
		open,
		closing
	};

	State state;

public:

	bool IsOpen() const;
	bool IsClosed() const;
	bool IsClosing() const;
};