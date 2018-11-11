#include "stdafx.h"
#include "Room.h"
#include "Window.h"
#include "Parquet.h"
#include <string>
#include <iostream>

Room::Room()
{
	length = rand() % 5+15;
	width = rand() % 4+15;
	height = 3;
	windowCount = rand() % 2;
	windows = new Window[windowCount];
	for (int i = 0; i < windowCount; i++)
	{
		windows[i] = Window();
	}
	Parquet *board = new Parquet();
	boardCount = width * length / board->getLength()*board->getWidth() + 1;
	parquet = new Parquet[boardCount];
	for (int i = 0; i < boardCount; i++)
	{
		parquet[i] = Parquet();
	}
	color = "white";
	paintQuantityPerM2 = rand() % 1+3;
}

Room::Room(int l, int w, int h, int wCount, std::string c, int pQPM2, int pL, int pW)
{
	length = l;
	width = w;
	height = h;
	windowCount = wCount;
	windows = new Window[windowCount];
	Parquet *board = new Parquet(pL, pW);
	boardCount = width * length / board->getLength()*board->getWidth() + 1;
	parquet = new Parquet[boardCount];
	color = c;
	paintQuantityPerM2 = pQPM2;
}


Room::~Room()
{
	delete windows;
	delete parquet;
}

int Room::getArea()
{
	return length * width;
}

int Room::getVolume()
{
	return length * width * height;
}

double Room::getPaintVolume()
{
	int windowsArea = 0;
	Window *i = windows;

	for (i; i < windows+windowCount; i++)
	{
		windowsArea += i->getHeight() * i->getWidht();
	}

	double wallArea = 2 * width*height + 2 * length*height - windowsArea;

	return wallArea * paintQuantityPerM2;
}

int Room::getBoardCount()
{
	return boardCount;
}

int Room::getGlassQuant()
{
	int windowsArea = 0;
	Window *i = windows;

	for (i; i < windows + windowCount; i++)
	{
		windowsArea += i->getHeight() * i->getWidht();
	}

	return windowsArea;
}