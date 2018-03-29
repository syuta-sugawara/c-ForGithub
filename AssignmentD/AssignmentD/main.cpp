/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment D
 Problem D１
 This program reads
 mass and velocity from the keyboard and compute momentum and kinetic energy.And then,it outputs compute the momentum and kinetic energy.*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {
    double mass;
    double velocity;
    double momentum;
    double kinetic_energy;
    //snake case camel case
    cout <<"Enter a mass : ";
    cin >> mass;
    cout << "Enter a velocity : ";
    cin>>velocity;
    
    cout<<setprecision(2)<<fixed;
    cout<<"Mass           :"<<setw(10)<<mass<<" Kg"<<endl;
    cout<<"Velocity       :"<<setw(10)<<velocity<<" m/s"<<endl;
    momentum = mass * velocity;
    kinetic_energy = (mass * pow(velocity,2.0) /2);
    cout<<"Momentum       :"<<setw(10)<<momentum<<" Kg m/s"<<endl;
    cout<<"Kinetic energy :"<<setw(10)<< kinetic_energy<<" Joules"<<endl;
    return 0;
}
/*Execution results:
 
 First test input 5.0 kilograms and 4.0 meters per second.
 Enter a mass : 5.0
 Enter a velocity : 4.0
 Mass           :      5.00 Kg
 Velocity       :      4.00 m/s
 Momentum       :     20.00 Kg m/s
 Kinetic energy :     40.00 Joules

 Second test input 3.15 kilograms and 10.0 meters per second.
 Enter a mass : 3.15
 Enter a velocity : 10.0
 Mass           :      3.15 Kg
 Velocity       :     10.00 m/s
 Momentum       :     31.50 Kg m/s
 Kinetic energy :    157.50 Joules
 */
