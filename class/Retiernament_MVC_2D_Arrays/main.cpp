/* 
 * Author: Bassam Elsaleh
 * Purpose:  To Illustrate savings by for loop
 * 8:40 Mar 30, 2016
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const int COLMAX=2;

//Function Prototypes
void calcRet(float [][COLMAX], float,float,float);//calculate retirement
void dispRet(float [][COLMAX], float);//display retirement

//Execution Begins Here
int main(int argc, char** argv) {
     //declare variables
    float salary=6e4f;      //$60,000
    float percDep=1e-1f;    //10% to save each year
    float pv = 0.0f;        //present value
    float iRate = 0.05f;    //interest rate
    const int SIZE=1000;    //SIZE of the array
    float fv[SIZE][COLMAX]={};      //initialize the array to zero
          fv[0][1] = pv;          //Retirement account value to know
          fv[0][0] = 0;          //Years
    float yrlyDep;          //Yearly Deposit in$'s
    float savRet;           //saving to retire in$'s
    
    //calculate the approximate savings required to retire and yearly Deposit
    savRet=salary/iRate;
    yrlyDep=salary*percDep;
    
    //loop each year until the future value is 2x the present value
    cout<<"Savings Required to retire = $"<<savRet<<endl;
    cout<<"Yearly Deposit/municipal Bond Purchase = $"<<yrlyDep<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Years Future Value"<<endl;
    
    //computations of the Savings
    calcRet(fv,savRet,iRate,yrlyDep);
    
    //Display of the Savings
    dispRet(fv,savRet);
    
    
    //Exit stage right
    return 0;
}

//usually need to pass in the array
void calcRet(float fv[][COLMAX], float savRet, float iRate, float yrlyDep){
    for(int nYears = 1; fv[nYears-1][1]<savRet; nYears++){
        fv[nYears][0]=nYears;
        fv[nYears][1]=fv[nYears-1][1]*(1+iRate);//yearly interest rate calculation
        fv[nYears][1]=fv[nYears][1]+yrlyDep;
    }
    
    
}
void dispRet(float fv[][COLMAX], float savRet){
    int nYears=0;
    cout<<"Years  Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<static_cast<int>(fv[0][0])
            <<setw(5)<<" $"<<setw(11)<<fv[0][1]<<endl;
    for(nYears = 1; fv[nYears-1][1]<savRet;nYears++){
        cout<<setw(3)<<static_cast<int>(fv[nYears][0])
                <<setw(5)<<" $"<<setw(11)<<fv[nYears][1]<<endl;
    }
    
}