/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Math Tutor
 */

//System Libraries
#include <iostream>
#include <cstdlib>  //for rand and srand
#include <ctime>    //for hte time function
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //constants
    const int min=0;
    const int max=1000;
    //declare variables
    int a;
    int b;
    int tot;
    int ans;
    
    //get the system time.
    unsigned seed = time(0);
    
    //seed the random number generator.
    srand(seed);
    
    //get random numbers to solve
    a = (rand()%(max-min+1))+min;
    b = (rand()%(max-min+1))+min;
    cout<<a<<endl;
    cout<<b<<endl;
    
    //calculation
    tot = a+b;
    
    cout<<"Enter your answer here"<<endl;
    cin>>ans;
    
    if (ans == tot){
        cout<<"congrats, you entered that correct answer. "<<tot<<endl; 
    }
    else{
        cout<<"sorry, the answer was "<<tot
                <<" and you answered "<<ans<<endl;
    }
    

    return 0;
}

