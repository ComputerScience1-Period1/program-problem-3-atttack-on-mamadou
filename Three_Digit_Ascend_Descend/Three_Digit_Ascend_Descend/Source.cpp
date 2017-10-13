/*

Shabab Haque, Louis Yang, Mamadou Diallo - 1

Assignment Name : Three_Digit_Ascend_Descend_Selection

Check to see if a number is ascending or descending

*/

// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std;

// Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN

void main() {

int x;

cout << "Enter a three digit number: \n";
cin >> x; // puts the 3 digit number code into a variable
	int i = 0;
	while (i < 30 {
		i = i + 1;

int a = (x/100)%10; // puts the first digit as A
int b = (x/10)%10; // puts the second digit as B
int c = x%10; // puts the thrid digit as C

if (c > b) {
	if(b > a) {
		cout << "It is ascending. \n";
	}
}

else if (a > b) {
	if(b > c) {
		cout << "It is descending. \n";
	}
}

else {
	cout << "It is neither. \n";
}
	};
	pause(); // pauses to see the displayed text
}
