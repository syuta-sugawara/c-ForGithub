/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment D
 Problem D2
 This program reads the number of small boxes ,the number of medium boxes and the number of large boxes from the keyboard  and compute the total costs of small boxes,the total costs of medium boxes , the total costs of large boxes and the total costs of all boxes . And then, it outputs each value.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
    const double SMALL_BEADS= 9.20;
    const double MEDIUM_BEADS=8.52;
    const double LARGE_BEADS=7.98;
    int number_of_small_beads;
    int number_of_medium_beads;
    int number_of_large_beads;
    
    cout <<"how many boxes of small beads do you want? : ";
    cin >> number_of_small_beads;
    cout <<"how many boxes of midium beads do you want? : ";
    cin >> number_of_medium_beads;
    cout <<"how many boxes of large beads do you want? : ";
    cin >>number_of_large_beads;
    
    double totals_small = SMALL_BEADS * number_of_small_beads;
    double totals_medium= MEDIUM_BEADS *number_of_medium_beads;
    double totals_large = LARGE_BEADS * number_of_large_beads;
    double all_totals = totals_small + totals_medium + totals_large;
    cout<<showpoint;
    cout<<setprecision(2)<<fixed;
    cout<<left<<setw(6)<<"SIZE"<<right<<setw(6)<<"BOXES"<<right<<setw(14)<<"COST PER BOX"<<right<<setw(8)<<"TOTALS"<<endl;
　　cout<<left<<setw(6)<<"Small"<<right<<setw(6)<<number_of_small_beads<<right<<setw(14)<<SMALL_BEADS<<right<<setw(8)<<totals_small<<endl;
　cout<<left<<setw(6)<<"Medium"<<right<<setw(6)<<number_of_medium_beads<<right<<setw(14)<<MEDIUM_BEADS<<right<<setw(8)<<totals_medium<<endl;
    cout<<left<<setw(6)<< "Large"<<right<<setw(6)<<number_of_large_beads<<right<<setw(14)<<LARGE_BEADS<<right<<setw(8)<<totals_large<<endl;
    cout<<left<<setw(6)<< "TOTAL"<<right<<setw(28)<<all_totals<<endl;
    return 0; }
/*Execution results:
 Test the program user input of 9 boxes of small beads, 8 boxes of medium beads, and 7 boxes of large beads.
 how many boxes of small beads do you want? : 9
 how many boxes of midium beads do you want? : 8
 how many boxes of large beads do you want? : 7
 
 SIZE   BOXES  COST PER BOX  TOTALS
 Small      9          9.20   82.80
 Medium     8          8.52   68.16
 Large      7          7.98   55.86
 TOTAL                       206.82 */

