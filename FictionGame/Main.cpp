/*/////////////////////////////////////////////////////////////////////////////////////////
								Program start
*/////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>	//in and out stream


using namespace std;	//using standard libary namespace

void intro();  //declaring function
void left();	//declaring function
void right();	//declaring function

int main() {		//start main function
	intro();		//run intro function
	
	return 0;	//end program
}

void intro() {		//start intro helper function
	int path; 
	cout << "\n--The Path--" << endl;	//console out title
	cout << "\n-----------------------------------------------------------" << endl;		//spacer bar
	cout << "\n\n" << endl;		//new lines
	cout << "In this game you will choice a path to determie where you go." << endl;// rules
	cout << "You come to a fork in the road on the right there is a dark and creepy path and on the left a sunny brick pathway. " << endl;//story
	cout << "Choice:. " << endl;		//choice
	cout << "Enter 1 to go on the dark path" << endl;	//choice 1
	cout << "Enter 0 to go on the dark path" << endl;		//choice 2
	cin >> path;		//take input
	if (path == 0) {		//if 0 is entered

		right();	//run helper function right
	}
	if (path == 1) {		//if 1 is entered

		left();		//run helper function left
	}

}

void left() {		//start of helper function left

	cout << "you survived" << endl;		//display you survived
	system("pause");		//pause screen 

}
void right() {		//start of helper function right

	cout << "you died" << endl;		//display you died
	system("pause");		//pause screen 

}
/*/////////////////////////////////////////////////////////////////////////////////////////
								Program end
*/////////////////////////////////////////////////////////////////////////////////////////