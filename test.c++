#include<iostream>
using namespace std;

int main() {
    string name;
    float sub1, sub2, sub3, sub4, sub5;
    int roll;

    cout << "Enter student's name: ";
    cin >> name;
    cout << "Enter student's roll number: ";
    cin >> roll;
    cout << "Enter obtained marks in subject 1 (out of 100): ";
    cin >> sub1;
    cout << "Enter obtained marks in subject 2 (out of 100): ";
    cin >> sub2;
    cout << "Enter obtained marks in subject 3 (out of 100): ";
    cin >> sub3;
    cout << "Enter obtained marks in subject 4 (out of 100): ";
    cin >> sub4;
    cout << "Enter obtained marks in subject 5 (out of 100): ";
    cin >> sub5;

    cout << "\nStudent Name: " << name << endl;
    cout << "Roll Number: " << roll << endl;
    float per = (sub1 + sub2 + sub3 + sub4 + sub5) / 500 * 100;

    cout << "Percentage: " << per << endl;  // Added endl here

    return 0;
}
