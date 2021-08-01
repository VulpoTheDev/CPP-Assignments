#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

// Function Prototypes
void setTeams(vector<string>&);
void setWinningTeams(vector<string>&);
bool verifyUserInput(string, vector<string>);
int getWins(string, vector<string>);

int main()
{
    // User Inputs for their Team
    string userInput;
    // Vectors that are from the teams file
    vector<string> teams;
    // Sets the teams
    setTeams(teams);
    // Get the team size
    int teamSize = teams.size();
    // vectir winning teams from 1950-2014
    vector<string> winningTeams;
    // set the winning teams
    setWinningTeams(winningTeams);
    // Retry so if the user wants to try the program again
    char retry = 'n';
    do {
        // Shows the users the team that won
        cout << "Teams (that won at one point during 1950-2014): " << endl;
        for (int i = 0; i < teamSize; i++) {
            cout << teams[i] << endl;
        }
        // Asks the user what team they want to see the # amount of times they won
        cout << "Please Enter one of the teams provided above you would like to see how many times they won from the timeline of 1950-2014: ";
        getline(cin, userInput);
        // If the user input is incorrect then it'll repeatdly ask the user for the team
        while (!verifyUserInput(userInput, teams)) {
            cout << "Incorrect Please Enter one of the teams provided above you would like to see how many times they won from the timeline of 1950-2014: ";
            getline(cin, userInput);
        }
        // get the wins for the user's team and put it into a variable
        int wins = getWins(userInput, winningTeams);
        // Prompts their team and how many games they won
        cout << "For your choosen team " << userInput << " during 1950 to 2014 they have won " << wins << " Games" << endl;
        // Asks the user if they would like to try the program again
        cout << "Would you like to run this again? (y/n): ";
        cin >> retry;
        // Repeatdly ask the user to answer it correct
        while (retry != 'y' && retry != 'n') {
            cout << "Incorrect Option. Would you like to run this again? (y/n): ";
            cin >> retry;
        }
    } while (retry == 'y');
    
    return 0;
}

void setTeams(vector<string> &teamVector) {
    // Opens the team file and sets it as the team vector
    ifstream teamsFile;
    teamsFile.open("Teams.txt");
    if (!teamsFile) {
        cout << "There's a problem opening that file.";
    }
    else {
        // Until it reaches the end of the file then the loop will break
        while (!teamsFile.eof()) {
            // gets the line and adds it onto the vector
            string team;
            getline(teamsFile, team);
            teamVector.push_back(team);
        }
        // cloes the files
        teamsFile.close();
    }
    // return
    return;
}

void setWinningTeams(vector<string> &winningTeams) {
    // Opens the winning team file and sets it as the winning team vector
    ifstream winningTeamsFile;
    winningTeamsFile.open("WorldSeriesWinners.txt");
    if (!winningTeamsFile) {
        cout << "There's a problem opening that file.";
    }
    else {
        // Once it reahes the end of the file it'll stop the loop
        while (!winningTeamsFile.eof()) {
            // gets the winning team from the file and adds it onto the vector
            string team;
            getline(winningTeamsFile, team);
            winningTeams.push_back(team);
        }
        // closes the file
        winningTeamsFile.close();
    }
    // return
    return;
}

bool verifyUserInput(string userInput, vector<string> teams) {
    // get the team size
    int teamSize = teams.size();
    // initlizes it to false so if it cannot be found it'll return false
    bool found = false;
    // Loops through and compares the user input and the vecor and if it's not able to be found it'll return false otherwise found will become true and will return true
    for (int i = 0; i < teamSize; i++) {
        if (teams[i] == userInput) {
            found = true;
        }
    }
    // returns whether or not it's found or not
    return found;
}

int getWins(string teamName, vector<string> teams) {
    // initlalizes wins to 0
    int wins = 0;
    // get the team size
    int teamSize = teams.size();
    // Loops and if it was determined that the team is in the vector it'll increment the wins by one
    for (int i = 0; i < teamSize; i++) {
        if (teams[i] == teamName) {
            wins++;
        }
    }
    // returns the amount of wins for that team
    return wins;
}