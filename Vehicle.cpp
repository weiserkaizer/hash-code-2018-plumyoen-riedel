#include "Vehicle.h"

Vehicle::Vehicle(){
	currentInter = Intersection(0,0);
	nbRides = 0;
}

Intersection Vehicle::getCurrentInter(){
	return currentInter;
}

void Vehicle::addRide(Ride r){
	rides.push_back(r);
	++nbRides;
}

void Vehicle::printRides(){
	std::cout<<nbRides<<" ";
	for(int i=0;i<nbRides;++i){
		std::cout<<rides[i].getID()<<" ";
	}
}