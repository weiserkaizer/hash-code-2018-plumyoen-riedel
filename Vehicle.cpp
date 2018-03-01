#include "Vehicule.h"

Vehicule::Vehicule(){
	currentInter = Intersection(0,0);
	nbRides = 0;
}

Intersection Vehicule::getCurrentInter(){
	return currentInter;
}

void Vehicule::addRide(Ride r){
	rides.pushback(r);
	++nbRides;
}

void Vehicule::printRides(){
	std::cout<<nbRides<<" ";
	for(int i=0;i<nbRides;++i){
		std::cout<<rides[i].getID()<<" ";
	}
}