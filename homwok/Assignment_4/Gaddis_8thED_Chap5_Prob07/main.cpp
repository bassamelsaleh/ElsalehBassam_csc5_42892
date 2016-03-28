/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- pennies for pay
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
    float pen=0.01;
    float days=1;
    float amt;
    int a=0;
    //getting the amount of days they want.
    cout<<"Enter the amount of days to double the pennies"<<endl;
    cin>>a;
    
    //labeling the chart
    cout<<" Days    Amount"<<endl;
    
    //loop to get calculations
    while(days<=a){
        cout<<setprecision(2)<<fixed;
        cout<<setw(6)<<days<<setw(5)<<"$"<<pen<<endl;
        pen=pen*2;
        days++;
    }
    return 0;
}

