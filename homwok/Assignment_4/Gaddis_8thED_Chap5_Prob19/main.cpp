/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Random Number Guessing Game
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
    //Declare variables
    int gues;
    float a;
    //constants
    const int min=0;
    const int max=20;
    
    //get the system time.
    unsigned seed = time(0);
    
    //seed the random number generator.
    srand(seed);
    a = (rand()%21)+min;
    cout<<"What number am I thinking of between 0 and 20?"<<endl;
    
    //loop to get calculations
    do{
        cin>>gues;
        if (gues>a){
            cout<<"your guess was to high."<<endl;
        }
        else if (gues<a){
            cout<<"your guess was to low."<<endl;
        }
    }while (gues!=a);
    cout<<"Congrats, you found out the number i was thinking of."<<endl;
    return 0;
}

