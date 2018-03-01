#include "Map.h"
using namespace std;

Map::Map(char* path){
	ifstream in(path);
	string line;

	getline(in,line);

	rows=firstIntLine(line);
	cutLine(line);
	columns=firstIntLine(line);
	cutLine(line);
	nbVehicles=firstIntLine(line);
	cutLine(line);
	nbRides=firstIntLine(line);
	cutLine(line);
	int bonus=firstIntLine(line);
	cutLine(line);
	int steps=firstIntLine(line);


	for(int i = 0; i<nbVehicles; ++i){
		vehicles.push_back(Vehicle());
	}

	for(int i = 0; i<nbRides; ++i){
		getline(in,line);
		rides.push_back(readRide(line));
	}
}

void Map::assignRides(){

}

void Map::assignRide(int r,int v){
	vehicles[v].addRide(rides[r]);
}

Ride Map::readRide(string s){
	int sx = firstIntLine(s);
	cutLine(s);
	int sy = firstIntLine(s);
	cutLine(s);
	Intersection st(sx,sy);
	int fx = firstIntLine(s);
	cutLine(s);
	int fy = firstIntLine(s);
	cutLine(s);
	Intersection fn(fx,fy);
	int sd = firstIntLine(s);
	cutLine(s);
	int fd = firstIntLine(s);
	
	return Ride(st,fn,sd,fd);
}