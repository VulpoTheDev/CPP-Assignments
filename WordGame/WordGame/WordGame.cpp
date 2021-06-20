#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, city, activity, animal, product, petName;
    int age, kids;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter a City: ";
    getline(cin, city);
    cout << "Enter an Activity: ";
    getline(cin, activity);
    cout << "Enter an Animal: ";
    getline(cin, animal);
    cout << "Enter a Food or Product: ";
    getline(cin, product);
    cout << "Enter an adjective noun: ";
    getline(cin, petName);
    cout << "Enter a number from 10 to 50: ";
    cin >> age;
    cout << "Enter a number between 0 and 15: ";
    cin >> kids;
    cout << "There was a student name " << name << " Who lived in a city named " << city << " when " << name << " was " << age << " they got a Job at Microsoft as a software engineer, which is pretty surprising then at the age of " << age + 20 << " " << name << " raised " << kids << " childrens and owns a pet " << animal << " named " << petName;
    return 0;
}