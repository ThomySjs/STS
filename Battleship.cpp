#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std; 

int main(){
    //Using bool to verify if the input was hit or miss (0=false, 1=true)
    bool table[4][4]= {
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
    
    int hits = 0, turn = 1, miss = 0, j, i;
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
    cout<< "Rules: \n 1: What you see above is the map, its a 4x4 map but it starts from 0 so your cordinades will be from 0 to 3. \n 2: There are 2 2x2 and 1 1x1 ships, you win when all ships are destroyed. \n 3: Only 6 misses allowed." << endl;
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
    cout<< "Start!";



    return 0; 
}