#include "map.h"

Map::Map(int r,int c,int nv,vector<Ride> rd){
	rows = r;
	columns = c;
	nbVehicles = nv;
	for(int i = 0; i<nbVehicles; ++i){
		vehicles.pushback(Vehicle());
	}
}
void Map::assignRides();
void Map::assignRide(Ride,Vehicule);