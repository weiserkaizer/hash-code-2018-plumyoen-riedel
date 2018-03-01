#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Ride.h"

class Map{
private:
	int rows;
	int columns;
	int nbVehicles;
	vector<vehicle> vehicles; 
	int nbRides;
	vector<Ride> rides;
public:
	Map(int r,int c,vector<Vehicle> v,vector<Ride> rd);
	void assignRides();
	void assignRide(Ride,Vehicule);
}

#endif