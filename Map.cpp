#include "map.h"
#include "stringFunctions.h"

Map::Map(string path){
	ifstream in(path);
	string line

	getline(in,line);

	rows=line.firstIntLine(line);
	cutLine(line);
	columns=line.firstIntLine(line);
	cutLine(line);
	nbVehicles=line.firstIntLine(line);
	cutLine(line);
	nbRides=line.firstIntLine(line);
	cutLine(line);
	int bonus=line.firstIntLine(line);
	cutLine(line);
	int steps=line.firstIntLine(line);


	for(int i = 0; i<nbVehicles; ++i){
		vehicles.pushback(Vehicle());
	}

	for(int i = 0; i<nbRides; ++i){
		getline(in,line)
		rides.pushback(readRide(line))
	}
}

void Map::assignRides(){

}

void Map::assignRide(int r,int v){
	vehicles[v].addRide(rides[r]);
}

Ride Map::readRide(string s){
	int sx = firstIntLine(s);
	cutline(s);
	int sy = firstIntLine(s);
	cutline(s);
	Intersection st(sx,sy);
	int fx = firstIntLine(s);
	cutline(s);
	int fy = firstIntLine(s);
	cutline(s);
	Intersection fn(fx,fy);
	int sd = firstIntLine(s);
	cutline(s);
	int fd = firstIntLine(s);
	
	return Ride(st,fn,sd,fd);
}