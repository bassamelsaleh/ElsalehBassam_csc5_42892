/* 
 * Author: Bassam Elsaleh
 * Purpose:  To Illustrate the rule of 72 by while loop
 * Mar 28, 2016
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
    float pv = 200.0f;//present value
    float iRate = 0.05f;//interest rate
    float nComp;//Number of compounding periods by  rule of 72
    int nYears = 0;// comparison of calculations to rule of 72
    float fv = pv; //future value
    
    //calculate the approximate number of years to double by rule of 72
    nComp = 0.72f/iRate;
    
    //loop each year until the future value is 2x the present value
    cout<<"Present value = $"<<pv<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Years Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    while(fv<2*pv){
        fv*= (1+iRate);//yearly interest rate calculation
        nYears++;       //increment the number of years
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    }
    
    //output the results
    
    cout<<"By the Rule of 72 it will take "<<nComp<<" years to double.";
    cout<<"The Future Value = $"<<fv<<endl;
    cout<<"the number of years to more than = "<<nYears<<endl;
    
    
    //Exit stage right
    return 0;
}