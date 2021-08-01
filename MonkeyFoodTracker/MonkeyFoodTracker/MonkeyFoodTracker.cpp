#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
void calculateDailyAverage(double[][7], int, double(&dailyAverage)[7]);
void getLeastAmount(double[][7], int, double&, int&, int&);
void getMostAmount(double[][7], int, double&, int&, int&);


int main()
{
    // Amount of Moneys you want to track
    const int monkeyAmount = 3;
    // Makes the 2D Array Rows being Monkey (that depends on the amount) and the days in the week (7)
    double weeklyMonkeyFood[monkeyAmount][7];
    // Stat Stuff
    double dailyAverage[7], leastAmount, mostAmount;
    int leastDay = 0, leastMonkey = 0, mostDay = 0, mostMonkey = 0;
    // Loops through every money
    for (int i = 0; i < monkeyAmount; i++) {
        // Prints the Header just to know what monkey you're inputting data for
        cout << "================== Monkey " << (i + 1) << " ======================" << endl;
        // Goes through the days in the week and asks how many pounds did the money eaten
        for (int j = 0; j < 7; j++) {
            double poundsOfFood;
            cout << "For Day " << (j+1) << ", How much Food Monkey "<< (i+1) << " has eaten : ";
            cin >> poundsOfFood;
            // Sets the pounds of food for the day and monkey
            weeklyMonkeyFood[i][j] = poundsOfFood;
        }
    }  
    cout << "===================================================" << endl;
    
    // Calculates the Average Pounds eaten Per Day
    calculateDailyAverage(weeklyMonkeyFood, monkeyAmount, dailyAverage);
    getLeastAmount(weeklyMonkeyFood, monkeyAmount, leastAmount, leastDay, leastMonkey);
    getMostAmount(weeklyMonkeyFood, monkeyAmount, mostAmount, mostDay, mostMonkey);

    // Prints the Daily Average
    for (int i = 0; i < 7; i++) {
        cout << setprecision(2);
        cout << "Average for Day " << (i + 1) << ": " << fixed << dailyAverage[i] << endl;
    }
    // Prints Least and most amount of food eaten
    cout << "Least Amount of Food eaten was from monkey " << (leastMonkey + 1) << " on day " << (leastDay + 1) << " with " << leastAmount << endl;
    cout << "Most Amount of Food eaten was from monkey " << (mostMonkey + 1) << " on day " << (mostDay + 1) << " with " << mostAmount << endl;

    // Ends the program
    return 0;
}

// This function will calculate the daily average for poundsOfFood each monkey taken and returns an array
void calculateDailyAverage(double weeklyMonkeyFood[][7], int monkeyAmount, double (&dailyAverage)[7]) {
    // Goes through each day
    for (int i = 0; i < 7; i++) {
        // Total of Pounds eaten that day
        double total = 0;
        // Goes through each monkey and adds it to the total
        for (int j = 0; j < monkeyAmount; j++) {
            total += weeklyMonkeyFood[j][i];
        }

        // Sets the average for that day to the total divide by the amount of monkeys
        dailyAverage[i] = total / monkeyAmount;
    }
    return;
}

// This function will get the least amount of food from each monkey per day
void getLeastAmount(double weeklyMonkeyFood[][7], int monkeyAmount, double &leastAmount, int &leastDay, int &leastMonkey) {
    leastAmount = weeklyMonkeyFood[leastMonkey][leastDay];
    // Loops through every money
    for (int i = 0; i < monkeyAmount; i++) {
        // Loops through each day in the week
        for (int j = 0; j < 7; j++) {
            // Is that monkey on that day smaller than what is set? Update the stuff otherwise continue
            if (leastAmount > weeklyMonkeyFood[i][j]) {
                leastMonkey = i;
                leastDay = j;
                leastAmount = weeklyMonkeyFood[i][j];
           }
        }
    }
    return;
}

// This function will get the most amount of food from each monkey per day
void getMostAmount(double weeklyMonkeyFood[][7], int monkeyAmount, double& mostAmount, int& mostDay, int& mostMonkey) {
    mostAmount = weeklyMonkeyFood[mostMonkey][mostDay];
    // Loops through every money
    for (int i = 0; i < monkeyAmount; i++) {
        // Loops through each day in the week
        for (int j = 0; j < 7; j++) {
            // Is that monkey on that day larger than what is set? Update the stuff otherwise continue
            if (mostAmount < weeklyMonkeyFood[i][j]) {
                mostMonkey = i;
                mostDay = j;
                mostAmount = weeklyMonkeyFood[i][j];
            }
        }
    }
    return;
}