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
 * FUNCTION AverageByRow
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
 * 	 This function will calculate and output the average by rows.
 ******************************************************************************/

void AverageByRow(const int ROW_SIZE,  // IN - the row's size
		           const int COL_SIZE,  // IN - the column's size
				   int intAr[][COL_VAL])      // IN - the array of type int
{
	int rowSum;			// IN   - sum of numbers in row
	int rowIndex;		// IN   - row index
	int colIndex;		// IN   - column index
	float avg;			// CALC - average of each row


		for(rowIndex = 0; rowIndex < ROW_SIZE; rowIndex++)
		{
			rowSum = 0;
			for(colIndex = 0; colIndex < COL_SIZE; colIndex++)
			{
				rowSum += intAr[rowIndex][colIndex];
			}

			avg = float(rowSum) / COL_SIZE;

			cout << setprecision(1) << fixed;
			cout << "Reviewer #" << rowIndex + 1 << " gave an average of "
				 << avg << " stars.";
			cout << endl;
		}

}
