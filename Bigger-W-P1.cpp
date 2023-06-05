/*
Programmer: William Bigger
Instructor: John Coffey
Intro to C++
Purpose: Take user grades, give information and warnings for failing grades
*/

#include <iostream>
using namespace std;

int main() {
    int midTermGrade;
    int projectAverage;
    int homeworkAverage;
    int highestGrade;
    int lowestGrade;
    double denominatorCalcAverage = 75.0;
    double weightedAverage;

    cout << endl;
    cout << "Please enter your midterm grade (all MUST be an INT): ";
    cin >> midTermGrade;
    cout << "Your midterm grade is " << midTermGrade << "%." << endl;
    cout << endl;

    cout << "Please enter your project average: ";
    cin >> projectAverage;
    cout << "Your project average is " << projectAverage << "%." << endl;
    cout << endl;

    cout << "Please enter your homework average: ";
    cin >> homeworkAverage;
    cout << "Your homework average is: " << homeworkAverage << "%." << endl;

    cout << endl;
//first branch statements, if two are the same
    if (midTermGrade == projectAverage && midTermGrade > homeworkAverage) {
        highestGrade = midTermGrade;
        lowestGrade = homeworkAverage;
        cout << "Your highest grades are your mid-term and project average, at " << highestGrade << "%." << endl;
        cout << "Your lowest grade is your homework average, at " << lowestGrade << "%." << endl;
    }
    else if (midTermGrade == projectAverage && midTermGrade < homeworkAverage) {
        highestGrade = homeworkAverage;
        lowestGrade = midTermGrade;
        cout << "Your highest grade is your homework average, at " << highestGrade << "%." << endl;
        cout << "Your lowest grade is your mid-term grade, at " << lowestGrade << "%." << endl;
    }
    else if (midTermGrade == homeworkAverage && midTermGrade > projectAverage) {
        highestGrade = midTermGrade;
        lowestGrade = projectAverage;
        cout << "Your highest grades are your mid-term and homework average, at " << highestGrade << "%." << endl;
        cout << "Your lowest grade is your project average, at " << lowestGrade << "%." << endl;
    }
    else if (midTermGrade == homeworkAverage && midTermGrade < projectAverage) {
        highestGrade = projectAverage;
        lowestGrade = midTermGrade;
        cout << "Your highest grade is your project average, at " << highestGrade << "%." << endl;
        cout << "Your lowest grade is your mid-term grade, at " << lowestGrade << "%." << endl;
    }
    else if (projectAverage == homeworkAverage && projectAverage > midTermGrade) {
        highestGrade = projectAverage;
        lowestGrade = midTermGrade;
        cout << "Your highest grades are your project average and homework average, at " << highestGrade << "%." << endl;
        cout << "Your lowest grade is your mid-term grade, at " << lowestGrade << "%." << endl;
    }
    else if (projectAverage == homeworkAverage && projectAverage < midTermGrade) {
        highestGrade = midTermGrade;
        lowestGrade = projectAverage;
        cout << "Your highest grade is your mid-term grade, at " << highestGrade << "%." << endl;
        cout << "Your lowest grades are your project average and homework average, at " << lowestGrade << "%." << endl;
    }
// if all three grades are different
    if (midTermGrade != projectAverage && midTermGrade != homeworkAverage && projectAverage != homeworkAverage) {

        if (midTermGrade > projectAverage && midTermGrade > homeworkAverage) {
            highestGrade = midTermGrade;
            cout << "Your highest grade is your mid-term grade, at " << highestGrade << "%" << endl;

            if (projectAverage > homeworkAverage) {
                lowestGrade = homeworkAverage;
                cout << "Your lowest grade is your homework average, at " << lowestGrade << "%" << endl;
            }
            else {
                lowestGrade = projectAverage;
                cout << "Your lowest grade is your project average, at " << lowestGrade << "%" << endl;
            }
        }

        else if (projectAverage > midTermGrade && projectAverage > homeworkAverage) {
            highestGrade = projectAverage;
            cout << "Your highest grade is your project average, at " << highestGrade << "%." << endl;

            if (midTermGrade > homeworkAverage) {
                lowestGrade = homeworkAverage;
                cout << "Your lowest grade is your homework average, at " << lowestGrade << "%." << endl;
            }
            else {
                lowestGrade = midTermGrade;
                cout << "Your lowest grade is your mid-term grade, at " << lowestGrade << "%." << endl;
            }
        }

        else if (homeworkAverage > midTermGrade && homeworkAverage > projectAverage) {
            highestGrade = homeworkAverage;
            cout << "Your highest grade is your homework average, at " << highestGrade << "%." << endl;

            if (midTermGrade > projectAverage) {
                lowestGrade = projectAverage;
                cout << "Your lowest grade is your project average, at " << lowestGrade << "%." << endl;
            }
            else {
                lowestGrade = midTermGrade;
                cout << "Your lowest grade is your mid-term grade, at " << lowestGrade << "%." << endl;
            }
        }
    }
//calculating the user's current grade for all classes

     weightedAverage = (midTermGrade * 20 + projectAverage * 40 + homeworkAverage * 15) / denominatorCalcAverage;
    cout << "Your overall average grade is " << weightedAverage << "%." << endl;


    cout << endl;
//failing warning message
    if (midTermGrade < 70) {
        cout << "Your mid-term grade is under the C-minus grade required!" << endl;
    }
    if (projectAverage < 70) {
        cout << "Your project average grade is under the C-minus grade required!" << endl;
    }
    if (homeworkAverage < 70) {
        cout << "Your homework average grade is under the C-minus grade required!" << endl;
    }
    if (weightedAverage < 70) {
        cout << "Your weighted average grade is under the C-minus grade required!" << endl;
    }

    return 0;
}
