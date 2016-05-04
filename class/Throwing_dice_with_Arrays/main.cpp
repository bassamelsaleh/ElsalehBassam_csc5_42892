/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Created on April 27th, 2016, 8:05 AM
 * Purpose:  Using Random Numbers, Check out Stats of Dice throwing
 *              with arrays.
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib> //Rand and Set Random
#include <ctime>    //Utilize time to set the seed
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed for variability
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned char sumDie,die1,die2;
    unsigned short nThrows=36000;
    const int SIZE=13;
    unsigned short freq[SIZE]={};
    
    //Throw the Dice
    for(unsigned short thrwDie=1;thrwDie<=nThrows;thrwDie++){
        //Randomly generate the throw and the sum
        die1=rand()%6+1;//[1,6]
        die2=rand()%6+1;//[1,6]
        sumDie=die1+die2;//[2,12]
        freq[sumDie]++;
    }
    
    //Output the results
    int total=0;
    cout<<"The total throw of the Die = "<<nThrows<<endl;
    for(int i=2; i<SIZE; i++){
        cout<<i<<"was thrown "<<freq[i]<<" times"<<endl;
    total+=freq[i];
}
cout<<"The total throw of the dice = "<<total<<endl;

    //Exit Stage Right!
    return 0;
}
