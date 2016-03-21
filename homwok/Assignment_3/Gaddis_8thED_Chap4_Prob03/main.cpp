/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Magical Dates
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare values
    int mon, day, year, md;
    
    //set values
    cout<<"Enter a Month in its Digit form"<<endl;
    cin>>day;
    cout<<"Enter a day"<<endl;
    cin>>mon;
    cout<<"Enter the last 2 digits of a year"<<endl;
    cin>>year;

    md = day*mon;
    
    if (md == year){
        cout<<"This date is magic."<<endl;
    }
    else{
        cout<<"This date is not magic."<<endl;
    }
    return 0;
}

