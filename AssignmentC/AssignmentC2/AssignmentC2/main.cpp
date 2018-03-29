/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment c
 Problem c2
 This program reads a name and print the name you entered.
 */

#include <iostream>
#include<string>

using namespace std;
int main(void) {
    string fullName;
    cout<<"Enter your name: ";
    getline(cin,fullName);
    cout<< fullName<<endl;
    return 0;
    
}
/*
 Execution results:
 Enter your name: George Washington
 George Washington
 
 Enter your name: Franklin Delano Roosevelt
 Franklin Delano Roosevelt
 
 */

