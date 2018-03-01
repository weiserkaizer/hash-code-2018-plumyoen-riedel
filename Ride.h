#ifndef RIDE_H
#define RIDE_H

#include <iostream>
#include "Intersection.h"

class Ride{
private:
	Intersection start;
	Intersection finish;
	int startDate;
	int finishDate;
public:
	Ride(Intersection s,Intersection f,int sd,int fd);
	Intersection getStart();
	Intersection getFinish();
	int getStartDate();
	int getFinishDate();
}

#endif