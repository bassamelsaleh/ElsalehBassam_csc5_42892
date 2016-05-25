/* 
 * File:   main.cpp
 * Author: Bassam
 * HomeWork Problems
 * Created on May 23, 2016, 1:43 PM
 */

#include <iostream>

using namespace std;

//user

//global variables

//functions
void mrkSort(int [],int);//Sort the whole array
void smlNLst(int [],int, int);//Find smallest in list from a position.

int main(int argc, char** argv) {
    const int SIZE=18;
    int in[SIZE]={};
    int user;
    
    //in database
    in[0]=5658845;
    in[1]=4520125;
    in[2]=7895122;
    in[3]=8777541;
    in[4]=8451277;
    in[5]=1302850;
    in[6]=8080452;
    in[7]=4562555;
    in[8]=5552012;
    in[9]=5050552;
    in[10]=7825877;
    in[11]=1250255;
    in[12]=1005231;
    in[13]=6545231;
    in[14]=3852085;
    in[15]=7576651;
    in[16]=7881200;
    in[17]=4581002;

    //user input
    cout << "Enter the account number:";
    cin>>user;
    mrkSort(in,SIZE);
    
    int beg=0,end=SIZE-1,middle=0,ans=0;
    while(end>=beg){
        middle=(beg+end)/2;
        if(in[middle]==user){
            cout<<"Valid Account"<<endl;
            ans=1;
            break;
        }
        else if(in[middle]>user)end=middle-1;
        else beg=middle+1;
        
    }
    if(ans==0){
        cout<<"Invalid Account";
    }
   
    
    return 0;
}



void mrkSort(int a[],int n){
    for(int i=0; i<n-1;i++){
        smlNLst(a,n,i);
    }
}
    

void smlNLst(int c[],int l,int pos)
{ 
    for(int i=pos+1;i<l;i++){
        if(c[pos]>c[i])swap(c[pos],c[i]);
    }
    
}