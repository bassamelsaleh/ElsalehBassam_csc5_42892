/* 
 * File:   main.cpp
 * Author: Bassam Elsaleh
 * more practice
 * Created on April 4, 2016, 10:14 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    int h, w, pick;
    h=0;
    
    cin>>pick;
    if (pick <=15)
    do{
        w=0;
        while(w<pick){
            if(w == h){
                cout<<pick - h;
            }
            else if(w+h==pick-1){
                cout<<h+1;
            }
            else {
                cout<<" ";
            }
            w++;
        }
        h++;
        cout<<endl;
    }while (h<pick);
    else{
        cout<<"Error"<<endl;
    }

    return 0;
}
