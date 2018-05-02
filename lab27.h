/******************************************************************************
 * AUTHOR      : Farah Alfarah & Mark Saleh
 * STUDENT ID  : 1035501 & 1060488
 * LAB #27     : Multidimensional Arrays - Movie Ratings
 * CLASS       : CS1A
 * SECTION     : MW-8am
 * DUE DATE    : 05/02/18
 *****************************************************************************/
#ifndef LAB27_H_
#define LAB27_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

const int COL_VAL = 5;
/******************************************************************************
 * PrintHeader
 * This function receives an assignment name, type and number then outputs the
 * appropriate header.
 *  ==> returns nothing.
 ****************************************************************************/
void PrintHeader(string asName,  //IN - assignment name - used for output
				  char   asType, //IN - assignment type - used for output
				  int    asNum); //IN - assignment num  - used for output

/******************************************************************************
 * ReadInput
 * 		This function receives the row size, column size, and the reviewer's
 * 		array.
 * 		==> returns nothing.
 *****************************************************************************/
void ReadInput(const int ROW_SIZE,  // IN - the reviewer's size
			   const int COL_SIZE,  // IN - the movie rating's size
			   int reviewAr[][COL_VAL]);   // IN - the array storing the data above

/******************************************************************************
 * AverageByRow
 * 		This function receives the row size, column size, and the integer array.
 * 		==> returns average by rows.
 ******************************************************************************/
void AverageByRow(const int ROW_SIZE,  // IN - the row's size
		          const int COL_SIZE,  // IN - the column's size
				  int intAr[][COL_VAL]);

/******************************************************************************
 * AverageByCol
 * 		This function receives the row size, column size, and the integer array.
 * 		==> returns average by columns.
 ******************************************************************************/
void AverageByCol(const int ROW_SIZE,   // IN - the row's size
		           const int COL_SIZE,   // IN - the column's size
				   int intAr[][COL_VAL]);      // IN - the array of type int

/******************************************************************************
 * GetMax
 * 		This function receives the row size, column size, and the reviewer's array.
 * 		==> returns maximum value in array.
 *****************************************************************************/
int GetMax(const int ROW_SIZE,	     // IN - row size
		   const int COL_SIZE,       // IN - column size
		   int reviewAr[][COL_VAL]); // IN - reviewer's array


/******************************************************************************
 * GetMin
 * 		This function receives the row size, column size, and the reviewer's array.
 * 		==> returns maximum value in array.
 *****************************************************************************/


int GetMin(const int ROW_SIZE,	     // IN - row size
		   const int COL_SIZE,       // IN - column size
		   int reviewAr[][COL_VAL]); // IN - reviewer's array

#endif /* LAB27_H_ */
