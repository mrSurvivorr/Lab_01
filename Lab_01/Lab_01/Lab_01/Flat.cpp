#include "stdafx.h"
#include "Flat.h"
#include "Room.h"

Flat::Flat()
{
	roomCount = 1;
	rooms = new Room[roomCount];
}

Flat::Flat(int rCount)
{
	roomCount = rCount;
	rooms = new Room[roomCount];
}


Flat::~Flat()
{
	delete rooms;
}

int Flat::getArea()
{
	int roomArea = 0;

	for (int i = 0; i < roomCount; i++)
	{
		roomArea += rooms[i].getArea();
	}

	return roomArea;
}

int Flat::getVolume()
{
	int roomVolume = 0;

	for (int i = 0; i < roomCount; i++)
	{
		roomVolume += rooms[i].getVolume();
	}

	return roomVolume;
}

double Flat::getPaintVolume()
{
	double roomPaintVolume = 0;

	for (int i = 0; i < roomCount; i++)
	{
		roomPaintVolume += rooms[i].getPaintVolume();
	}

	return roomPaintVolume;
}

int Flat::getBoardCount()
{
	int roomBoardCount = 0;

	for (int i = 0; i < roomCount; i++)
	{
		roomBoardCount += rooms[i].getBoardCount();
	}

	return roomBoardCount;
}

int Flat::getGlassQuant()
{
	int roomGlassQuant = 0;

	for (int i = 0; i < roomCount; i++)
	{
		roomGlassQuant += rooms[i].getGlassQuant();
	}

	return roomGlassQuant;
}