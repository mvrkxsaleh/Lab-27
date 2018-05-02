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
 * FUNCTION AverageByCol
 * ----------------------------------------------------------------------------
 * This function receives the row size, column size, and the integer array.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	 The following parameters need to have a defined value prior to calling the
 * 	 function:
 * 	 ROW_SIZE 	  : the row size
 * 	 COL_SIZE 	  : the column size
 * 	 intAr[][]    : the array of the integer data
 *
 * POST-CONDITIONS
 * 	 This function will calculate the average by columns.
 ******************************************************************************/

void AverageByCol(const int ROW_SIZE,  // IN - the row's size
		           const int COL_SIZE,  // IN - the column's size
				   int intAr[][COL_VAL])      // IN - the array of type int
{
	int colSum;			 // IN         - sum of numbers in row
	int rowIndex;		 // IN         - row index
	int colIndex;		 // IN         - column index
	float avg;			 // CALC       - average of each row
	float highestRating; // CALC & OUT - the movie with highest rating
	int bestMovie;

	// Initializations
	highestRating = 0.0;

		for(colIndex = 0; colIndex < COL_SIZE; colIndex++)
		{
			colSum = 0;

			for(rowIndex = 0; rowIndex < ROW_SIZE; rowIndex++)
			{
				colSum += intAr[rowIndex][colIndex];
			}

			avg = float(colSum) / ROW_SIZE;

			if(avg > highestRating)
			{
				bestMovie = colIndex + 1;
				highestRating = avg;
			}

			cout << setprecision(1) << fixed;
			cout << "Movie #" << colIndex + 1 << " earned "
				 << avg << " stars.\n";
		}
		cout << endl << endl;
		cout << "The winner is (drum roll please)..." << endl;
		cout << "Movie #" << bestMovie << " with "    << highestRating
			 << " stars!!" << endl;

}




