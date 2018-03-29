/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment G
 Problem G2
 
 This program reads two integers , computes the sum of the integers by using a sum function
 and prints the integers and the sum of the integers.  */

#include <iostream>
using namespace std;

int sum(int num1,int num2);

int main(void) {
    
    int value1, value2;
    int total;
    
    cout << "Enter value1 :" ;
    cin >> value1 ;
    cout << "Enter value2 :";
    cin >> value2 ;
    
    total = sum (value1,value2);
    
    cout<< "The value1 is " <<value1<<'.'<<endl<<"The value2 is "<<value2<<'.'<<endl
    <<"The sum of the value1 and the value2 is "<< total<<endl;
    
    cout << "Enter value1 :" ;
    cin >> value1 ;
    cout << "Enter value2 :";
    cin >> value2 ;
    
    total = sum (value1,value2);
    
    cout<< "The value1 is " <<value1<<'.'<<endl<<"The value2 is "<<value2<<'.'<<endl
    <<"The sum of the value1 and the value2 is "<< total<<endl;
    
    return 0;
}

//***********************************************************************
// Definition of function sum.                                          *
// It uses two integers and returns the sum of the integers.            *
//***********************************************************************

int sum(int num1,int num2){

    int result;
    
    result = num1 + num2;
    
    return result;
    }

/*
 Execution results:
 
 The first test is shown below.
 
 Enter value1 :3
 Enter value2 :4
 The value1 is 3.
 The value2 is 4.
 The sum of the value1 and the value2 is 7
 Enter value1 :5
 Enter value2 :49
 The value1 is 5.
 The value2 is 49.
 The sum of the value1 and the value2 is 54
 */
