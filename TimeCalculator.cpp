// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here


// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	double choice, minutes, hours, days;

	// Inform user what program does
	cout << "This program converts the number of seconds entered by a user to minutes, hours, and days.\n" << endl;

	// Prompt user to enter data needed by the program
	cout << "Enter a number of seconds: ";
	cin >> choice;

	// A software algorithm would typically be executed after all data has been input
	if (choice >= 60)
	{
		minutes = choice / 60;
		cout << "There are " << minutes << " minutes in " << choice << " seconds.\n";

		if (choice >= 3600)
		{
			hours = choice / 3600;
			cout << "There are " << hours << " hours in " << choice << " seconds.\n";

			if (choice >= 86400)
			{
				days = choice / 86400;
				cout << "There are " << days << " days in " << choice << " seconds.\n";
			}
		}
	}
	

	// Program output done at end of program
	

	// This line of code holds the VC++ Console window
	system("pause");

	// Returns a value to the calling program
	return(0);

}


// PROOF
// Program output copied into the below comment section
/*
PROOF1:
This program converts the number of seconds entered by a user to minutes, hours, and days.

Enter a number of seconds: 405679
There are 6761.32 minutes in 405679 seconds.
There are 112.689 hours in 405679 seconds.
There are 4.69536 days in 405679 seconds.
Press any key to continue . . .

PROOF2:
This program converts the number of seconds entered by a user to minutes, hours, and days.

Enter a number of seconds: 89999
There are 1499.98 minutes in 89999 seconds.
There are 24.9997 hours in 89999 seconds.
There are 1.04166 days in 89999 seconds.
Press any key to continue . . .

PROOF3:
This program converts the number of seconds entered by a user to minutes, hours, and days.

Enter a number of seconds: 4000
There are 66.6667 minutes in 4000 seconds.
There are 1.11111 hours in 4000 seconds.
Press any key to continue . . .

PROOF4:
This program converts the number of seconds entered by a user to minutes, hours, and days.

Enter a number of seconds: 2000
There are 33.3333 minutes in 2000 seconds.
Press any key to continue . . .
*/