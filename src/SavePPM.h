////////////////////////////////////////////////////////////////////////////////
// This program implements the saving of a 2D array in raw (P6/PPM) format
// It is used to save the resulting array obtained after performing distance 
// transform on the input array.
// See the 'main.cpp' for more information.
// -----------------------------------------------------------------------------
// Author: Occam - Contact: bluenoise86@gmail.com 
// Copyright: Code in Colors, 2021 - License: MIT open source license
////////////////////////////////////////////////////////////////////////////////


#pragma once
#include <iostream>
#include <fstream>

typedef unsigned char BYTE;

void savePPM(double ** &frame, int width, int height, const char * filename)
{
	std::ofstream file(filename, std::ios::out | std::ios::binary);

	if (!file) {
		std::cout << "Could not open the image file ..." << std::endl;
		return;
	}

	////////////////////////////////////////////////////////

	file << "P6\n"; 
	file << width << " " << height;
	file << "\n255" << std::endl;

	////////////////////////////////////////////////////////

	char * buffer = new char[3 * width * height];
	
	for (int x = 0; x < width; x++)
		for (int y = 0; y < height; y++)
	{
			buffer[3 * (width * y + x) + 0] = 255 * frame[x][y];
			buffer[3 * (width * y + x) + 1] = 255 * frame[x][y];
			buffer[3 * (width * y + x) + 2] = 255 * frame[x][y];
	}

	////////////////////////////////////////////////////////

	file.write(buffer, 3 * width * height);

	////////////////////////////////////////////////////////

	delete [] buffer; 

	file.close();
}
