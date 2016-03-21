/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- BMI
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
    float BMI, w, h;
    //set variables
    cout<<"what is your weight in pounds?"<<endl;
    cin>>w;
    cout<<"what is your hight in Inches"<<endl;
    cin>>h;
    
    //calculations
    BMI = (w*703)/(h*h);   
    
    //output results
    cout<<"your BMI is "<<BMI<<endl;
    if (BMI < 18.5){
        cout<<" the individual is under weight"<<endl;
    }
    else if (BMI >25){
        cout<<"the individual is over weight"<<endl;
    }
    else 
        cout<<"the individual is in the optimal weight range"<<endl;
    return 0;
}

