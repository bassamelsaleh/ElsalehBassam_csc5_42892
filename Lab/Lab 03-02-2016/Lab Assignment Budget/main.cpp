/* 
 * Author: Bassam Elsaleh
 * Created on March 2, 2016, 9:57 AM
 * Find the budget of NASA and the Military
 */

#include <iostream>
using namespace std;

//user libraries

//Global constants

int main(int argc, char** argv) {
    //Declare variables 
    float totB, nasa, mil, per;
    
    //what is the united stated total budget in dollars https://www.google.com/webhp?sourceid=chrome-instant&ion=1&espv=2&ie=UTF-8#q=what+is+the+united+states+budget
    totB = 3.8e12f;
            
    //NASA's Budget in dollars https://www.google.com/webhp?sourceid=chrome-instant&ion=1&espv=2&ie=UTF-8#q=what+is+nasa%27s+budget
    nasa = 17.2e9f;
    
    //Militaries budget in dollars https://en.wikipedia.org/wiki/Military_budget_of_the_United_States
    mil = 610e9f;
    
    //of 100 percent
    per=100;
    
    //Display results
    cout<<"NASA uses about "<<nasa/totB*per<<"% of the US budget"<<endl;
    cout<<"The military uses about "<<mil/totB*per<<"% of the US budget"<<endl;
    
    return 0;
}

