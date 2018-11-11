#include "stdafx.h"
#include "Parquet.h"
#include <string>
#include <iostream>

Parquet::Parquet()
{
	length = 5;
	width = 1;
}


Parquet::Parquet(unsigned int l, unsigned int w)
{
	length = l;
	width = w;
}


Parquet::~Parquet()
{
}

unsigned int Parquet::getWidth()
{
	return width;
}

void Parquet::setWidth(unsigned int new_width)
{
	width = new_width;
}

unsigned int Parquet::getLength()
{
	return length;
}

void Parquet::setLength(unsigned int new_length)
{
	length = new_length;
}
