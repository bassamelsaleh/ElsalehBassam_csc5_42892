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
unsigned char cnvhrmn=60;//conversion from hours to mins
unsigned char cnvmnsc=60;//conversion form min to sec

int main(int argc, char** argv) {
    //declare Variables
    float mph; //Miles per hour
    float fmin; // Pace Mints Float
    int   imin; //Pace mints integers
    float fsec; // pace residual sec float
    int   isec; // pace residual sec integer
    
    //Prompt for the input mph
    cout<<"input the miles per hour pace (dd.dd)"<<endl;
    cin>>mph;
    
    //calculate the pace
    fmin=cnvhrmn/mph;//Floating pace in minutes representation
    imin=static_cast<int>(fmin);
    fsec=(fmin-imin)*cnvmnsc; //floating pace in seconds
    isec=static_cast<int>(fsec);
    
    //output the results
    cout<<"The pace in mph  = "<<mph<<endl;
    cout<<"The conversion is "<<imin<<"(minutes) "
            <<fsec<<"(sec) per mile"<<endl;
    
    //Exit stage right  
    return 0;
}

