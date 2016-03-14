/*
 * Author: Bassam Elsaleh
 *March 14, 2016, 9:32 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//Global Constants

//Function Prototypes

int main(int argc, char** argv) {
    bool x;
    bool y;
    
    
    cout<<"input value true=1 or false=0 for x."<<endl;
    cin>>x;
    cout<<"input value true=1 or false=0 for y."<<endl;
    cin>>y;
    
    
    cout<<"X   Y   !X   !Y   x&&y   x||y   x^y   x^y^y   x^y^x   !(x&&y)   !x||!y   !(x||y)   !x&&!y"<<endl;
    
    
    if(x==true,y==true)
        cout<<(x?'T':'F')<<setw(4)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(5)<<(!y?'T':'F')<<setw(6)<<(x&&y?'T':'F')<<setw(7)<<(x||y?'T':'F')<<setw(7)<<(x^y?'T':'F')<<setw(7)<<(x^y^y?'T':'F')<<setw(7)<<(x^y^x?'T':'F')<<setw(10)<<(!(x&&y)?'T':'F')<<setw(10)<<(!x||!y?'T':'F')<<setw(10)<<(!(x||y)?'T':'F')<<setw(10)<<(!x&&!y?'T':'F')<<endl;
    else if (x==true,y==false)
        cout<<(x?'T':'F')<<setw(4)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(5)<<(!y?'T':'F')<<setw(6)<<(x&&y?'T':'F')<<setw(7)<<(x||y?'T':'F')<<setw(7)<<(x^y?'T':'F')<<setw(7)<<(x^y^y?'T':'F')<<setw(7)<<(x^y^x?'T':'F')<<setw(10)<<(!(x&&y)?'T':'F')<<setw(10)<<(!x||!y?'T':'F')<<setw(10)<<(!(x||y)?'T':'F')<<setw(10)<<(!x&&!y?'T':'F')<<endl;
    else if (x==false,y==true)
        cout<<(x?'T':'F')<<setw(4)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(5)<<(!y?'T':'F')<<setw(6)<<(x&&y?'T':'F')<<setw(7)<<(x||y?'T':'F')<<setw(7)<<(x^y?'T':'F')<<setw(7)<<(x^y^y?'T':'F')<<setw(7)<<(x^y^x?'T':'F')<<setw(10)<<(!(x&&y)?'T':'F')<<setw(10)<<(!x||!y?'T':'F')<<setw(10)<<(!(x||y)?'T':'F')<<setw(10)<<(!x&&!y?'T':'F')<<endl;
    else if (x==false,y==false)
        cout<<(x?'T':'F')<<setw(4)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(5)<<(!y?'T':'F')<<setw(6)<<(x&&y?'T':'F')<<setw(7)<<(x||y?'T':'F')<<setw(7)<<(x^y?'T':'F')<<setw(7)<<(x^y^y?'T':'F')<<setw(7)<<(x^y^x?'T':'F')<<setw(10)<<(!(x&&y)?'T':'F')<<setw(10)<<(!x||!y?'T':'F')<<setw(10)<<(!(x||y)?'T':'F')<<setw(10)<<(!x&&!y?'T':'F')<<endl;
    
        
    
    
    

    return 0;
}

