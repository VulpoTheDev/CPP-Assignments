#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// This program will ask the user what careers they would like to have and will predict thier future
int main() {
    unsigned seed = time(0);
    srand(seed);

    string careerOne, careerTwo, careerThree;
    // This will prompt the user about their 3 career choices
    cout << "Hello there I'm the Fortune Teller, give me 3 of your career choices and I'll try my best to predict the future" << endl;
    cout << "Career Choice One: ";
    getline(cin, careerOne);
    cout << "Career Choice Two: ";
    getline(cin, careerTwo);
    cout << "Career Choice Three: ";
    getline(cin, careerThree);

    // Generates a number from 1 to 10.
    int randomNumber = 1 + rand() % 10;

    // Predicts using the random number
    if (randomNumber <= 3) {
        cout << "You'll be an " << careerOne << " in the future" << endl;
    }
    else if (randomNumber <= 6) {
        cout << "You'll be an " << careerTwo << " in the future" << endl;
    }
    else if (randomNumber <= 9) {
        cout << "You'll be an " << careerThree << " in the future" << endl;
    }
    else {
        cout << "Unfortunately you will not get either one of these career choices";
    }

}