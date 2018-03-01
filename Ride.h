#ifndef RIDE_H
#define RIDE_H

#include <iostream>
#include "Intersection.h"

class Ride{
private:
	int id;
	static nextId=1;
	Intersection start;
	Intersection finish;
	int startDate;
	int finishDate;
	int length;
public:
	Ride(Intersection s,Intersection f,int sd,int fd);
	Intersection getStart();
	Intersection getFinish();
	int getStartDate();
	int getFinishDate();
	int getLength();
	int getID();
}

#endif