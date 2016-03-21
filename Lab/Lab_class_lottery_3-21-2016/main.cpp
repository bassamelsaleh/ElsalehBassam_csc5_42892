/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * March 21, 2016
 * purpose - lottery
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout<<"Type 1 to see lottery lab"<<endl;
    cout<<"Type 2 to see boolian lab"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
       case '1':{//Character '1' in Decimal

    //declare variables 
        float lot, sumP, tax, marr, val, valT, valM;
        //set variables
        sumP = 0.38;
        tax = 0.52;
        marr = 0.50;
        //input winnings
        cout<<"enter winnings"<<endl;
        cin>>lot;
        //calculations
        val = lot*sumP;
        valT = val-val*tax;
        valM = valT*marr;
        //output results 
        cout<<"You win "<<val<<" after the lump sum that was taken out."<<endl;
        cout<<"You get "<<valT<<" after tax."<<endl;
        cout<<"Finally, if you are married you will have."<<valM<<endl;
    break;
    }
    case '2':{
    //declare variables
    bool x;
    bool y;
    
    //output results
    cout<<"X   Y   !X   !Y   x&&y   x||y   x^y   x^y^y   x^y^x   !(x&&y)   !x||!y   !(x||y)   !x&&!y"<<endl;
    
    //output results with input that user inputed
    x=1;
    y=1;
    if(x==true,y==true)
        cout<<(x?'T':'F')<<setw(4)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(5)<<(!y?'T':'F')<<setw(6)<<(x&&y?'T':'F')<<setw(7)<<(x||y?'T':'F')<<setw(7)<<(x^y?'T':'F')<<setw(7)<<(x^y^y?'T':'F')<<setw(7)<<(x^y^x?'T':'F')<<setw(10)<<(!(x&&y)?'T':'F')<<setw(10)<<(!x||!y?'T':'F')<<setw(10)<<(!(x||y)?'T':'F')<<setw(10)<<(!x&&!y?'T':'F')<<endl;
    
    x=1;
    y=0;
    if (x==true,y==false)
        cout<<(x?'T':'F')<<setw(4)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(5)<<(!y?'T':'F')<<setw(6)<<(x&&y?'T':'F')<<setw(7)<<(x||y?'T':'F')<<setw(7)<<(x^y?'T':'F')<<setw(7)<<(x^y^y?'T':'F')<<setw(7)<<(x^y^x?'T':'F')<<setw(10)<<(!(x&&y)?'T':'F')<<setw(10)<<(!x||!y?'T':'F')<<setw(10)<<(!(x||y)?'T':'F')<<setw(10)<<(!x&&!y?'T':'F')<<endl;
    
    x=0;
    y=1;
    if (x==false,y==true)
        cout<<(x?'T':'F')<<setw(4)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(5)<<(!y?'T':'F')<<setw(6)<<(x&&y?'T':'F')<<setw(7)<<(x||y?'T':'F')<<setw(7)<<(x^y?'T':'F')<<setw(7)<<(x^y^y?'T':'F')<<setw(7)<<(x^y^x?'T':'F')<<setw(10)<<(!(x&&y)?'T':'F')<<setw(10)<<(!x||!y?'T':'F')<<setw(10)<<(!(x||y)?'T':'F')<<setw(10)<<(!x&&!y?'T':'F')<<endl;
    
    x=0;
    y=0;
    if (x==false,y==false)
        cout<<(x?'T':'F')<<setw(4)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(5)<<(!y?'T':'F')<<setw(6)<<(x&&y?'T':'F')<<setw(7)<<(x||y?'T':'F')<<setw(7)<<(x^y?'T':'F')<<setw(7)<<(x^y^y?'T':'F')<<setw(7)<<(x^y^x?'T':'F')<<setw(10)<<(!(x&&y)?'T':'F')<<setw(10)<<(!x||!y?'T':'F')<<setw(10)<<(!(x||y)?'T':'F')<<setw(10)<<(!x&&!y?'T':'F')<<endl;
    break;
        }
        
    
    
    return 0;
}
}
