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

//Function Prototypes
void calcRet(float fv[],float,float,float);//calculate retirement
void dispRet(float [],float);//display retirement

//Execution Begins Here
int main(int argc, char** argv) {
     //declare variables
    float salary=6e4f;      //$60,000
    float percDep=1e-1f;    //10% to save each year
    float pv = 0.0f;        //present value
    float iRate = 0.05f;    //interest rate
    int   nYears = 0;         //comparison of calculations to rule of 72
    const int SIZE=1000;    //SIZE of the array
    float fv[SIZE]={};      //initialize the array to zero
          fv[0] = pv;          //future value
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

//usualy need to pass in the array
void calcRet(float fv[],float savRet, float iRate, float yrlyDep){
    for(int nYears = 1; fv[nYears-1]<savRet; nYears++){
        fv[nYears]=fv[nYears-1]*(1+iRate);//yearly interest rate calculation
        fv[nYears]=fv[nYears]+yrlyDep;
    }
    
    
}
void dispRet(float fv[],float savRet){
    int nYears=0;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv[0]<<endl;
    for(nYears = 1; fv[nYears-1]<savRet; nYears++){
        cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv[nYears]<<endl;
    }
    
}