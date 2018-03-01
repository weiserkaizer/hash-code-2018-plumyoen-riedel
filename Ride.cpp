#include "Ride.h"

int Ride::nextId = 1;

Ride::Ride(Intersection s,Intersection f,int sd,int fd){
	id = nextId;
	nextId++;
	start = s;
	finish = f;
	startDate = sd;
	finishDate = fd;
	length = std::abs(start.x-finish.x)+std::abs(start.y-finish.y);
}

Intersection Ride::getStart(){
	return start;
}

Intersection Ride::getFinish(){
	return finish;
}

int Ride::getStartDate(){
	return startDate;
}

int Ride::getFinishDate(){
	return finishDate;
}

int Ride::getLength(){
	return length;
}

int Ride::getID(){
	return id;
}