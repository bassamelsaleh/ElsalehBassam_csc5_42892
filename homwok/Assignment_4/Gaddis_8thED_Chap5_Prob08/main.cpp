/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Math Tutor
 */

//System Libraries
#include <iostream>
#include <cstdlib>  //for rand and srand
#include <ctime>    //for hte time function
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    
    float a;
    float b;
    float tot;
    float ans;
    int choice;
    float tal;
    //constants
    const int min=0;
    const int max=200;
    
    //get the system time.
    unsigned seed = time(0);
    
    //seed the random number generator.
    srand(seed);
    do{
    //display message
    cout<<"Press 1 for Addition."<<endl;
    cout<<"Press 2 for Subtraction."<<endl;
    cout<<"Press 3 for Division."<<endl;
    cout<<"Press 4 for Multiplication."<<endl;
    cout<<"Press 5 to Exit."<<endl;
    cin>>choice;
    //loop to get calculations
    
        switch(choice){
            case 1:{
                //get random numbers to solve
                a = (rand()%(max-min+1))+min;
                b = (rand()%(max-min+1))+min;
                cout<<"What is the sum?"<<endl;
                cout<<a<<endl;
                cout<<b<<endl;

                //calculation
                tot = a+b;

                cout<<"Enter your answer here"<<endl;
                cin>>ans;
                
                if(tot==ans){

                 cout<<"Correct, The answer is "<<tot
                            <<" and you answered "<<ans<<endl; 
                }
                else {
                    cout<<"sorry the answer is "<<tot<<endl;
                }
            
                break;
            }
            case 2:{
                //get random numbers to solve
                a = (rand()%(max-min+1))+min;
                b = (rand()%(max-min+1))+min;
                cout<<"What is the Difference"<<endl;
                cout<<a<<endl;
                cout<<b<<endl;

                //calculation
                tot = a-b;

                cout<<"Enter your answer here"<<endl;
                cin>>ans;
                if(tot==ans){

                cout<<"Correct, The answer is "<<tot
                            <<" and you answered "<<ans<<endl; 
                }
                else {
                    cout<<"sorry the answer is "<<tot<<endl;
                }
                        
     break;
            }
            case 3:{
                //get random numbers to solve
                a = (rand()%(max-min+1))+min;
                b = (rand()%(max-min+1))+min;
                cout<<"What is the Division?"<<endl;
                cout<<a<<endl;
                cout<<b<<endl;

                //calculation
                tot = a/b;

                cout<<"Enter your answer here (up to 3 decimal places)"<<endl;
                cin>>ans;
                
                tal=abs(tot-ans);// make tolerance for division
                
                if(tal<0.009){

                 cout<<"Correct, The answer is "<<tot
                            <<" and you answered "<<ans<<endl; 
                }
                else {
                    cout<<"sorry the answer is "<<tot<<endl;
                }
            
     break;
         }
            case 4:{
                    //get random numbers to solve
                    a = (rand()%(max-min+1))+min;
                    b = (rand()%(max-min+1))+min;
                    cout<<"What is the Product?"<<endl;
                    cout<<a<<endl;
                    cout<<b<<endl;

                    //calculation
                    tot = a*b;

                    cout<<"Enter your answer here"<<endl;
                    cin>>ans;

                   
                    if(tot==ans){

                 cout<<"Correct, The answer is "<<tot
                            <<" and you answered "<<ans<<endl; 
                }
                else {
                    cout<<"sorry the answer is "<<tot<<endl;
                } 
                
                    
         break;
            }
         
            case 5:{
                cout<<"EXIT?"<<endl;
                         break;
            }
            
    }
        if (choice>5 || choice <1) {
                cout<<"ERROR"<<endl;
            }
    }while(choice!=5);
            
        
        
       
    return 0;
}

