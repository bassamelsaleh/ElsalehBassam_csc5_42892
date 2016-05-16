/* 
 * File:   main.cpp
 * Author: Bassam
 * finding ways to use Arrays
 * Created on May 15, 2016, 9:06 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
     const int min=1;
    const int max=4;
    const int ROUND=20;//used to make it only 20 turns and then the winner is decided.
    int player[ROUND]={};//players pick
    int cpu;//cpu's pick
    int hp1=20;//player ones health
    int hpc=20;//player twos health
    int spcCP=0;//count the times the special move is used by player
    int spcCC=0;//count the times the special move is used by cpu
    unsigned seed = time(0);
    srand(seed);
    ofstream out;//output
    cout<<endl;
    cout<<"P1        CPU"<<endl;
      cout<<hp1<<"        "<<hpc<<endl; 
      
      for(int count=0;count<ROUND;count++){
          cout<<count+1<<endl;
          cin>>player[count];
          cout<<endl;
      }
      
      
      //1 = punch
      //2 = spc.
      //3 = block
      //4 = counter
    
    for(int count=0; hp1>0 && hpc>0  && count<ROUND;count++ ){
    for(int first=0; hp1>0 && hpc>0 &&  spcCP<=3 && spcCC<=3 && first<ROUND;first++) {
        cpu=(rand()%(max-min+1))+min;
        cout<<"Spc. P1   Spc. P2"<<endl;
        cout<<spcCP<<"         "<<spcCC<<endl;
    
        cout<<endl;
      cpu=(rand()%(max-min+1))+min;
      cout<<endl;
      
      
      switch (player[first]){
          
          
          case 1: //player one punches
              if(cpu==1){
              cout<<"Both players punch each other dealing 2 DMG."<<endl;
          hp1=hp1-2;
          hpc=hpc-2;
          }
          else if(cpu==2){
             cout<<"Player 1 hits for 2 and Player 2 hits hard for 4 DMG"<<endl;
          hp1=hp1-4;
          hpc=hpc-2;
          spcCC++;// adds a counter to cpu
          }
          else if(cpu==3){
              cout<<"Player 2 blocks the DMG form Player 1"<<endl;
              
          }
          else if(cpu==4){
              cout<<"Player 1 hit for 2 as player 2 misses the counter"<<endl;
          hpc=hpc-2;
          
          }
          break;
          
         
          case 2:  //player one uses spc            
              
              if(cpu==1){
                cout<<"Player 1 hits hard for 4 DMG as player 2"
                    " hits for 2 DMG"<<endl;
          hp1=hp1-2;
          hpc=hpc-4;
          spcCP++;// adds counter to player
          }
          else if(cpu==2){
              cout<<"both players hit hard for 4 GMG"<<endl;
          hp1=hp1-4;
          hpc=hpc-4;
          spcCP++;// adds counter to player
          spcCC++;// adds counter to cpu
          }
          else if(cpu==3){
             cout<<"Player 2 blocks 2 DMG form Player 1 power hit"<<endl;
             hpc=hpc-2;
             spcCP++;// adds counter to player
          }
          else if(cpu==4){
              cout<<"Player 2 counters the spc. Attack and deals 4 DMG"
                      " to Player 1 "<<endl;
          hp1=hp1-4;
          spcCP++;// adds counter to player ever though it was blocked
          }
          break;
          
          
          case 3: //player one blocks 
              
          if(cpu==1){
                cout<<"Player 1 blocks the DMG form player 2"<<endl;

          }
          else if(cpu==2){
              cout<<"Player 1 blocks 2 DMG from Player"
                      " player 2's power hit."<<endl;
              hp1=hp1-2;
              spcCC++;// adds counter to cpu
          }
          else if(cpu==3){
              cout<<"Both players step back to make "
                      "their next move."<<endl;
          }
          else if(cpu==4){
              cout<<"Player 2 tries to grab player 1"<<endl;
          }
          break;
          
         
          case 4:  //player one counters
              
              if(cpu==1){
                cout<<"Player 1 misses the counter and "
                        "takes 2 DMG form player 2"<<endl;
          hp1=hp1-2;
          }
          else if(cpu==2){
              cout<<"Player 1 counters the massive blow and deals 4 DMG to "
                      " player 2."<<endl;
              hpc=hpc-4;
              spcCC++;// adds counter to cpu
          }
          else if(cpu==3){
              cout<<"Player 1 tries to grab Player 2."<<endl;
          }
          else if(cpu==4){
              cout<<"Both focus for their next move."<<endl;
          }
          break;
          
      }
      cout<<endl;
      
      cout<<"P1   CPU"<<endl;
     cout<<hp1<<"   "<<hpc<<endl; 
    }
    //************************************************************************\\
    // after both the player and cpu uses all their counters
//    
//    if(spcCP>=4 && spcCC>=4){
//    while(hp1>0 && hpc>0 && player!=5){
//        cout<<"both are out"<<endl;
//        const int min=1;
//    const int max=3;
//        cout<<endl;
//      cpu=(rand()%(max-min+1))+min;
//      while(cpu==2){
//          cpu=(rand()%(max-min+1))+min;
//      }
//      cout<<endl;
//      
//
//      switch (player[ROUND]){
//          
//          case 1:  //both are out of spc. player one punches
//            
//              if(cpu==1){
//              cout<<"Both players punch each other dealing 2 DMG."<<endl;
//          hp1=hp1-2;
//          hpc=hpc-2;
//          }
//          else if(cpu==2){
//              cout<<"Player 2 is out of spc. moves"<<endl;//incase computer 
//              //inputs a spc. move.
//          }
//          else if(cpu==3){
//              cout<<"Player 2 blocks the DMG form Player 1"<<endl;
//          }
//          else if(cpu==4){
//              cout<<"player 2 has no counter left"<<endl;
//          }
//          break;
//          
//          
//          case 2:  //both players shouldn't have any more counters
//              
//              if(cpu==1){
//              cout<<"Both Players are out of counters"<<endl;
//          }
//         else if(cpu==2){
//              cout<<"Both Players are out of counters"<<endl;
//          }
//          else if(cpu==3){
//              cout<<"Both Players are out of counters"<<endl;
//          }
//          else if(cpu==4){
//              cout<<"Both Players are out of counters"<<endl;
//          }
//          break;
//          
//          
//          case 3:  //both are out of spc. player one blocks 
//              
//              if(cpu==1){
//                cout<<"Player 1 blocks the DMG form player 2"<<endl;
//          }
//          else if(cpu==2){
//               cout<<"Player 2 is out of spc. moves"<<endl;
//          }
//         else if(cpu==3){
//              cout<<"Both players step back to make "
//                      "their next move."<<endl;
//          }
//         else if(cpu==4){
//              cout<<"Player one leers at Player 2"<<endl;
//          }
//          break;
//          
//          
//          case 4:  //both are out of counters player one counters
//              
//              if(cpu==1){
//              cout<<"Player 2 hits for 2 DMG"<<endl;
//              hp1=hp1-2;
//          }
//         else if(cpu==2){
//              cout<<"Player 2 is out of spc. moves"<<endl;
//          }
//          else if(cpu==3){
//              cout<<"Both Players get in close"<<endl;
//          }
//          else if(cpu==4){
//              cout<<"Both players take a step back"<<endl;
//          }
//          break;
//      }
//      
//    }
//    }
//    
//    
//    
//    //************************************************************************\\
//    //after counter from player one is used
//    else if(spcCP>3){
//    while(hp1>0 && hpc>0 && player!=5 && spcCP>=4 && spcCC<4)
//    {
//        cout<<"P1 is out of counters for power hits"<<endl;
//        const int min=1;
//    const int max=4;
//        cout<<endl;
//      cpu=(rand()%(max-min+1))+min;
//      cout<<endl;
//      
//      
//      
//      switch (player){
//          case 1:  //player one is out and punches
//              
//              if(cpu==1){
//              cout<<"Both players punch each other dealing 2 DMG."<<endl;
//          hp1=hp1-2;
//          hpc=hpc-2;
//          }
//          else if(cpu==2){
//             cout<<"Player 1 hits for 2 DMG"
//                     " and Player 2 hits hard for 4 DMG"<<endl;
//          hp1=hp1-4;
//          hpc=hpc-2;
//          spcCC++;
//          }
//          else if(cpu==3){
//              cout<<"Player 2 blocks the DMG form Player 1"<<endl;
//          }
//          else if(cpu==4){
//              cout<<"Player 1 hits for 2 DMG"
//                      " as player 2 misses the counter"<<endl;
//          hpc=hpc-2;
//          }
//          break;
//          
//          
//          case 2:  // player one cant use any more spc. moves
//              
//              if(cpu==1){
//              cout<<"You are out of counters"<<endl;
//          }
//         else if(cpu==2){
//              cout<<"You are out of counters"<<endl;
//          }
//          else if(cpu==3){
//              cout<<"You are out of counters"<<endl;
//          }
//          else if(cpu==4){
//              cout<<"You are out of counters"<<endl;
//          }
//          break;
//          break;
//          
//          
//          case 3:  //player one is out and blocks
//              
//              if(cpu==1){
//                cout<<"Player 1 blocks the DMG form player 2"<<endl;
//          }
//          else if(cpu==2){
//              cout<<"Player 1 blocks 2 DMG from Player"
//                      " player 2's power hit."<<endl;
//              hp1=hp1-2;
//              spcCC++;
//          }
//          else if(cpu==3){
//              cout<<"Both players step back to make "
//                      "their next move."<<endl;
//          }
//          else if(cpu==4){
//              cout<<"Player 2 tries to grab player 1"<<endl;
//          }
//          break;
//          
//          
//          case 4:  //player one is out and tries to counter
//              
//              if(cpu==1){
//              cout<<"Player 1 misses the counter as"
//                      " Player 2 hits player one for 2 DMG"<<endl;
//              hp1=hp1-2;
//          }
//          else if(cpu==2){
//              cout<<"Player 1 counters the massive blow and deals 4 DMG to "
//                      " player 2."<<endl;
//              hpc=hpc-4;
//              spcCC++;
//          }
//          else if(cpu==3){
//              cout<<"Player 1 tries to grab Player 2."<<endl;
//          }
//          else if(cpu==4){
//              cout<<"Both focus for their next move."<<endl;
//          }
//          break;
//      }
//      cout<<"P1   CPU"<<endl;
//      cout<<hp1<<"   "<<hpc<<endl;  
//      cout<<"Spc. P1   Spc. P2"<<endl;
//        cout<<"X"<<"         "<<spcCP<<endl;
//       
//    }
//    }
//    
//    //************************************************************************\\
//    // after cpu used up all their counters
//    
//    else if(spcCC>3){
//    while(hp1>0 && hpc>0 && player!=5 && spcCC>=4 && spcCP<4)
//    {
//        cout<<"P2 is out"<<endl;
//        const int min=1;
//    const int max=3;
//        cout<<endl;
//      cout<<"\n\t\tPlayer One Pick Your Move\n\n"
//            <<"1. Punch\n"
//            <<"2. Spc. Attack\n"
//            <<"3. Block\n"
//            <<"4. Counter\n"
//            <<"5. Forfeit\n"
//            <<"Enter your choice: ";
//      cin>>player;
//      cpu=(rand()%(max-min+1))+min;
//      
//      while(cpu==2){
//          cpu=(rand()%(max-min+1))+min;
//      }
//      cout<<endl;
//      
//     
//      switch (player){
//          case 1:
//              
//              if(cpu==1){
//              cout<<"Both players punch each other dealing 2 DMG."<<endl;
//          hp1=hp1-2;
//          hpc=hpc-2;
//          }
//          else if(cpu==2){
//              cout<<"player 2 is out of counters"<<endl;
//          }
//          else if(cpu==3){
//              cout<<"Player 2 blocks the DMG form Player 1"<<endl;
//          }
//          else if(cpu==4){
//              cout<<"player 2 has no counter left"<<endl;
//          }
//          break;
//          
//          
//          case 2:
//              
//              if(cpu==1){
//                cout<<"Player 1 hits hard for 4 DMG as player 2"
//                    " hits for 2 DMG"<<endl;
//          hp1=hp1-2;
//          hpc=hpc-4;
//          spcCP=spcCP+1;
//          }
//          else if(cpu==2){
//              cout<<"player 2 is out of counters"<<endl;
//              hpc=hpc-4;
//          }
//          else if(cpu==3){
//             cout<<"Player 2 blocks 2 DMG form Player 1 power hit"<<endl;
//             hpc=hpc-2;
//             spcCP=spcCP+1;
//          }
//          else if(cpu==4){
//              cout<<"player 2 has no counter left"<<endl;
//              spcCP=spcCP+1;
//          }
//          break;
//          
//          
//          case 3:
//              
//              if(cpu==1){
//                cout<<"Player 1 blocks the DMG form player 2"<<endl;
//          }
//          else if(cpu==2){
//              cout<<"player 2 is out of counters"<<endl;
//          }
//          else if(cpu==3){
//              cout<<"Both players step back to make "
//                      "their next move."<<endl;
//          }
//          else if(cpu==4){
//              cout<<"Player 2 has no counter left"<<endl;
//          }
//          break;
//          
//          
//          case 4:if(cpu==1){
//              cout<<"Player one misses the counter attack"<<endl;
//              hp1=hp1-2;
//          }
//          else if(cpu==2){
//              cout<<"Player 2 is out of counters."<<endl;
//          }
//          else if(cpu==3){
//              cout<<"Player 1 tries to grab Player 2."<<endl;
//              spcCP++;
//          }
//          else if(cpu==4){
//              cout<<"Both players make a tactical move."<<endl;
//          }
//          break;
//      }
//      cout<<endl;
//      cout<<"P1   CPU"<<endl;
//      cout<<hp1<<"   "<<hpc<<endl;  
//      cout<<"Spc. P1   Spc. P2"<<endl;
//        cout<<spcCP<<"         "<<"X"<<endl;
//       
//    }
//    }
//    
    //outcome of the game
    cout<<endl;
    if(hp1<=0 && hpc<=0){
        cout<<"You both fainted"<<endl;
    }
    else if(hp1<=0){
        cout<<"           You fainted"<<endl;
    }
    else if(hpc<=0){
        cout<<"             You win"<<endl;
        out.open("Winning certificate");
        out<<"Congratulations on your Victory special mode,"
                " now try to vs your friends in "
                "2 player mode or play again to get better at your "
                "guessing skills";
    }
    else{
        cout<<"Player 1 ran away"<<endl;
    }

    
    }
      out.close();

    return 0;
}

