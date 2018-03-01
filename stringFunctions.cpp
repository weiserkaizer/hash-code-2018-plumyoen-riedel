#include "stringFunctions.h"
using namespace std;


int firstIntLine(string s){
	int pos = s.find(" ");
	return stoi(s.substr(0,pos));
}

string cutLine(string s){
	int pos = s.find(" ");
	return s.substr(pos,s.length());
}