#include "Car.h"

int main(void) {
	Car run99, run100, run120;
	run99.InitMembers((char*)"run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	run100.InitMembers((char*)"run100", 70);
	run100.Accel();
	run100.Accel();
	run100.Accel();
	run100.Accel();
	run100.Accel();
	run100.ShowCarState();
	run100.Break();
	run100.Break();
	run100.ShowCarState();

	run120.InitMembers((char*)"run120", 30);
	run120.Accel();
	run120.Accel();
	run120.ShowCarState();
	run120.Break();
	run120.ShowCarState();

	return 0;
}