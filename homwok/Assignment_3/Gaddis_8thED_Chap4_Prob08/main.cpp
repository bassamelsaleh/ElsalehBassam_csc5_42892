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
    string a;
    string b;
    cout<<"input 2 primary colors."<<endl;
    getline(cin, a);
    cout<<"input second primary color"<<endl;
    getline(cin, b);
    cout<<a<<" "<<b<<endl;
    
    if ((a == "red" && b == "blue")  || (b == "red" && a == "blue")){
        cout<<"your color is Purple"<<endl;
    }
    if ((a == "red" && b == "yellow")  || (b == "red" && a == "yellow")){
        cout<<"your color is orange"<<endl;
    }
   
    return 0;
}

