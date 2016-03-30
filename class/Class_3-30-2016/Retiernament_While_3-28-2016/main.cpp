/* 
 * Author: Bassam Elsaleh
 * Purpose:  To Illustrate savings by do loop
 * 8:40 Mar 30, 2016
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
     //declare variables
    float salary=6e4f;//$60,000
    float percDep=1e-1f;//10% to save each year
    float pv = 0.0f;//present value
    float iRate = 0.05f;//interest rate
    int nYears = 0;// comparison of calculations to rule of 72
    float fv = pv; //future value
    float yrlyDep;//Yearly Deposit in$'s
    float savRet;//saving to retire in$'s
    
    //calculate the approximate savings required to retire and yearly Deposit
    savRet=salary/iRate;
    yrlyDep=salary*percDep;
    
    //loop each year until the future value is 2x the present value
    cout<<"Savings Required to retire = $"<<savRet<<endl;
    cout<<"Yearly Deposit/municipal Bond Purchase = $"<<yrlyDep<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Years Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    
    while(fv<savRet){ 
        nYears++;
        fv*= (1+iRate);//yearly interest rate calculation
        fv+=yrlyDep;
        cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    }
    
    
    //Exit stage right
    return 0;
}