/**
 * @file main.cpp
 * @author Justin bradshaw
 * @brief Calls on the functions to store .txt files into array and then outputs the number
 *  of wins for the team that the user entered the name of.
 * @version 0.1
 * @date 2023-08-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "functions.h"


int main()
{
    ifstream wSWFile("WorldSeriesWinners.txt");
    //Check if file opened successfully, if not exit the program
    if (!wSWFile) {
        cout<<"wSWFile did not open."<<endl;
        exit(1);
    }
    Teams name;

    name.loadTeamsFromFileToVector(wSWFile);

    wSWFile.close();

    name.sortVector();
    name.printVector();

    ofstream winners("winners.csv");
    if (!winners) {
        cout<<"winners did not open."<<endl;
        exit(1);
    }
    name.writeToFile(winners);
    winners.close();

    return 0;
}