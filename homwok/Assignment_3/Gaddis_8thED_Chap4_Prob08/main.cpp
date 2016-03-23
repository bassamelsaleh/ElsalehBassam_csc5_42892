/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Mass to weight
 */

//System Libraries
#include <iostream>
#include <string>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //declare variables
    string a;
    string b;
    cout<<"input first primary colors."<<endl;
    getline(cin, a);
    cout<<"input second primary color"<<endl;
    getline(cin, b);
    
    if ((a == "red" && b == "blue")  || (b == "red" && a == "blue")){
        cout<<"your color is Purple"<<endl;
    }
    else if ((a == "red" && b == "yellow")  || (b == "red" && a == "yellow")){
        cout<<"your color is orange"<<endl;
    }
    else if ((a == "blue" && b == "yellow")  || (b == "blue" && a == "yellow")){
        cout<<"your color is green"<<endl;
    }
    else
        cout<<"you did not input a primary color"<<endl;
    
    
    return 0;
}

