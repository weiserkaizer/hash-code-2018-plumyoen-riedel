#ifndef RIDE_H
#define RIDE_H

#include <iostream>
#include "Intersection.h"
#include <cmath>

class Ride{
private:
	int id;
	Intersection start;
	Intersection finish;
	int startDate;
	int finishDate;
	int length;
public:
	static int nextId;
	Ride(Intersection s,Intersection f,int sd,int fd);
	Intersection getStart();
	Intersection getFinish();
	int getStartDate();
	int getFinishDate();
	int getLength();
	int getID();
};

#endif