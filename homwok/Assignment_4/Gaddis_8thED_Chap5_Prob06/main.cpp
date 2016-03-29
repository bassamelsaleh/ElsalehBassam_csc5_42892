/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Distance Traveled
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float D;
    float mph;
    int hrs=0;
    int a=0;
    cout<<"What is the speed of the vehicle in mph?";
    cin>>mph;
    cout<<"How many hours has it traveled?";
    cin>>hrs;
    if(hrs==0 || mph==0){
        cout<<"You haven't traveled any distance"<<endl;
    }
    else{
    cout<<"Hours     Distance"<<endl;
    
    //loop to get calculations
    while(a<hrs){
        a++;
        D=mph*a;
        cout<<setprecision(2)<<fixed;
        cout<<setw(2)<<a<<setw(15)<<D<<endl;
    }
    }
    return 0;
}

