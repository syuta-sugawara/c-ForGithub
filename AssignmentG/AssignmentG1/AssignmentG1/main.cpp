/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment G
 Problem G1
 
 This program reads file1 that has several integers and then prints the the number of integers , the sum of the integers ,the smallest integer,the largest integer and the average of the integers.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;
int main(void) {
    ifstream infile;
    
    int number;
    double count=0;
    double sum=0;
    double average;
    int max=0;
    int min;
    
    infile.open("/Users/sugawarasyuta/Desktop/Arranging for enrollment in De anza/C/c++ForGithub/AssignmentG/AssignmentG1/file1.txt");
    
    if (!infile)
    {
        cout<< "File open failure!";
        exit(EXIT_FAILURE);
    }
    
    infile>> min;
    infile.close();
    
    infile.open("/Users/sugawarasyuta/Desktop/Arranging for enrollment in De anza/c/file1.txt");
    
    if (!infile)
    {
        cout << "File open failure!";
       
    }

    while(infile>>number){
    
        if(max<number){
            max=number;
        }
        
        if(min>number){
            min=number;
        }
        
        sum += number;
        count++;
        
    }
    infile.close();
    
    average = (sum / count);

    cout<<"The number of integers :" <<count<<endl;
    cout<<"The sum of the integers : "<<sum<<endl;
    cout<<"The smallest integer : " <<min<<endl;
    cout<<"The largest integer : "<<max<<endl;
    cout<<"The average of the integers : " << average<<endl;
    
    return 0;
}

/*
 Execution results:
 The first test
 
 The number of integers :7
 The sum of the integers : 141
 The smallest integer : 9
 The largest integer : 33
 The average of the integers : 20.1429
 
 The second test
 
 The number of integers :8
 The sum of the integers : 181
 The smallest integer : 9
 The largest integer : 40
 The average of the integers : 22.625
 
 */
