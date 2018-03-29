/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment f
 Problem F2
 
 This program reads
 time and speed from the keyboard , computes distance and then, prints them.
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main(void) {
    
    int speed;
    int time;
    int distance;
    
    
    cout <<"What is the speed of vehicle in mph ? ";
    cin >> speed;
    cout << "How many hours has it traveled ? " ;
    cin >> time;
    
    while( speed<0 || time < 1  ){
        
        cout<<"Speed can not be a negative number and  you can not enter  less than 1 as time."<<endl;
        cout<<"please correct data."<<endl;
        
        cout <<"What is the speed of vehicle in mph ? ";
        cin >> speed;
        cout << "How many hours has it traveled ? " ;
        cin >> time;
    }
    
    distance = speed * time ;
    
    cout<<"Hour Distance Traveled "<<endl;
    cout<<"-----------------------"<<endl;
    
    
    for(int hour = 1;hour<=time;hour++){
        
       
    
        cout<<setw(3)<<right<<hour<<setw(13)<<right<<distance<<endl;
        
        
    }

    
    return 0;
}

/*
 What is the speed of vehicle in mph ? -2
 How many hours has it traveled ? -1
 Speed can not be a negative number and  you can not enter  less than 1 as time.
 please correct data.
 What is the speed of vehicle in mph ? -1
 How many hours has it traveled ? 0
 Speed can not be a negative number and  you can not enter  less than 1 as time.
 please correct data.
 What is the speed of vehicle in mph ? 0
 How many hours has it traveled ? 1
 Hour Distance Traveled
 -----------------------
 1            0
 
 
 What is the speed of vehicle in mph ? 20
 How many hours has it traveled ? 5
 Hour Distance Traveled
 -----------------------
 1          100
 2          100
 3          100
 4          100
 5          100
 
 
 */
 
 

