
/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment A
 Problem A!
 
 This program reads
 two numbers from the keyboard and their product
 
 */

#include <iostream>

using namespace std;

int main(void)
{
    double a;
    int b;
    double product;
    
    cout << "Enter a decimal number: ";
    cin >> a ;//入力
    cout << "Enter an integral number: " ;
    cin >> b;
    
    product = a * b;
    
    cout << a << "*" << b << "=" << product << endl ;
    int temp ;
    
    cout <<"Enter an integer to close the out window: ";
    cin >> temp;
    
    return 0 ;
    
    
}

/*
 Execution results:
 
 */


