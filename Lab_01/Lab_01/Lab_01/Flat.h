#pragma once
#include "Room.h"
class Flat
{
public:
	Flat();
	Flat(int rCount);
	~Flat();
	int getVolume();
	int getArea();
	double getPaintVolume();
	int getBoardCount();
	int getGlassQuant();
private:
	int roomCount;
	Room *rooms;
};