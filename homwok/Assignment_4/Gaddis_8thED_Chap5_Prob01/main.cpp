/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- loop the sum
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int num;
    int ans;
    cout<<"Enter a positive integer"<<endl;
    cin>>num;
    //set ans to 0 to have a given value
    ans=0;
    //loop to get calculations
    do{
        
        ans=ans+num;
        num--;
        
    }while(num>0);
    cout<<ans<<endl;
    

    return 0;
}

