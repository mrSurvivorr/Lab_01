#pragma once
#include "Flat.h"
class House
{
public:
	House();
	House(int fCount, int fPF);
	~House();
	int getVolume();
	double getPaintVolume();
	int getParquetCount();
	int getGlassCount();
private:
	int floorCount;
	int flatsPerFloor;
	Flat *flats;
};