/*
 * File:   main.cpp
 * Bassam Elsaleh
 * Project - Game (name still not decided)
 * Created on April 18, 2016, 2:21 PM
 * Modified on ----
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void menu();
void rules();
void oneP();
void twoP();
//Execution Begins Here


int main(int argc, char** argv) {
    int player1;//the users input.
    int choice;//menu pick
    
    do 
    {
        //Display the menu
        menu();
         //Read the choice
            cin>>choice;
            //Solve a problem that has been chosen.
            switch(choice){
                    case 1:oneP();break;                    
                    case 2:twoP();break;
                    case 3:rules();break;
                    default:{
                            cout<<"Exit?"<<endl;
                    }
            };
    }while (choice != 4);

    return 0;
}

//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************

//Game Menu
void menu(){
    cout<<endl;
      cout<<"\n\t\tFighter Fighter\n\n"
            <<"1. Single Player\n"
            <<"2. Two Players\n"
            <<"3. rules\n"
            <<"4. Quit the Program\n"
            <<"Enter your choice: ";
}

//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************

//Game Rules
void rules(){
    cout<<endl;
    int a;
    do {
       cout<<"This game a type of turn by turn battle game, where each"
       " will start with 20 Health Point or HP, once a player"<<endl<<
       "hits 0 HP or of one the payers forfeits, the game ends "
       "and the remaining player wins the game"<<endl<<endl<<"In order to"
       "lower the opponents HP you must inflect Damage or DMG also keep track"
       "of your own health to see when to Defend of DEFF yourself."<<endl<<endl;
        
        cout<<"There are 2 types of attacks: "<<endl;
        
        cout<<"Punch - a punch is a standard attack that "
                "will inflict 2 DMG to your opponent."<<endl;
        
        cout<<"Spc. Attack - a Special Attack will inflect 4 DMG to your"
                "opponent, but keep in mind that you can only use"<<endl<<"this "
                "ability 3 time per match."<<endl;
        
        cout<<"Block - a block will stop half of the DAM that would "
                "naturally hit you from both types of Attacks."<<endl;
        
        cout<<"Counter - will only affect Spc. Attacks, but unlike"
                "Spc. Attacks you may activate it whenever you like"<<endl<<
                "but if be aware of what your opponent might do,"
                "because punches will not be countered and will just do DMG"
                <<endl;
        
        cout<<"Forfeit - You realized you made a mistake figheting "
                "this individual"<<endl<<" so you surrender a win"
                " to your opponent and the game will end."<<endl<<endl;
        cout<<"each game will end by announcing the winner and take you "
                "back to the main menu."<<endl<<"when you are ready press"
                " 1 and ENTER."<<endl;
        cin>>a;
        
        
    }while(a!=1);
}

//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************

//one player
void oneP(){
    cout<<endl;
    cout<<"will do later"<<endl;
}

//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************

//one player
void twoP(){
    cout<<endl;
    cout<<"will do later"<<endl;
}