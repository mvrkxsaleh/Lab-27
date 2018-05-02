/* AUTHOR      : Farah Alfarah & Mark Saleh
 * STUDENT ID  : 1035501 & 1060488
 * LAB #27     : Multidimensional Arrays - Movie Ratings
 * CLASS       : CS1A
 * SECTION     : MW-8am
 * DUE DATE    : 05/02/18
 *****************************************************************************/
#include "lab27.h"

/******************************************************************************
 * FUNCTION OutputHeader
 * ----------------------------------------------------------------------------
 * This function receives an assignment name, type
 * and number then outputs the appropriate header - returns nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	 The following parameters need to have a defined value prior to calling the
 * 	 function:
 * 	 asName: Assignment Name
 * 	 asNum : Assignment Number
 * 	 asType: Assignment Type --> THIS SHOULD CONTAIN:
 * 	 							  'L' for Labs
 * 	 							  'A' for Assignments
 *
 * POST-CONDITIONS
 * 	 This function will output the class heading.
 ******************************************************************************/
void PrintHeader(string asName, //IN - assignment name - used for output
				  char   asType, //IN - assignment type - used for output
				  int    asNum)  //IN - assignment num  - used for output
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS      : Student's Course
	 * SECTION    : Class Days and Times
	 **************************************************************************/
	const string PROGRAMMER   = "Mark Saleh & Farah Alfarah";
	const string CLASS        = "CS1A";
	const string SECTION      = "MW - 8:00am";

	cout << left;
	cout << "**************************************************\n";
	cout << "* PROGRAMMED BY : " << PROGRAMMER    << endl;
	cout << "* "      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "* "      << setw(14) << "SECTION"  << ": " << SECTION  << endl;

	// PROCESSING � This will adjust setws and format appropriately
	// based on if this is a lab �L� or assignment
	if (toupper(asType) == 'L')
	{
		cout << "* LAB #" << setw(9);
	}
	else
	 {
		cout << "* ASSIGNMENT #" << setw(2);
	 }
	cout << asNum << ": " << asName << endl;
	cout << "**************************************************\n\n";
	cout << right;
}
