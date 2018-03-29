/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment c
 Problem c3
 This program reads full name from the keyboard and displays the initials.
 
 */

#include <iostream>
#include <string>

using namespace std;
int main(void) {
   
    char firstInitial;
    char lastInitial;
    
    cout<< "Enter your first and last name :";
    
    cin.get(firstInitial);
    
    cin.ignore(256, ' ');
    
    cin.get(lastInitial);
    
    cout << firstInitial<<lastInitial<<endl;

    return 0;
}
/*
 Execution results:
 Enter your first and last name :Harry Truman
 HT
 
 */


