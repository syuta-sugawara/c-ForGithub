
/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment H
 Problem H1
 
 This program asks the user to input three integers, computes the sum of three integers and then outputs it on the screen.
 */

#include <iostream>

void getData(int &first2,int &second2,int &third2);
void computeTotal(int &first2,int &second2,int &third2,int &total2);
void printAll(int &first2,int &second2,int &third2,int &total2);

using namespace std;
int main(void) {
    int first,second,third,total;
    
    getData(first,second,third);
    computeTotal(first,second,third,total);
    printAll(first,second,third,total);
    
    return 0;
}

//***********************************************************************
// Definition of function getData.                                      *
// It asks user to enter thiree integers.                               *
//***********************************************************************


void getData(int &first2,int &second2,int &third2){
    
    cin >> first2;
    cin >> second2;
    cin >> third2;
    
}

//***********************************************************************
// Definition of function computeTotal.                                 *
// It computes sum of the integers.                                     *
//***********************************************************************


void computeTotal(int &first2,int &second2,int &third2,int &total2){
    total2 = first2 + second2 + third2;
}

//***********************************************************************
// Definition of function printAll.                                     *
// It print three integers and outputs the sum of the integers.         *
//***********************************************************************

void printAll(int &first2,int &second2,int &third2,int &total2){
    cout <<first2<<'+'<<second2<<'+'<<third2<<'='<<total2<<endl;
    
}

/*
 Execution results:

 4
 5
 6
 4+5+6=15

 */


