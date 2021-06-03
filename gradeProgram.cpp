// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May June 3, 2021
// This program returns the middle percentage of a numbered grade
// depending on the users input

#include <iostream>
#include <cmath>
#include <string>

// welcome the users and tell them what the program does
int Welcome() {
    std::cout <<
    "This program calculates the middle percentage for each grade number";
}

// this does the calculation, unfortunately using if elses
float CalcMark(std::string gradeNumInFunc) {
    float grade;

    if (gradeNumInFunc == "4+") {
        grade = 97.5;
    } else if (gradeNumInFunc == "4") {
        grade = 90.5;
    } else if (gradeNumInFunc == "4-") {
        grade = 83;
    } else if (gradeNumInFunc == "3+") {
        grade = 78;
    } else if (gradeNumInFunc == "3") {
        grade = 74.5;
    } else if (gradeNumInFunc == "3-") {
        grade = 71;
    } else if (gradeNumInFunc == "2+") {
        grade = 68;
    } else if (gradeNumInFunc == "2") {
        grade = 64.5;
    } else if (gradeNumInFunc == "2-") {
        grade = 61;
    } else if (gradeNumInFunc == "1+") {
        grade = 58;
    } else if (gradeNumInFunc == "1") {
        grade = 54.5;
    } else if (gradeNumInFunc == "1-") {
        grade = 51;
    } else {
        grade = -1;
    }
    // return it back to the function call
    return grade;
}

// this function gets the user input then displays it
void Getter() {
    // variables
    float percentage;

    // make the string version of the var
    std::string gradeNum;

    // get the number from the user
    std::cout << "\nWhat is the grade number(ie: 4+): ";
    std::cin >> gradeNum;

    // call the function and save the result as percentage
    percentage = CalcMark(gradeNum);

    // if percentage == -1 then there was an error with the input
    // tell this to the user
    if (percentage == -1) {
        std::cout <<"Your input of " << gradeNum << " was invalid\n";
        // restart the program
        Getter();
    // otherwise tell the user the answer
    } else {
        std::cout << "The middle percentage of the grade " << gradeNum
        << " is " << percentage << "%\n";
        // restart the program
        Getter();
    }
}

// call all the required functions
int main() {
    Welcome();
    Getter();
}
