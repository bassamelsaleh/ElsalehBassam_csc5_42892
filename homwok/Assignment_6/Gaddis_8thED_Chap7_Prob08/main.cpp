/* 
 * File:   main.cpp
 * Author: Bassam
 * Home Work Problems
 * Created on May 9, 2016, 12:54 PM
 */

#include <iostream>
#include <iomanip>

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
        int tot4=0;
        int tot5=0;
        int tot6=0;
        int tot7=0;
        int tot8=0;
    
    int one[ROW][COL]={{4,9,2},{3,5,7},{8,1,6}};
    for(int count=0; count<ROW; count++){
        for(int sec=0; sec<COL; sec++){
            cout<<one[count][sec]<<" ";
        }
       cout<<endl;
    }
    
    //row one
    for(int count=0; count<ROW; count++){
        tot+=one[1][count];
    }
    cout<<"Row one added is = "<<tot<<endl;
    
    //row two
    for(int count=0; count<ROW; count++){
        tot2+=one[2][count];
    }
    cout<<"Row two added is = "<<tot2<<endl;
    
    //row three
    for(int count=0; count<ROW; count++){
        
        tot3+=one[2][count];
    }
    cout<<"Row three added is = "<<tot3<<endl;
    
    // diagonal one
    for(int count=0, sec=0; count<ROW; count++, sec++){
        
        tot4+=one[sec][count];
    }
    cout<<"Row diagonal top left to bottom right added is = "<<tot4<<endl;
    
    
    //diagonal two
    for(int count=0,sec=2; count<ROW; count++, sec--){
        
        tot5+=one[count][sec];
    }
    cout<<"Row diagonal bottom left to top right added is = "<<tot5<<endl;
    
    
    //columns one
    for(int count=0; count<ROW; count++){
        tot6+=one[count][0];
    }
    cout<<"Columns one added is = "<<tot<<endl;
    
    //columns two
    for(int count=0; count<ROW; count++){
        tot7+=one[count][1];
    }
    cout<<"Columns two added is = "<<tot2<<endl;
    
    //columns two
    for(int count=0; count<ROW; count++){
        tot8+=one[count][2];
    }
    cout<<"Columns three added is = "<<tot3<<endl;
    
    
    
    return 0;
}
