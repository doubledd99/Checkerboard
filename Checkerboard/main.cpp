/*
	Daniel Dooley
	C++ Fall 2019
	Due: 9-12-19
	Lab 2 Exploring Output
	Write a program that displays a checkerboard pattern made of stars and blanks.
	A checkerboard is eight squares by eight squares.
*/
#include <iostream>

using namespace std;

//two strings that define one line of the checkerboard
const string one;
const string two;
int main() {
	const string one = "*		*		*		*	";
	const string two = "	*		*		*		*";
	
	//establishes a number to be progressed +1 to make 2 lines 4 times. 
	//Which yields 8 lines of a checkerboard
	int count = 0;

	//a loop that is true and runs 4 times, which makes 4x2 lines of checkerboard
	while (count < 4) {
		cout << one << endl << two << endl;
		//incriments the count variable +1 each time the while loop is true
		count++;
	}
	return 0;
}