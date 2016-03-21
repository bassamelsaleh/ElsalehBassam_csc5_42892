/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Roman numeral converter
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
    //declare veriables
    int num;
    cout<<"Input the number (1-10) you want to convert to a numeral."<<endl;
    cin>>num;
    switch (num){
        case 1:{
            cout<<"I"<<endl;
            break;
        }
        case 2:{
            cout<<"II"<<endl;
            break;
        }
        case 3:{
            cout<<"III"<<endl;
            break;
        }
        case 4:{
            cout<<"IV"<<endl;
            break;
        }
        case 5:{
            cout<<"V"<<endl;
            break;
        }
        case '6':{
            cout<<"VI"<<endl;
            break;
        }
        case '7':{
            cout<<"VII"<<endl;
            break;
        }
        case '8':{
            cout<<"VIII"<<endl;
            break;
        }
        case '9':{
            cout<<"IX"<<endl;
            break;
        }
        case '10':{
            cout<<"X"<<endl;
            break;
        }
        default:{
                    cout<<"Entered a number out of the given values.1"<<endl;
            }
    }

    return 0;
}

