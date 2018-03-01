#include "stringFunctions.h"

int firstIntLine(string s){
	int pos = s.find(" ");
	return stoi(s.substr(0,pos));
}

string cutline(string s){
	int pos = s.find(" ");
	return s.substr(pos,s.length);
}