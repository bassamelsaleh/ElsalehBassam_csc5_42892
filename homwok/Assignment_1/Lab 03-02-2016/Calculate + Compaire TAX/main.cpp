/* 
 * Author: Bassam Elsaleh
 * Created on March 2, 2016, 10:27 AM
 * 
 */

#include <iostream>

using namespace std;

//user Llibraries

//global Constants
int main(int argc, char** argv) {
    
    //Declare variables
    float ust, irt;
    int google;
    
    //Set vales
    ust = 60;
    irt = 87.75;
    
    // googles revenue https://www.google.com/webhp?sourceid=chrome-instant&ion=1&espv=2&ie=UTF-8#q=what%20is%20google%27s%20revenue
    google = 74.54e9f;
    
    //display out come
    cout<<"in America Google would make after tax $"<<google*ust<<" in us dollars per year"<<endl;
    cout<<"in Ireland Google would make after tax $"<<google*irt<<" in us dollars per year"<<endl;
    cout<<"they would make $"<<google*irt-google*ust<<" in dollars per year"<<endl;
    
    
    return 0;
}

