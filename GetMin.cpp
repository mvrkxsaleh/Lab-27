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
 * FUNCTION GetMax
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
 * 	 This function will return the maximum value in the array
 *****************************************************************************/

int GetMin(const int ROW_SIZE,	     // IN - row size
		   const int COL_SIZE,      // IN - column size
		   int reviewAr[][COL_VAL]) // IN - reviewer's array
{
	int rowIndex;
	int colIndex;
	int max;
	int min;

	min = max;
	for(rowIndex = 0; rowIndex < ROW_SIZE; rowIndex++)
	{
		for(colIndex = 0; colIndex < COL_SIZE; colIndex++)
		{
			if(reviewAr[rowIndex][colIndex] < min)
				{
					min = reviewAr[rowIndex][colIndex];
				}
		}
	}

	return min;
}
