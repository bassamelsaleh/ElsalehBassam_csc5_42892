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
    float mass, w;
    //declare variables
    cout<<"what is the mass of your object"<<endl;
    cin>>mass;
    
    //calculations
    w = mass*9.8f;
    
    //display results
    if (mass < 10){
        cout<<"Mass is too light."<<endl;
    }
    else if (mass > 1000){
        cout<<"Mass is to heavy."<<endl;
    }
    else 
        cout<<"The weight of the object is "<<w<<endl;
    
    return 0;
}

