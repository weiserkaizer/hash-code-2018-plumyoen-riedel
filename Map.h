#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Vehicle.h"
#include "Ride.h"
#include "Intersection.h"
#include "stringFunctions.h"

class Map{
private:
	int rows;
	int columns;
	int nbVehicles;
	std::vector<Vehicle> vehicles; 
	int nbRides;
	std::vector<Ride> rides;
public:
	Map(char* path);
	void assignRides();
	void assignRide(int r,int v);
	Ride readRide(std::string s);
};

#endif