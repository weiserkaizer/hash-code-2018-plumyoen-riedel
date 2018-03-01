#include "map.h"

Map::Map(int r,int c,int nv,int nr){
	rows = r;
	columns = c;
	nbVehicles = nv;
	for(int i = 0; i<nbVehicles; ++i){
		vehicles.pushback(Vehicle());
	}
	nbRides = nr;
	currentRide = 0;
	for(int i = 0; i<nbRides; ++i){
		rides.pushback(readRide(currentRide))
	}
}

void Map::assignRides(){

}

void Map::assignRide(int r,int v){
	vehicles[v].addRide(rides[r]);
}

Ride Map::readRide(int n){

}