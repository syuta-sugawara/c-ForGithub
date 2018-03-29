/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment B
 Problem B1
 This program displays the values of the three variables.
 */

#include <iostream>
using namespace std;

int main(void)
{
	char    letter;
	int     number;
	double  decimalNumber; 
    
    cout << "Enter a letter: ";
    cin >> letter;
    number = letter;
    decimalNumber = number;

    cout <<"Character: "<< letter << endl;
    cout <<"Number: "<< number << endl;
    cout <<"Decimal number: "<< decimalNumber << endl;
    
    return 0 ;
}

/*
 Execution results:
 Enter a letter: a
 Character: a
 Number: 97
 Decimal number: 97
 */




