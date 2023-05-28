/*
Programmer : William Bigger
Instructor : John Cofffey
Project : C++ grade average calculator
Purpose : compare grades for C++ assignments, and determine the overall average grade
 
 The name of your program file should be: your last name, a dash (-), your
first initial, another dash, the letter 'p', the project number, followed by the .cpp
extension. For example, if your name is John Coffey, and you are submitting
project 3, your file should be called coffey-j-p3.cpp.
*/

#include <iostream>
using namespace std;

int main() {
    int midTermGrade;  
    int projectAverage;
    int homeworkAverage;
    int highestGrade;
    int lowestGrade;
    // dividing an int by a double yields a double
    double denominatorCalcAverage = 75.0;
    double weightedAverage;
//user enters grades
    cout << "Please enter your midterm grade (MUST be an INT): ";
    cin >> midTermGrade;
    cout << "Your midterm grade is " << midTermGrade << "%." << endl;

    cout << "Please enter your project average (MUST be an INT): ";
    cin >> projectAverage;
    cout << "Your project average is " << projectAverage << "%." << endl;

    cout << "Please enter your homework average (MUST be an INT): ";
    cin >> homeworkAverage;
    cout << "Your homework average is: " << homeworkAverage << "%." << endl;
// white space between outputs makes code console easier to read
    cout << endl;
// if else if branch starts by examining equal grades
// mid term and project are equal and more than homework
    if (midTermGrade == projectAverage && midTermGrade > homeworkAverage) {
        highestGrade = midTermGrade;
        lowestGrade = homeworkAverage;
        cout << "Your highest grades are your mid-term and project average, at " << highestGrade << "%." << endl;
        cout << "Your lowest grade is your homework average, at " << lowestGrade << "%." << endl;
    }
    // if mid term and project are equal and less than homework
    else if (midTermGrade == projectAverage && midTermGrade < homeworkAverage) {
        highestGrade = homeworkAverage;
        lowestGrade = midTermGrade;
        cout << "Your highest grade is your homework average, at " << highestGrade << "%." << endl;
        cout << "Your lowest grades are your mid-term and project average, at " << lowestGrade << "%." << endl;
    }
    else if (midTermGrade == homeworkAverage && midTermGrade > projectAverage) {
        highestGrade = midTermGrade;
        lowestGrade = projectAverage;
        cout << "Your highest grades are your mid-term and homework average, at " << highestGrade << "%." << endl;
        cout << "Your lowest grade is your project average, at " << lowestGrade << "%." << endl;
    }
    // if mid term and homework are equal
    else if (midTermGrade == homeworkAverage && midTermGrade < projectAverage) {
        highestGrade = projectAverage;
        lowestGrade = midTermGrade;
        cout << "Your highest grade is your project average, at " << highestGrade << "%." << endl;
        cout << "Your lowest grades are your mid-term and homework average, at " << lowestGrade << "%." << endl;
    }
    else if (projectAverage == homeworkAverage && projectAverage > midTermGrade) {
        highestGrade = projectAverage;
        lowestGrade = midTermGrade;
        cout << "Your highest grades are your project average and homework average, at " << highestGrade << "%." << endl;
        cout << "Your lowest grade is your mid-term grade, at " << lowestGrade << "%." << endl;
    }
    // if project and homework are equal
    else if (projectAverage == homeworkAverage && projectAverage < midTermGrade) {
        highestGrade = midTermGrade;
        lowestGrade = projectAverage;
        cout << "Your highest grade is your mid-term grade, at " << highestGrade << "%." << endl;
        cout << "Your lowest grades are your project average and homework average, at " << lowestGrade << "%." << endl;
    }
    // if all three grades are equal
    if (midTermGrade == projectAverage && projectAverage == homeworkAverage) {
        highestGrade = midTermGrade;
        cout << "All three of your grades are the same! Your grade is " << highestGrade << "%." << endl;
    }
    // if mid term is highest
        if (midTermGrade > projectAverage && midTermGrade > homeworkAverage) {
        highestGrade = midTermGrade;
        cout << "Your highest grade is your mid-term grade, at " << highestGrade << "%" << endl;
// nested statements determine the lowest grade
            if (projectAverage > homeworkAverage) {
                lowestGrade = homeworkAverage;
                cout << "Your lowest grade is your homework average, at " << lowestGrade << "%" << endl;
        } 
            else if (projectAverage < homeworkAverage) {
                lowestGrade = projectAverage;
                cout << "Your lowest grade is your project average, at " << lowestGrade << "%" << endl;
        }
    }
      // if project average is highest
    else if (projectAverage > midTermGrade && projectAverage > homeworkAverage) {
        highestGrade = projectAverage;
        cout << "Your highest grade is your project average, at " << highestGrade << "%." << endl;
         // nested decisions 
            if (midTermGrade > homeworkAverage) {
                lowestGrade = homeworkAverage;
                cout << "Your lowest grade is your homework average, at " << lowestGrade << "%." << endl;
        } 
            else if (midTermGrade < homeworkAverage) {
                lowestGrade = midTermGrade;
                cout << "Your lowest grade is your mid-term grade, at " << lowestGrade << "%." << endl;
        }
    }
    // homework average is highest
    else if (homeworkAverage > midTermGrade && homeworkAverage > projectAverage) {
        highestGrade = homeworkAverage;
        cout << "Your highest grade is your homework average, at " << highestGrade << "%." << endl;

        if (midTermGrade > projectAverage) {
            lowestGrade = projectAverage;
            cout << "Your lowest grade is your project average, at " << lowestGrade << "%." << endl;
        } 
        else if (midTermGrade < projectAverage) {
            lowestGrade = midTermGrade;
            cout << "Your lowest grade is your mid-term grade, at " << lowestGrade << "%." << endl;
        }
    }
// calculating the overall grade.
    weightedAverage = (midTermGrade * 20 + projectAverage * 40 + homeworkAverage * 15) / denominatorCalcAverage;
    cout << "Your overall average grade is " << weightedAverage << "%." << endl;
// white space makes output easier to read
    cout << endl;
// warning message for failing grades
    if (midTermGrade < 70) {
        cout << "Your mid-term grade is under the C-minus grade required for credit toward your Computer Science degree!" << endl;
    }
    if (projectAverage < 70) {
        cout << "Your project average grade is under the C-minus grade required for credit toward your Computer Science degree!" << endl;
    }
    if (homeworkAverage < 70) {
        cout << "Your homework average grade is under the C-minus grade required for credit toward your Computer Science degree!" << endl;
    }
    if (weightedAverage < 70) {
        cout << "Your weighted average grade is under the C-minus grade required for credit toward your Computer Science degree!" << endl;
    }

    return 0;
}

