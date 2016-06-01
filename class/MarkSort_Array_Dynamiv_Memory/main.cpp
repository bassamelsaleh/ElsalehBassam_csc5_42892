/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * Created on June 1st, 2016, 8:24 AM
 * Purpose:  Dynamic Memory Example 
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib> //Rand and Set Random
#include <ctime>   //Utilize time to set the seed
#include <iomanip> //format
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void mrkSort(int *,int);//Sort the whole array  
void smlNLst(int *,int, int);//Find smallest in list from a position.
void swap(int &,int&);//Swap elements
void prntAry(int *,int,int);//Print the array with columns
int* fillAry(int);//fill array with 2 digit random numbers

//Execution Begins Here!
int main(int argc, char *argv[]) {
    //Set the random number seed for variability
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables i.e. static Array
    const int SIZE=100;             //Size the array to more than necessary
    float percent=0.62f;            //a % needed 
    int reduced=(SIZE/percent);       //Could be read form command line
    
    
    //Fill the array
    int* array=fillAry(SIZE);
    
     //Print the array
    prntAry(array, reduced,10);
    
    //test
    
    mrkSort(array,reduced);
    
    //Print the array
    prntAry(array, reduced,10);
    
    //Like a good neighbor
    delete []array;
    
    //Exit Stage Right!
    return 0;
}
void mrkSort(int *a,int n){
    for(int i=0; i<n-1;i++){
        smlNLst(a,n,i);
    }
}
    

void smlNLst(int *c,int l,int pos)
{ 
    for(int i=pos+1;i<l;i++){
        if(c[pos]>c[i])swap(c[pos],c[i]);
    }
    
}

void swap(int &a,int &b)//Swap elements
{
    a=a^b;
    b=a^b;
    a=a^b;
}

void prntAry(int *b,int m,int perLine){
    cout<<endl<<endl;
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
//Print the array with columns
int* fillAry(int n){
    int* a=new int[n];//Allocate Memory
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//2 digit random number
    }
    return a; //Return the allocated array
}