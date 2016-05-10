/* 
 * File:   main.cpp
 * Author: Bassam
 * Home Work Problems
 * Created on May 9, 2016, 12:54 PM
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int ROW=3;
    const int COL=3;
        int tot=0;
        int tot2=0;
        int tot3=0;
    
    int one[ROW][COL]={{4,9,2},{3,5,7},{8,1,6}};
    for(int count=0; count<ROW; count++){
        for(int sec=0; sec<COL; sec++){
            cout<<one[count][sec]<<" ";
        }
       cout<<endl;
    }
    
    
    for(int count=0; count<ROW; count++){
        tot+=one[1][count];
    }
    
    cout<<"Row one added is = "<<tot<<endl;
    
    for(int count=0; count<ROW; count++){
        tot2+=one[2][count];
    }
    
    cout<<"Row two added is = "<<tot2<<endl;
    
    for(int count=0; count<ROW; count++){
        
        tot3+=one[2][count];
    }
    
    cout<<"Row three added is = "<<tot3<<endl;
    
    
    
    return 0;
}
