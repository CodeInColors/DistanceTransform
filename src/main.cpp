////////////////////////////////////////////////////////////////////////////////
// This program demonstrates how to perform a distance transform on a 2D array. 
// -----------------------------------------------------------------------------
// The distance transform that we use in this example is known as the Meijster 
// algorithm. Its particularity is to have a complexity in o(n^3) instead of 
// o(n^4) for the naive algorithm.
//
// As a consequence, its is vastly advantageous when it comes to compute a
// distance map on a large image.
// 
// After allocating the 2D array, we fill it with random data. Then we perform 
// the distance transform in place. To save the produced image we use the P6
// raw format (also knonw as PPM). Finally we deallocate the buffers.
// -----------------------------------------------------------------------------
// Author: Occam - Contact: bluenoise86@gmail.com
// Copyright: Code in Colors, 2021 - License: MIT open source license
////////////////////////////////////////////////////////////////////////////////




#include <iostream>
#include "DT.h"
#include "SavePPM.h"

int main(void)
{
	const int width  = 640;
	const int height = 480;

	// Allocate //////////////////////////////////

	double ** buffer = new double * [width]; 
		for (int x = 0; x < width; x++)
			buffer[x] = new double[height];

	for (int x = 0; x < width; x++)
		for (int y = 0; y < height; y++)
			buffer[x][y] = 0;

	// Randomly fill the array ///////////////////

	srand(1234);
	for (int i = 0; i < 10; i++)
		buffer[rand() % width][rand() % height] = 1;

	// Perform DT ////////////////////////////////

	distanceTransform(buffer, width, height);

	// Normalize /////////////////////////////////

	double max = 0;

	for (int x = 0; x < width; x++)
		for (int y = 0; y < height; y++)
			if (buffer[x][y] > max)
				max = buffer[x][y];
	
	for (int x = 0; x < width; x++)
		for (int y = 0; y < height; y++)
			buffer[x][y] /= max;

	/// Save /////////////////////////////////////

	savePPM(buffer, width, height, "test.ppm");

	// Deallocate ////////////////////////////////

	for (int x = 0; x < width; x++)
		delete [] buffer[x];

	delete [] buffer; 

	return 0;
}
