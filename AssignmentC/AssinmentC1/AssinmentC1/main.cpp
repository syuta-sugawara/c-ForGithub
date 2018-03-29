/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment c
 Problem c1
 
 This program reads
 Celsius from the keyboard and convert from Celsius to Fahrenheit.And
 then,it outputs Celsius and Fahrenhei with one decimal position.
 */
#include <iostream>
#include <iomanip>

using namespace std;
int main(void) {
    
    double celsius;
    double fahrenheit ;
    const double FRACTION_NUMBER = 1.8;
    const double FREEZING_POINT = 32.0;
    
    cout << setprecision(1)<<fixed;
    cout<<"Enter a temperature in Celsius: ";
    cin >> celsius;
    
    fahrenheit  =  celsius  * FRACTION_NUMBER + FREEZING_POINT ;
    
    cout <<celsius<<endl<<fahrenheit<<endl;
    return 0;
}
/*
 Execution results:

 First test input 37.778 degrees Celsius
 Enter a temperature in Celsius: 37.778
 37.8
 100.0
 
 Second test input -40 degrees Celsius
 Enter a temperature in Celsius:  -40
 -40.0
 -40.0
 
 Third test input 0 degrees Celsius
 Enter a temperature in Celsius: 0
 0.0
 32.0
 
 */
