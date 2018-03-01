#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <vector>
#include "Intersection.h"
#include "Ride.h"

class Vehicle{
private:
	Intersection currentInter;
	vector<Ride> rides;
	int nbRides;
public:
	Vehicle();
	Intersection getCurrentInter();
	void addRide(Ride r);
	void printRides();
}

#endif