#include <iostream>
#include "AutomaticDoor.h"

using namespace std;

int main(int argc, char* argv[]) {
	cout << "the Main!" << endl;

	AutomaticDoor automaticDoor;
	AutomaticDoor::State doorsState = automaticDoor.GetState();

	if (doorsState == AutomaticDoor::State::closed) {
		//...
	}

	return 0;
}