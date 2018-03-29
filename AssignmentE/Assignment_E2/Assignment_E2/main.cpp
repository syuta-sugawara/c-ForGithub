
/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment E
 Problem E2
 This program reads
 each of scores and the number of assingment if necessary from the keyboard ,and returns the grade.
 */


#include <iostream>
using namespace std;
int main(void) {
    int test1;
    int test2;
    int test3;
    double turned_in_hw;
    double total_hw;
    
    
    int average;
    cout<<"Enter score of test1 :";
    cin>> test1;
    cout<<"Enter score of test2 :";
    cin>> test2;
    cout<<"Enter score of test3 :";
    cin>> test3;
    
    average = (test1+test2+test3)/3;
    
    if(average>=90){
        cout<<"Your grade is A"<<endl;
        
    }else if(average>=80){
        cout<<"Your grade is B"<<endl;
        
    }else if(average>=70){
        cout<<"Your grade is C"<<endl;
    }else if(average<60){
        cout<<'Your grade is F';
    }else if(average>=60 && average<70){
        cout <<"Enter the number of homework assignments you turned in : ";
        cin >> turned_in_hw;
        cout <<"Enter the total number of homework assignments you receive :  ";
        cin >> total_hw;
        
        
        if ((turned_in_hw/total_hw) > 0.8){
            cout<<"Your grade is D "<<endl;
        }else{
            cout<< "Your grade is F "<<endl;
        }
        
    }
    
    return 0;
}

/*Execution results:
 
 Enter score of test1 :96
 Enter score of test2 :84
 Enter score of test3 :90
 Your grade is A
 
 Enter score of test1 :95
 Enter score of test2 :83
 Enter score of test3 :90
 Your grade is B
 
 Enter score of test1 :70
 Enter score of test2 :59
 Enter score of test3 :60
 Enter the number of homework assignments you turned in : 5
 Enter the total number of homework assignments you receive :  6
 Your grade is D
 
 Enter score of test1 :73
 Enter score of test2 :58
 Enter score of test3 :65
 Enter the number of homework assignments you turned in : 8
 Enter the total number of homework assignments you receive :  11
 Your grade is F
 
 */


