/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment I
 Problem I1
 This program computes the sum of contents of array and then outputs it on the screen.
 */

#include <iostream>
using namespace std;
int main(void) {
    const int SIZE =4;
    int numbers[SIZE]={4,6,9,12};
    int sum=0;
   
    for(int x=0;x <= (SIZE-1);x++){
        sum += numbers[x];
    }
    
    for(int y=0;y <= (SIZE-1);y++){
        cout<<numbers[y];
        if(y<=(SIZE-2)){
           cout<< '+';}
    }
    cout<<'='<<sum<<endl;
    return 0;
}

/*  Execution result:
    4+6+9+12=31
 */
