#include "stdafx.h"
#include "House.h"
#include "Flat.h"
#include <iostream>

House::House()
{
	floorCount = rand() % 1+5;
	flatsPerFloor = 4;
	flats = new Flat();
	flats = new Flat[floorCount*flatsPerFloor];
}

House::House(int fCount, int fPF)
{
	floorCount = fCount;
	flatsPerFloor = fPF;
	flats = new Flat();
	flats = new Flat[floorCount*flatsPerFloor];
}


House::~House()
{
	delete flats;
}

int House::getVolume()
{
	int flatVolume = 0;
	int flatCount = floorCount * flatsPerFloor;

	for (int i = 0; i < flatCount; i++)
	{
		flatVolume += flats[i].getVolume();
	}

	return flatVolume;
}

double House::getPaintVolume()
{
	double flatPaintVolume = 0;
	int flatCount = floorCount * flatsPerFloor;

	for (int i = 0; i < flatCount; i++)
	{
		flatPaintVolume += flats[i].getPaintVolume();
	}

	return flatPaintVolume;
}

int House::getParquetCount()
{
	int boardCount = 0;
	int flatCount = floorCount * flatsPerFloor;

	for (int i = 0; i < flatCount; i++)
	{
		boardCount += flats[i].getBoardCount();
	}

	return boardCount;
}

int House::getGlassCount()
{
	int glassQuant = 0;
	int flatCount = floorCount * flatsPerFloor;

	for (int i = 0; i < flatCount; i++)
	{
		glassQuant += flats[i].getGlassQuant();
	}

	return glassQuant;
}