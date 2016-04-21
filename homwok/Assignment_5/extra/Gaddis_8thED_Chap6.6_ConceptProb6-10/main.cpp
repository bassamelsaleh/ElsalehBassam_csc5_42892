/* 
 * File:   main.cpp
 * Author: Bassam
 * Going through the concept problems in chapter 6 
 * Pg. 318 Ch 6.6 program 6-10
 * Created on April 19, 2016, 11:55 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//Function 
void showMenu();
void showFees(double, int);

int main(int argc, char** argv) {
    int choice;     //to hold a menu choice
    int months;     //to hold a number of months
    
    //constants for the menu choices
    const int ADULT_CHOICE=1,
            CHILD_CHOICE=2,
            SENIOR_CHOICE=3,
            QUIT_CHOICE=4;
    //constants for membership rates
    const double ADULT=40.0,
            CHILD=20.0,
            SENIOR=30;
    //set up numeric output formatting.
    cout << fixed << showpoint << setprecision(2);
    
    do{
        //display the menu and get the user's choice.
        showMenu();
        cin>>choice;
        
        //Validate the menu selection.
        while (choice<ADULT_CHOICE || choice>QUIT_CHOICE)
        {
            cout<<"please enter a valid menu choice: ";
            cin>>choice;
        }
        
        //if the user does not want to quit, proceed.
        if (choice!=QUIT_CHOICE)
        {
            //get the number of months.
            cout<<"for how many months? ";
            cin>>months;
            
            //display the membership fees.
            switch (choice)
            {
                case ADULT_CHOICE:
                    showFees(ADULT, months);
                    break;
                case CHILD_CHOICE:
                    showFees(CHILD, months);
                    break;
                case SENIOR_CHOICE:
                     showFees(SENIOR, months);
            }
            
        }
    }while (choice != QUIT_CHOICE);
    return 0;
}


//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************

//Menu
void showMenu()
{
    cout<<"\n\t\tHealth club Membership Menu\n\n"
            <<"1. standard Adult Membership\n"
            <<"2. Child Membership\n"
            <<"3. Senior Citizen Membership\n"
            <<"4. Quit the Program\n"
            <<"Enter your choice: ";
}

//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************

//fees
void showFees(double memberRate, int months)
{
    cout<<"the total charges are $"
            <<(memberRate*months)<<endl;
}




