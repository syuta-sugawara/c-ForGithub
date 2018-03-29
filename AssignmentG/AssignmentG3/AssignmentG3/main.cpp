/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment G
 Problem G3
 This program reads three integers and then prints the sum of the integers ,the average of the integers and
 the smallest integer by using several functions.
 */

#include <iostream>
#include <iomanip>


using namespace std;
double findSum(double num1,double num2,double num3);
double findAverage(double totalSum,double countNum);
double findSmallest(double anum,double bnum,double cnum);

int main(void) {
    double number1;
    double number2;
    double number3;
    double total;
    double ave;
    int count= 0;
    double smallest;
    
   
    cout << "Enter number1 : ";
    cin >> number1 ;
    if(number1){
        count++;
    }
    
    cout << "Enter nubmer2 : ";
    cin >> number2 ;
    if(number2){
        count++;}
    
    cout << "Enter number3 : ";
    cin >> number3 ;
    if(number3){
        count++;}
    
    total = findSum(number1, number2,number3);
  
    ave = findAverage (total,count);
 
    smallest = findSmallest(number1,number2,number3);
    
    cout<<showpoint<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Results :"<<endl;
    cout<<setw(15)<<left<<"First  number"<<setw(6)<<right<<number1<<endl;
    cout<<setw(15)<<left<<"Second number"<<setw(6)<<right<<number2<<endl;
    cout<<setw(15)<<left<<"Third  number"<<setw(6)<<right<<number3<<endl;
    cout<<setw(15)<<left<<"Total"<<setw(6)<<right<<total<<endl;
    cout<<setw(15)<<left<<"Average"<<setw(6)<<right<< ave <<endl;
    cout<<setw(15)<<left<<"Smallest"<<setw(6)<<right<<smallest<<endl;
    
    return 0;
}

//*******************************************************************************
// Definition of function findSum.                                              *
// It outputs the sum of the integers.                                          *
//*******************************************************************************


double findSum(double num1,double num2,double num3)
{   double resultSum;
    
    resultSum = num1 + num2 + num3;
    
    return resultSum;
}

//*******************************************************************************
// Definition of function findAverage.                                          *
// It outputs the average of the sum.                                           *
//*******************************************************************************

double findAverage(double totalSum,double countNum){
    double resultAve;
    
    resultAve = (totalSum /countNum) ;
    
    return resultAve;
    
}

//*******************************************************************************
// Definition of function findAverage.                                          *
// It outputs the smallest of the integers.                                     *
//*******************************************************************************

double findSmallest(double anum,double bnum,double cnum){
    double resultSmall;
    resultSmall= anum;
    
    if(resultSmall>bnum){
        resultSmall = bnum;
    }
    if(resultSmall>cnum){
        resultSmall=cnum;
    }
    return resultSmall;
}
/*
 Execution results:
 The first test
 
 Enter number1 : 37.144
 Enter nubmer2 : 2.4144
 Enter number3 : 19
 
 Results :
 First  number   37.14
 Second number    2.41
 Third  number   19.00
 Total           58.56
 Average         19.52
 Smallest         2.41

 
 The second test
 Enter number1 :  4.23
 Enter nubmer2 :  5.78
 Enter number3 :  6.21
 
 Results :
 First  number    4.23
 Second number    5.78
 Third  number    6.21
 Total           16.22
 Average          5.41
 Smallest         4.23
 */
