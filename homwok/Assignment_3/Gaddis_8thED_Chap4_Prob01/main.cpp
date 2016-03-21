/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- enter the number
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //input values
    float a, b;
    cout<<"Input value A"<<endl;
    cin>>a;
    cout<<"Input value B"<<endl;
    cin>>b;
    //Establish values
    if (a > b)
    {
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if (b > a)
    {
        cout<<b<<" is greater than "<<a<<endl;
    }
    else if (b == a)
    {
        cout<<b<<" is equal to "<<a<<endl;
    }

    return 0;
}

