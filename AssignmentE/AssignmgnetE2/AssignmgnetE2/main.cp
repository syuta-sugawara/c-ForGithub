
#include <iostream>
using namespace std;
int main(void) {
    int test1;
    int test2;
    int test3;
    
    int average;
    cout<<"Enter score of test1 :";
    cin>> test1;
    cout<<"Enter score of test2 :";
    cin>> test2;
    cout<<"Enter score of test3 :";
    cin>> test3;
    
    average = (test1+test2+test3)/3;
    
    if(average>=90){
        cout<<"Your grade is A";
        
    }else if(average>=80){
        cout<<"Your grade is B";
        
    }else if(average>=70){
        cout<<"Your grade is C";
        
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
