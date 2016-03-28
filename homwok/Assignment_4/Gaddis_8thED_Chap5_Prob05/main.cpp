/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Club Pricing
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
    float cha=2500;
    float per=0.04;
    int year=0;
    cout<<"Here are our Club Charges within the next 6 years."<<endl;
    cout<<"Year       Price"<<endl;
    
    //loop to get calculations
    while(year<6){
        cha=cha*per+cha;
        year++;
        cout<<setprecision(2)<<fixed;
        cout<<setw(2)<<year<<setw(8)<<"$"<<cha<<endl;
    }
    
    return 0;
}

