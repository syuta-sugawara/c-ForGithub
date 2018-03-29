
/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment E
 Problem E1
 This program computes and prints the solution of the equation ax2 + bx + c.
 */



#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
    int a,b,c;
    double x;
    double x1 , x2;
    cout<< "enter a :";
    cin >> a ;
    cout<<"enter b :";
    cin >> b ;
    cout << "enter c :";
    cin>> c;
    if (a==0 && b==0 && c==0) {
        cout<< " Any value of x is a solution. ";
    }else if(a==0 && b==0 && c!=0){
        cout<<" No solution exists.";
    }else if( a==0 && b != 0 ){
        x = (-1*c)/b;
        cout << x;
    }else if ( 0 == ( pow(b,2.0) - (4*a*c) )){
        x= (-1*b)/(2*a);
        cout << x ;
    }else if(( pow(b,2.0)- (4*a*c) )>0){
        x1 = ( -1 * b + sqrt(pow(b , 2.0) -1 * 4 * a * c) ) / (2*a);
        x2 = ( -1 * b - sqrt(pow(b , 2.0) -1 * 4 * a * c) ) / (2*a);
        cout<<x1<<","<<x2;
        
    }else if(( pow(b,2.0)- (4*a*b) )<0){
        cout<<"The solutions have an imaginary component.";
    }else{
    }
    return 0;
}

/* enter a :0
 enter b :0
 enter c :0
 Any value of x is a solution.
 
 enter a :0
 enter b :0
 enter c :4
 No solution exists.
 
 enter a :0
 enter b :8
 enter c :-12
 1
 
 enter a :2
 enter b :4
 enter c :2
 -1
 
 enter a :2
 enter b :2
 enter c :0
 0,-1
 
 enter a :100
 enter b :100
 enter c :-11
 0.1,-1.1
 
 enter a :1
 enter b :1
 enter c :0
 0,-1 */
