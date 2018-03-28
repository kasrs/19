/******************************************************************************
* AUTHORS    : Kasra Tabib & Sebastian Hooshmand
* LAB #19    : Buddy's Average Sheep Age Calculator
* CLASS      : CS1A
* SECTION    : MW: 8am
* DUE DATE   : 3/28/18
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/******************************************************************************
 * Buddy's Average Sheep Age Calculator
 *-----------------------------------------------------------------------------
 *	This program will output the average age of sheep, a general description
 *		of their age
 *-----------------------------------------------------------------------------
 * INPUT:
 *    sheepAge			: age of the sheep
 *
 * OUTPUT:
 * 	  averageAge		: average age of the sheep
 *****************************************************************************/
int main()
{

	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMERS 	: Programmer's name
	 * CLASS       	: Student's Course
	 * SECTION     	: Class Days and Times
	 * LAB_NUM     	: Lab Number (specific to this lab)
	 * LAB_NAME    	: Title of the Lab
	 * END_LOOP		: Constant used for setw
	 * COL_WID		: Constant used for setw
	 *************************************************************************/
	const char PROGRAMMERS []   = "Kasra Tabib & Sebastian Hooshmand";
	const char CLASS[]          = "CS1A";
	const char SECTION []       = "MW: 8am-11:50am";
	const int  LAB_NUM          = 19;
	const char LAB_NAME[]       = "Buddy's Average Sheep Age Calculator";
	const int  END_LOOP			= 3;
	const int  COL_WID			= 15;

	// Variable Declarations
	int 	sheepAge;		// IN and CALC	- the age of sheep
	float 	totalAge;		// CALC	- total age of all sheep
	float	averageAge;		// CALC	- average age of all sheep
	float 	sheepCount;		// CALC	- total number of sheep
	int 	count;			// CALC - LCV for the for loop


	// OUTPUT - Class Heading
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMERS << endl;
	cout << "*  "      << setw(14) << "CLASS"     << ": " << CLASS    << endl;
	cout << "*  "      << setw(14) << "SECTION"   << ": " << SECTION  << endl;
	cout << "*  LAB #" << setw(9)  << LAB_NUM     << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/**************************************************************************
	* INPUT - read's in the ages of the sheep.
	**************************************************************************/


	for(count = 1;count <= END_LOOP; count = count + 1)
	{
		sheepCount 	= 0;	// initialize sheep count
		totalAge	= 0;	// initialize the total age of sheep

		cout << "TEST # " << count << ":" << endl;
		cout << "Welcome to Buddy's Average Sheep Age Calculator!";
		cout << endl << endl;
		cout << setw(45)
			 <<	"Enter in the sheep ages, input -1 to exit" << endl;



		do
		{
			cout << setw(COL_WID)	<< " Sheep Age: ";
			cin  >> sheepAge;
			cin.ignore(1000,'\n');

			if(sheepAge > 9)
			{
				cout	<< endl;
				cout 	<< "*** Invalid sheep age - please input a value less"
						<< " than or equal to 9!" << endl << endl;
			}

		}while (sheepAge > 9);



		while(sheepAge > -1)
		{

			sheepCount = sheepCount + 1;
			totalAge   = totalAge + sheepAge;

				do
				{
					cout << setw(COL_WID) 	<< " Sheep Age: ";
					cin  >> sheepAge;
					cin.ignore(1000,'\n');

					if(sheepAge > 9)
					{
						cout	<< endl;
						cout << "*** Invalid sheep age - please input a value "
							<< "less than or equal to 9!" << endl << endl;
					}

				}while (sheepAge > 9 );

		}

		/**********************************************************************
		* CALC & OUT - the average age of sheep and the description of age
		**********************************************************************/

		averageAge = totalAge / sheepCount;


		cout	 << setprecision(1)		<< fixed;
		cout	 << endl				<< setw(30)
				 << "On average your sheep are "
				 << averageAge			<< " years old! "
				 << endl;

		cout	 << setw(31)		<< "In general, your sheep are ";

		if(averageAge <= 3)
		{
			cout << "BABIES!";
		}
		else if(averageAge >= 6)
		{
			cout << "AGING - time to breed!";
		}
		else
		{
			cout << "MIDDLE-AGED!";
		}
		cout 	 << endl << endl << endl <<endl;
	}

	cout << "Thank you for using Buddy's Average sheep Age Calculator!";
	cout << endl << "Have a great day! ! :)";

	return 0;
}













