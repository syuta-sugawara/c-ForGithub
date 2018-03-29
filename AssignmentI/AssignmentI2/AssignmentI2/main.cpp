/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment I
 Problem I2
 
 This program asks the user to input integers ,puts them in an array,and then computes the sum of the contents of the array. Finally, it outputs the integers in the array and the sum of them on the screen.
 */

#include <iostream>

using namespace std;
void getData(int [],int);
int computeTotal(int [],int);
void printAll(int [],int);

int main(void) {
    
    const int SIZE=4;
    int numbers[SIZE];
    int sum;
    getData(numbers,SIZE);
    sum=computeTotal(numbers,SIZE);
    printAll(numbers,sum);
    
    return 0;
}

//***********************************************************************
// Definition of function getData.                                      *
// It asks the user for the data and puts it in the array               *
//***********************************************************************

void getData(int array1[],int size1){
    for(int i=0;i<=(size1-1);i++){
        cout<<"Enter numbers :";
        cin>> array1[i];
    }
}

//***************************************************************
//Definition of function computeTotal.                          *
//It comuputes the sum of the numbers in the array and return   *
//the total to the main function                                *
//***************************************************************

int computeTotal(int array2[],int size2){
    int sum=0;
    for(int i=0;i<=(size2-1);i++){
        sum+=array2[i];
    }
    return sum;
}

//***************************************************************
//Definition of function printAll.                              *
//It prints the values from the array and their sum .           *
//***************************************************************

void printAll(int array3[],int total){
    cout<<array3[0]<<'+'<<array3[1]<<'+'<<array3[2]<<'+'<<array3[3]<<'='<<total<<endl;
}
 

/*
Execution results:
 Enter numbers :4
 Enter numbers :6
 Enter numbers :9
 Enter numbers :12
 4+6+9+12=31
 
Execution results:
 Enter numbers :1
 Enter numbers :7
 Enter numbers :9
 Enter numbers :15
 1+7+9+15=32
 */


/*

#include <iostream>

using namespace std;
void getData(int []);
int computeTotal(int []);
void printAll(int [],int);
const int SIZE=4;
int main(void) {
    
    int numbers[SIZE];
    int sum;
    getData(numbers);
    sum=computeTotal(numbers);
    printAll(numbers,sum);
    
    return 0;
}

//***********************************************************************
// Definition of function getData.                                      *
// It asks the user for the data and puts it in the array               *
//***********************************************************************

void getData(int array1[]){
    for(int i=0;i<=(SIZE-1);i++){
        cout<<"Enter numbers :";
        cin>> array1[i];
    }
}

//***************************************************************
//Definition of function computeTotal.                          *
//It comuputes the sum of the numbers in the array and return   *
//the total to the main function                                *
//***************************************************************

int computeTotal(int array2[]){
    int sum=0;
    for(int i=0;i<=(SIZE-1);i++){
        sum+=array2[i];
    }
    return sum;
}

//***************************************************************
//Definition of function printAll.                              *
//It prints the values from the array and their sum .           *
//***************************************************************

void printAll(int array3[],int total){
    
    for(int y=0;y <= (SIZE-1);y++){
        cout<<array3[y];
        if(y<=(SIZE-2)){
            cout<< '+';}
    }
    cout<<'='<<total<<endl;
  
    
}

*/
