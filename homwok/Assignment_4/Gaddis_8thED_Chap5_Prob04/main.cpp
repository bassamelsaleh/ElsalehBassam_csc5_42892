/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Burning calories 
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
    float burn=3.6;
    float cal=0;
    int min=0;
    cout<<"On our Treadmill you will burn (shown on the graph as calories"
            "per min)."<<endl;
    cout<<"Calories    Min"<<endl;
    
    //loop to get calculations
    while(min<=30){
        cal=burn*min;
        cout<<setprecision(1)<<fixed;
        cout<<setw(5)<<cal<<setw(10)<<min<<endl;
        min=min+5;
        
        
    }
    
    return 0;
}

