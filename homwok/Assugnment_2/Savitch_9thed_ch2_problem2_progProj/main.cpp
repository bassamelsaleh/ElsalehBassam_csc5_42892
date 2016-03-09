/* 
 * Author: Bassam Elsaeh
 * Created on February 29, 2016, 9:49 AM
 * purpose: Treadmill Readout Conversion
 */

// System Libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

int main(int argc, char** argv) {
    //declare  variables 
    float omsal, osal, nsal, nmsal, backP, mon, perInc;
    int numb;
    
    
    //input values
    cout<<"What was the old salary in dollars?"<<endl;
    cin>>osal;
    cout<<"How many months did you work with the old salary in dollars "<<endl;
    cin>>numb;
    
    
    //set variables
    perInc=0.076;
    mon=12/numb;
    
    
    //calculations
    omsal=osal/12;
    nsal= osal*(1+perInc);
    nmsal=nsal/12;
    backP=(nsal-osal)/mon;
    
    //output results
    cout<<"The old yearly salary was $"<<osal<<endl;
    cout<<"The old monthly salary was $"<<omsal<<endl;
    cout<<"The new yearly salary is $"<<nsal<<endl;
    cout<<"The new monthly salary is $"<<nmsal<<endl;
    cout<<"For working "<<numb<<" months under the old payment,"
            " you should receive $"<<backP<<" in back pay."<<endl;
    
            
    
    
    //exit stage right
    return 0;
}

