#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std; 

int main(){
    //Using bool to verify if the input was hit or miss (0=false, 1=true)
    int table[4][4]= {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {1, 0, 0, 0},
        {1, 0, 1, 0}
    };

    int showmap[4][4]= {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
    };
    
    int hits = 0, turn = 1, miss = 0, j, i,coord_row, coord_col;
    char answer;
    int run = 0;
    // This for loop prints the "map" 
    cout << "\t Map \t" <<endl;
    for (j = 0; j < 4; j++){ //iterates 4 times and its the value for rows 
        for (i = 0; i < 4; i++){ // iterates 4 times each iteration of the other loop. 
            if (i == 0){ 
            cout<< "\t" << showmap[j][i] <<" ";
            }
            else {
                cout<< showmap[j][i] << " ";
            }
            if (i == 3){
                cout <<"\n";
            }
        }
    }
    //Cout explaining the rules and the map
    cout<< "Rules: \n 1: What you see above is the map, its a 4x4 map but it starts from 0 so your coordinates will be from 0 to 3. \n 2: There are (2) 2x2 and (1) 1x1 ships, you win when all ships are destroyed. \n";
    cout << " " << "3: You must write the coordinates starting with the value row followed by the column value. Ex: row 1 column 3 ----> 1 3. \n ";
    cout << " " <<  "4: Only 6 missed shots allowed."<<endl;

    //Asks the player if wants to start the game (if not, just reset the loop till answer = yes)
    for (0; run < 1; 0){
    cout << "Do you want to start? Y/N" <<" " ; 
    cin >> answer;
    answer = tolower(answer);
    if (answer == 'y'){
        system("cls");
        run = 1;
    }
    else if (answer == 'n'){
        cout << "No problem, take your time and when you feel ready type Y."<<endl;
    }
    else {
        cout << "I said Y/N ._. try again."<<endl;
    }
    }
    cout<< "\tStart!"<<endl;

    //While loop of the main minigame
    while (hits < 5 && miss < 6){
    //Clears the console when hits > 0 so the first iteration ignores it.
    //Shows the map and the shot counter.  
    for (j = 0; j < 4; j++){ //iterates 4 times and its the value for rows 
        for (i = 0; i < 4; i++){ // iterates 4 times each iteration of the other loop. 
            if (i == 0){ 
            cout<< "\t\t" << showmap[j][i] <<" ";
            }
            else {
                cout<< showmap[j][i] << " ";
            }
            if (i == 3){
                cout <<"\n";
            }
        }
    }
    cout << "Hit: " << " " << hits << "\t\t\t Miss: " << miss<<endl;

    //Input from the player
    cout << "Coordinates: ";
    cin >> coord_row>> coord_col;
    //Hit system
    if (table[coord_row][coord_col] == 1){
        hits++;  
        if (hits > 0){
        system("cls");
        }
        cout << "HIT!" <<endl; 
        table[coord_row][coord_col] = 3;
        showmap[coord_row][coord_col] = 1;

    }
    else if (table[coord_row][coord_col] == 0){
        miss++;
        if (miss > 0 ){
        system("cls");
        }
        cout << "MISS!"<<endl;
    }
    else if (table[coord_row][coord_col] == 3){
        system("cls");
        cout << "Cant hit the same sport again! Try again." <<endl;

    }
    else {
        cout << "Incorrect, thats not a valid coordinate."<<endl;
    }
    }
    system("cls");
    for (j = 0; j < 4; j++){ //iterates 4 times and its the value for rows 
        for (i = 0; i < 4; i++){ // iterates 4 times each iteration of the other loop. 
            if (i == 0){ 
            cout<< "\t\t" << showmap[j][i] <<" ";
            }
            else {
                cout<< showmap[j][i] << " ";
            }
            if (i == 3){
                cout <<"\n";
            }
        }
    }

    //Finishing the game
    if (hits == 5 ){
        cout << "Congratulations, you destroyed them all! "<<endl;
    }
    else {
        cout << "Game over D:"  <<endl;
    }

    return 0; 
}