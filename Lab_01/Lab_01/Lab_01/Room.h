#pragma once
#include "Window.h"
#include "Parquet.h"
#include <string>
class Room
{
public:
	Room();
	Room(int l, int w, int h, int wCount, std::string c, int pQPM2, int pL, int pW);
	~Room();
	int getArea();
	int getVolume();
	double getPaintVolume();
	int getBoardCount();
	int getGlassQuant();
private:
	int length;
	int width;
	int height;
	int windowCount;
	Window *windows;
	Parquet *parquet;
	int boardCount;
	std::string color;
	int paintQuantityPerM2;
};