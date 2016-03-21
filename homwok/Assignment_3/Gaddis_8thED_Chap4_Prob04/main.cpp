/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Comparing Rectangles
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
    float a1, a2, w1, l1, w2, l2;
    // set variables
    cout<<"What is the Length THEN Width of the first Rectangle"<<endl;
    cin>>l1;
    cin>>w1;
    cout<<"What is the Length THEN Width of the second Rectangle"<<endl;
    cin>>l2;
    cin>>w2;
    
    //calculations
    a1 = l1*w1;
    a2 = l2*w2;
    
    //output results
    if (a1 > a2){
        cout<<"The area of the first Rectangle is "<<a1<<" the second area is "<<a2<<"."<<endl;
        cout<<"The first Rectangle is Larger than the second Rectangle"<<endl;
    }
    if (a1 < a2){
        cout<<"The area of the first Rectangle is "<<a1<<" the second area is "<<a2<<"."<<endl;
        cout<<"The second Rectangle is Larger than the first Rectangle"<<endl;
    }
    if (a1 == a2){
        cout<<"The area of the first Rectangle is "<<a1<<" the second area is "<<a2<<"."<<endl;
        cout<<"The first Rectangle is equal to the second Rectangle"<<endl;
    }


    return 0;
}

