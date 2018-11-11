#include "stdafx.h"
#include "House.h"
#include <iostream>

using namespace std;


int main()
{
	House house;

	cout << "Total house volume: " << &house.getVolume << "m^3;\n";
	cout << "Total paint volume: " << &house.getPaintVolume << "l;\n";
	cout << "Parquet boards quantity: " << &house.getParquetCount << "boards;\n";
	cout << "Total glass quantity: " << &house.getGlassCount << "m^2;\n";

	house.~House();

    return 0;
}

