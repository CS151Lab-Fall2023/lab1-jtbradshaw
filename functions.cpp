/**
 * @file baseball.cpp
 * @author Justin Bradshaw
 * @brief includes all of the functions for main.cpp
 * @version 0.1
 * @date 2023-08-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "functions.h"

/**
 * @brief loads all of the teams into the vector.
 * 
 * @param file 
 */
void Teams::loadTeamsFromFileToVector(ifstream &file)
{
    int count = 0;
    Teams hold;
    string name;
    bool inArray = false;
    //Reads the file into the vector
    while(file.peek()!=EOF) {
        getline(file,name);
        hold.teamName = name;
        hold.numberOfWins = 1;
        int num = 0;
        while(num<(int)size(teams)){
            if(hold.teamName == teams[num].teamName){
                inArray = true;
                break;              
            } else {
                 inArray = false;
            }
            num++;
        }
        if(!inArray){
            teams.push_back(hold);
            count++;
        }
        else{
            teams[num].numberOfWins++;
        }
        
    }
    
}

/**
 * @brief sorts the vector from most wins to least wins.
 * 
 */
void Teams::sortVector()
{
    Teams hold;
    for(int i = 0; i < (int)size(teams); i++)
        for(int number = 0; number < (int)size(teams); number++){
            if (teams[i].numberOfWins>=teams[number+1].numberOfWins){
                hold = teams[number+1];
                teams[number+1] = teams[i];
                teams[i] = hold;
            }
        }

}

/**
 * @brief prints the vector after it is sorted.
 * 
 */
void Teams::printVector(){
    cout<<setw(15)<<"Team Name            Number of wins"<<endl;
    cout<<"-------------------------------------"<<endl;
    for(int i = 1; i < (int)size(teams); i++){
        cout<<left<<setw(22)<<teams.at(i).teamName<<"     "<<teams.at(i).numberOfWins<<endl;
        
    }
}

/**
 * @brief writes the vector to a csv file.
 * 
 * @param file 
 */
void Teams::writeToFile(ofstream &file)
{
    file<<"Team name,Number of wins";
    for(int i = 1; i < (int)size(teams); i++){
        file<<"\n"<<teams.at(i).teamName<<","<<teams.at(i).numberOfWins;
    }
}