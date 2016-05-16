/* 
 * File:   main.cpp
 * Author: Bassam
 * Grade Book
 * Modified on May 11, 2016, 12:54 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//user

//global variables

//functions

int main(int argc, char** argv) {
    const int TEST=4;
    const int STU=5;
    int tot[STU]={};
    string grad[STU]={};
    int me[STU][TEST]={{}};
    int row=1;
    int final=0;
    int min;
    string name[STU];
    cout<<"ENTER YOUR STUDENTS NAME'S"<<endl;
        getline(cin,name[0]);
        getline(cin,name[1]);
        getline(cin,name[2]);
        getline(cin,name[3]);
        getline(cin,name[4]);
    
    for (int count=0; count<STU; count++,row++){
        cout<<"\t Student #"<<row<<endl;
        cout<<"What score did "<<name[count]<<" get?"<<endl;
        
        
//        for(int sec=1; sec<TEST+1; sec++){
         for(int sec=0; sec<TEST; sec++){
            cout<<"Test #"<<sec+1<<endl;
            cin>>me[count][sec];
            
            //input grade
            if (me[count][sec]<0){
                cout<<"Please enter a valid grade: "<<endl;
                cin>>me[count][sec];
                min=me[count][0];
 
            }
            tot[count]+=me[count][sec];
//            cout << "HERE " << tot[count] << endl;
        }
        min=me[count][0];
//        for (int low=1;low<TEST-1;low++){
        for (int low=1;low<TEST;low++){
            if(me[count][low]<min){
              min=me[count][low];
            }
        }
        tot[count]=tot[count]-min;
        //calculate grade
        final=tot[count]/3;
        if (final>=90){
            grad[count]="an A";
        }
        else if(final>=80){
            grad[count]="a B";
        }
        else if(final>=70){
            grad[count]="a C";
        }
        else if(final>=60){
            grad[count]="a D";
        }
        else if(final<=59){
            grad[count]="an F";
        }
        cout<<name[count]<<" got "<<grad[count]<<" with an"
                "average of "<<final<<endl;


    }

    return 0;
}
