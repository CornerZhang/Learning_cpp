#include <iostream>
#include "AutomaticDoor.h"

using namespace std;

int main(int argc, char* argv[]) {
	cout << "the Main!" << endl;

	AutomaticDoor automaticDoor;
	if (automaticDoor.IsClosed()) {
		//...
	}

	return 0;
}