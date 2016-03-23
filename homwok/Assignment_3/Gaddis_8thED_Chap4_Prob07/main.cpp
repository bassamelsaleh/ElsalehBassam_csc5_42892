/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Mass to weight
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //declare variables
    float in,sec, min, hrs, days;
    //set variables
    cout<<"Enter any number in seconds"<<endl;
    cin>>in;
    //calculations
    min = in/60;
    hrs = in/3600;
    days = in/86400;
    
    //output results
    if (in < 60){
        cout<<in<<" sec(s)."<<endl;
    }
    else if (in >= 60 && in < 3600){
        cout<<min<<" min(s)."<<endl;
    }
    else if(in >= 3600 && in < 86400){
        cout<<hrs<<" hour(s)."<<endl;
        
    }
    else if(in >= 86400){
        cout<<days<<" day(s)."<<endl;
    }

    return 0;
}

