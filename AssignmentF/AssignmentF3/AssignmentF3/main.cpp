/* Syuta Sugawara (Syuta)
 CIS 22A Winter 2018
 Laboratory Assignment F
 Problem F3

 This program ask user to choose number and size ,and then return each pattern.
 
 */

#include <iostream>

using namespace std;
int main(void) {
   
    int number;
    int number2;

    
    cout << "Choose the number from this"<<endl;
    cout<<"1. Square   pattern"<<endl;
    cout<<"2. Triangle pattern"<<endl;
    cout<<"3. Diagonal pattern"<<endl;
    cout<<"4. Reverse diagonal pattern"<<endl;
    cout<<"5. Quit"<<endl;
    
    cin >> number;
   
    while(number<1 || number>5){
        
        cout << "Choose the number from 1 to 5" <<endl;
        cin >>number;
    }
    
    while(number==1 || number==2 || number==3 || number==4){
    
    switch(number){
    
        case 1:{
            cout<<"Enter a size , from 1 to 9 : ";
            cin >> number2;
            
            while (number2<1 || number2>9)
            {
                cout<<"You entered invalid number "<<endl;
                cout<<"please enter a number ,from 1 to 9 : "<<endl;
                cin>>number2;
            }
            
            for(int i=1; i<=number2;i++){
                for(int n=1;n<=number2;n++)
                {cout <<number2;}
                cout<<endl;
            }
            
            
        }
            
            
        break;
        
        case 2:{
            
            cout << "please enter a size , from 1 to 9 : " ;
            cin>> number2;
            
            while(number2<1 || number2>9){
                cout<<"You entered invalid number : " << endl;
                cout<<"please enter a number ,from 1 to 9 :";
                cin>>number2;

            }
            
            for (int i=0;i<number2;i++)
            {
                for(int n=0;n<=i;n++)
                {cout<<number2;}
                cout<<endl;
            }
        
        }
        break;
        
            
            
        case 3:{
            
            cout<< "please enter a size , from 1 to 9 : ";
            cin>>number2;
            
            while(number2<1 || number2>9){
                cout<<"You entered invalid number " << endl;
                cout<<"please enter a number ,from 1 to 9 : ";
                cin>>number2;
            }
            
            for (int i=0;i<number2;i++)
            {
                for (int n=0; n<number2 ;n++)
                    if (i==n)
                    {cout<<number2;}
                    else{cout<<"*"; }
                cout<<endl;
            }
            
            
        }
        break;
        
        
        case 4:{
            
            cout<< "please enter a size , from 1 to 9 : ";
            cin>>number2;
            
            while(number2<1 || number2>9){
                cout<<"You entered invalid number : " << endl;
                cout<<"please enter a number ,from 1 to 9 : ";
                cin>>number2;
            }
        
            for (int i=0; i<number2; i++)
            {
                for (int n=1; n<=number2; n++)
                    if (i==number2-n){
                        cout<<number2;}
                    else{
                        cout<<"*";}
                cout<<endl;
            }
        
        
        }
        break;
    }
    
        cout<<"Enter another number from the menu : ";
        cin>>number;
        
        
        while (number<1 || number>5)
        {
            cout<<"The number should be 1 to 5, please enter a number : "<<endl;
            cin>>number;
        }
        
        if(number==5){
            cout <<" Quit"<< endl;
        }
        
    }
    
    
    
    return 0;
}

/*
 Choose the number from this
 1. Square   pattern
 2. Triangle pattern
 3. Diagonal pattern
 4. Reverse diagonal pattern
 5. Quit
 9
 Choose the number from 1 to 5
 1
 Enter a size , from 1 to 9 : 11
 You entered invalid number
 please enter a number ,from 1 to 9 :
 3
 333
 333
 333
 Enter another number from the menu : 2
 please enter a size , from 1 to 9 : 4
 4
 44
 444
 4444
 Enter another number from the menu : 3
 please enter a size , from 1 to 9 : 5
 5****
 *5***
 **5**
 ***5*
 ****5
 Enter another number from the menu : 4
 please enter a size , from 1 to 9 : 6
 *****6
 ****6*
 ***6**
 **6***
 *6****
 6*****
 Enter another number from the menu : 5
 Quit

 
 
 */

