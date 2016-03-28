/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- sea level rising
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
    float inc=1.5;
    float now=0;
    int year=0;
    cout<<"This chart will show what will happen if the "
            "water level will rise at "<<inc<<" mill per year"<<endl;
    cout<<"Year    Inc"<<endl;
    
    //loop to get calculations
    while(year<=25){
        now=now+inc;
        cout<<setprecision(1)<<fixed;
        cout<<setw(2)<<year<<setw(9)<<now<<endl;
        year++;
        
        
    }
    cout<<"The sea will rise "<<now<<" mill within the 25 year"<<endl;
    

    return 0;
}

