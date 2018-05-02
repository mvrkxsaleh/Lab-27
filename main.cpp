/* AUTHOR      : Farah Alfarah & Mark Saleh
 * STUDENT ID  : 1035501 & 1060488
 * LAB #27     : Multidimensional Arrays - Movie Ratings
 * CLASS       : CS1A
 * SECTION     : MW-8am
 * DUE DATE    : 05/02/18
 *****************************************************************************/

#include "Lab27.h"

/******************************************************************************
 *
 *-----------------------------------------------------------------------------
 * This program allows the user to
 *-----------------------------------------------------------------------------
 * INPUT:
 *
 *
 * OUTPUT:
 *
 *****************************************************************************/

int main()
{
	const int ROW_SIZE = 4;
	const int COL_SIZE = 5;

	//int rowIndex;
	//int colIndex;
	int highest;
	int lowest;
	int reviewAr[ROW_SIZE][COL_SIZE];

	PrintHeader("Multidimen. Arrays - Movie Ratings", 'L', 27);

	ReadInput(ROW_SIZE, COL_SIZE, reviewAr);

	cout << "****************************************\n"
		 << "*  MOVIE STARS - RATING ANALYSIS TOOL  *\n"
		 << "****************************************\n"
		 << endl;
	cout << "The average rating given by each reviewer is...\n";
	AverageByRow(ROW_SIZE, COL_SIZE, reviewAr);
	cout << endl << endl << endl;
	cout << "The average stars for each movie is..." << endl;
	AverageByCol(ROW_SIZE, COL_SIZE, reviewAr);

	highest = GetMax(ROW_SIZE, COL_SIZE, reviewAr);
	lowest  = GetMin(ROW_SIZE, COL_SIZE, reviewAr);

	cout << endl << endl << endl;
	cout << "The Highest rating given to any movie is " << highest << " stars!";
	cout << endl;
	cout << "The Lowest rating given to any movie is " << lowest   << " stars!";


	return 0;
}
