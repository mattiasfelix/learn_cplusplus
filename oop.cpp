#include <iostream>
#include <list>
#include <string>

using namespace std;

class Vehikel
{

	  list<string> colors;
	  list<string> materials;

};

class Bike : public Vehikel
{

	int numberOfWheels = 2;
	bool isElectric = false;
};

class MountainBike : public Bike
{

	bool allTerrain = true;
};

int main()
{

	MountainBike bike = MountainBike();

	cout << bike << endl;

	return 0;
}