/******************************************************************************
 * AUTHOR      : Farah Alfarah & Mark Saleh
 * STUDENT ID  : 1035501 & 1060488
 * LAB #27     : Multidimensional Arrays - Movie Ratings
 * CLASS       : CS1A
 * SECTION     : MW-8am
 * DUE DATE    : 05/02/18
 *****************************************************************************/
#include "lab27.h"
/******************************************************************************
 * FUNCTION ReadInput
 * ----------------------------------------------------------------------------
 * This function receives the row size, column size, and the reviewer's array.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	 The following parameters need to have a defined value prior to calling the
 * 	 function:
 * 	 ROW_SIZE 	  : the reviewer's size
 * 	 COL_SIZE 	  : the movie rating's size
 * 	 reviewAr[][] : the array of reviewer's ratings
 *
 * POST-CONDITIONS
 * 	 This function will read information from an input file.
 ******************************************************************************/

void ReadInput(const int ROW_SIZE,  // IN - the reviewer's size
			   const int COL_SIZE,  // IN - the movie rating's size
			   int reviewAr[][5])   // IN - the array storing the data above
{
	// declaring variables
	ifstream fin;
	int rowIndex;
	int colIndex;

	// Initializations
	rowIndex = 0;
	colIndex = 0;
	fin.open("input.txt");

	while(fin && rowIndex < ROW_SIZE)
	{
		//rowIndex = 0;
		colIndex = 0;


		while(fin && colIndex < COL_SIZE)
		{
			fin >> reviewAr[rowIndex][colIndex];
			colIndex++;

		}
	//	fin.ignore(10000, '\n');
		rowIndex++;
	}
	fin.close();

}

// useful code for checking whether the input file is read properly or not
/*
	for(rowIndex = 0; rowIndex < ROW_SIZE; rowIndex++)
	{
		for(colIndex = 0; colIndex < COL_SIZE; colIndex++)
		{
			cout << reviewAr[rowIndex][colIndex] << ' ';
		}
		cout << endl;
	}
*/
