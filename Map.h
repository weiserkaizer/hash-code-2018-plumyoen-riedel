#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Vehicle.h"
#include "Ride.h"
#include "Intersection.h"

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
	void assignRide(int r,int v);
	Ride readRide(string s);
}

#endif