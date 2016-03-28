/* 
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose- Budget Analysis
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
    //Declare variables
    int mon=0;//monthly budget
    int bud;
    int time=1;//time for the year
    int pay;//expenses
    
    
    //information
    cout<<"How much will you out in your budget per month"<<endl;
    cin>>bud;
    
    //loop to get calculations
    do{
        cout<<"what are your expenses for the month"<<endl;
        cin>>pay;
        mon=mon-pay+bud;
        //display
    cout<<"Month    Budget"<<endl;
        cout<<setprecision (2)<<fixed;
        cout<<setw(2)<<time<<setw(8)<<"$"<<mon<<endl;
        time++;
        
        
    }while (time<=12);
    
    //Display their yearly budget
    cout<<"At the end of the year, "<<endl;
    if (mon<0){
        cout<<"you went over by $"<<mon<<endl;       
    }
    else if (mon>0){
        cout<<"you have saved $"<<mon<<endl;
    }
    else{
        cout<<"you broke even"<<endl;
    }
    return 0;
}

