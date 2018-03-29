/*
 
 Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment H
 Problem H2
 This program asks the user to input integers or dicimals, computes the sum of integers or decimals and then outputs it on the screen.
 
 */


#include <iostream>

using namespace std;

void getData(int &first2,int &second2,int &third2, int &fourth2,double &decimalOne2,double &decimalTwo2);

int computeTotal(int first4 ,int second4,int third4);

void printAll(int &first4a,int &second4a,int &total4a);
void printAll(int &first4b,int &second4b,int &third4b ,int &total4b);

int computeTotal(int first5,int second5,int third5, int fourth5);
void printAll(int &first5,int &second5,int &third5,int &fourth5,int &total5);

double computeTotal(double decimalOne2,double decimalTwo2);
void printAll(double &decimalOne,double &decimalTwo, double &decimalTotal);

int main(void) {
    
    int first=0;
    int second=0;
    int third=0;
    int fourth=0;
    int total = 0;
    double decimalOne=0;
    double decimalTwo=0;
    double decimalTotal=0;
    
    getData(first,second,third,fourth,decimalOne,decimalTwo);
   
   // if(first && second && !third && !fourth )
    //{
    total=computeTotal(first,second,third);
    printAll(first,second,total);
    //}
   // else if(first && second && third && !fourth)
    //{
    total=computeTotal(first,second,third);
    printAll(first,second,third,total);
    //}
    //else if(first && second && third && fourth)
    //{
    total=computeTotal(first,second,third,fourth);
    printAll(first,second,third,fourth,total);
    //}
    
    //if(decimalOne && decimalTwo){
    decimalTotal= computeTotal(decimalOne,decimalTwo);
    printAll(decimalOne,decimalTwo,decimalTotal);
      //      }
    
    return 0;
}


//***********************************************************************
// Definition of function getData.                                      *
// It ask an user to enter integers  or decimals                        *
//***********************************************************************

void getData(int &first2,int &second2,int &third2, int &fourth2,double &decimalOne2,double &decimalTwo2){
   /*
    int UserInput;
    
    cout<<"Which case do you wanna use ?"<<endl;
    cout<<"1: Computing two integers"<<endl;
    cout<<"2: Computing three integers"<<endl;
    cout<<"3: Computing four integers"<<endl;
    cout<<"4: Computing two decimal numbers"<<endl;
    cout<<"5: Computing four integers and two decimal numbers"<<endl;
    cin>> UserInput;
    
    switch (UserInput) {
        case 1:
            cin >> first2;
            cin >> second2;
            break;
            
            
        case 2:
            cin >> first2;
            cin >> second2;
            cin >> third2;
            break;
            
            
        case 3:
            cin >> first2;
            cin >> second2;
            cin >> third2;
            cin>> fourth2;
            break;
            
        case 4:
            cin >>decimalOne2;
            cin >>decimalTwo2;
            break;
            
        case 5:
            cin >>first2;
            cin >>second2;
            cin >>third2;
            cin >>fourth2;
            cin >>decimalOne2;
            cin >>decimalTwo2;
            break;
            
        default:
            break;
       }
*/
    
    cout<<"Input the numbers :"<<endl;
    cin >>first2;
    cin >>second2;
    cin >>third2;
    cin >>fourth2;
    cin >>decimalOne2;
    cin >>decimalTwo2;
    }

//***********************************************************************
// Definition of function computeTotal.                                 *
// It computes the sum of integers.                                     *
//***********************************************************************

int computeTotal(int first4,int second4,int third4=0){
    return first4 + second4 + third4;
    
}

//***********************************************************************
// Definition of function printAll.                                     *
// It prints  integers  and the sum of them .                            *
//***********************************************************************

void printAll(int &first4a,int &second4a,int &total4a){
     cout<<"For integers:"<<endl;
    cout <<first4a<<'+'<<second4a<<'='<<total4a<<endl;

}

//***********************************************************************
// Definition of function printAll.                                     *
// It prints  integers  and the sum of them .                           *
//***********************************************************************


void printAll(int &first4b,int &second4b,int &third4b ,int &total4b){
      cout<<"For integers:"<<endl;
    cout <<first4b<<'+'<<second4b<<'+'<< third4b <<'='<<total4b<<endl;
    
}

//***********************************************************************
// Definition of function computeTotal.                                 *
// It computes the sum of integers.                                     *
//***********************************************************************


int computeTotal(int first5,int second5,int third5, int fourth5){
    return first5 + second5 + third5 + fourth5;
    
}

//***********************************************************************
// Definition of function printAll.                                     *
// It prints  integers  and the sum of them .                           *
//***********************************************************************


void printAll(int &first5,int &second5,int &third5, int &fourth5,int &total5){
    cout<<"For integers:"<<endl;
    cout <<first5<<'+'<<second5<<'+'<<third5<<'+'<<fourth5 <<'='<<total5<<endl;
    
}

//***********************************************************************
// Definition of function computeTotal.                                 *
// It computes the sum of decimals.                                     *
//***********************************************************************


double computeTotal(double decimalOne2,double decimalTwo2){
    cout<<"For decimal numbers"<<endl;
    return decimalOne2 + decimalTwo2 ;
    
}

//***********************************************************************
// Definition of function printAll.                                     *
// It prints  integers  and the sum of them .                           *
//***********************************************************************


void printAll(double &decimalOne2,double &decimalTwo2,double &decimalTotal2){
    cout<<decimalOne2<<'+'<<decimalTwo2<<'='<<decimalTotal2<<endl;
}

/*
 Execution results:
 
 Which case do you wanna use ?
 1: Computing two integers
 2: Computing three integers
 3: Computing four integers
 4: Computing two decimal numbers
 5: Computing four integers and two decimal numbers
 5
 4
 5
 6
 7
 8.1234
 9.5678
 
 
 For integers:
 4+5+6+7=22
 For decimal numbers
 8.1234+9.5678=17.6912
 
 */




