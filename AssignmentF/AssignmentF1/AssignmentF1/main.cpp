
/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment F
 Problem F1
 
 This program reads
 two integers from the keyboard ,computes the square roots and
 then,it outputs them.
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(void) {
    int first;
    int second;
    int i;
    i = 0;
    double sq;
    
    cout << "Enter the two integer. Both of them must be at least 1 and not larger than 20. \n The second integer must be equal to, or larger than, the first integer";
    cout<< "Enter the first integer : ";
    cin >> first;
    cout<< "Enter the second integer : ";
    cin >> second;
    
    do{
        
        if(i>0){
            cout << "Please enter the correct integers"<<endl<<"Enter the two integer,one more time. Both of them must be at least 1 and not larger than 20. \n The second integer must be equal to, or larger than, the first integer";
            cout<< "Enter the first integer : ";
            cin >> first;
            cout<< "Enter the second integer : ";
            cin >> second;
        }
        
        i++;
    
        
    }while(first > second || 1 > first || first >20 || 1>second || second>20);
    
    cout<< setprecision(4)<<fixed;
    
    cout<<setw(7)<<right<<"INTEGER"<<setw(15)<<right<<"SQUARE ROOT"<<endl;
    
    for(int number = first ; number<=second ;number++){
        
        sq=sqrt(number);
        cout <<setw(7)<<right<<number<<setw(15)<<right<<sq<<endl;
        
    }
    
    return 0;
}



/*
 
 
 Enter the two integer. Both of them must be at least 1 and not larger than 20.
 The second integer must be equal to, or larger than, the first integerEnter the first integer : 2
 Enter the second integer : 0
 Please enter the correct integers
 Enter the two integer,one more time. Both of them must be at least 1 and not larger than 20.
 The second integer must be equal to, or larger than, the first integerEnter the first integer : 2
 Enter the second integer : 4
 INTEGER    SQUARE ROOT
       2         1.4142
       3         1.7321
       4         2.0000
 
 
 Enter the two integer. Both of them must be at least 1 and not larger than 20.
 The second integer must be equal to, or larger than, the first integerEnter the first integer : 21
 Enter the second integer : 5
 Please enter the correct integers
 Enter the two integer,one more time. Both of them must be at least 1 and not larger than 20.
 The second integer must be equal to, or larger than, the first integerEnter the first integer : 5
 Enter the second integer : 5
 INTEGER    SQUARE ROOT
       5         2.2361
 
 
 
 
 
 */
