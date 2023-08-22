/**
 * @file baseball.h
 * @author Justin Bradshaw
 * @brief .h file for sorting the text file into a vector.
 * @version 0.1
 * @date 2023-08-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

using namespace std;


/**
 * @brief A class for teams which includes the team name and the number of wins for that team.
 * 
 */
class Teams
{
    public:
    Teams()
    {
        teamName = " ";
        numberOfWins = 0;
    }
    void loadTeamsFromFileToVector(ifstream &file);
    void sortVector();
    void printVector();
    void writeToFile(ofstream &file);
    vector<Teams> teams;

    private:
    string teamName;
    int numberOfWins;
};

#endif
