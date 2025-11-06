/*
* File: P10-3
* Author: Anna Keeler
* Date: 11/6/2025
*
* Description: Lab Problem 10 part 3
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
//prototype
void selectionSortIntArray(int thisArray[], int thisArraySize);


//global variable


int main(void) {
    while (true) {
        
        int numberOfStudents;
        cout << "Number of students in class section: ";
        cin >> numberOfStudents;
       
        int scores[20];

        for (int i = 0; i < numberOfStudents; i++) {
            cout << "Student Number " << (i+1) << " score is: ";
            cin >> scores[i];
        }
        selectionSortIntArray(scores, numberOfStudents);

        double sum = 0.0;
        for (int i = 0; i < numberOfStudents; i++) {
           
            sum += scores[i];
        }
        double average = sum / numberOfStudents;


        cout << "Lowest score: " << scores[0] << endl;
        cout << "Highest score: " << scores[numberOfStudents-1] << endl;
        cout << "Average: " << average << endl;

        if (numberOfStudents > 20) {
            cout << "Sorry, you can't input more than 20 students.";
        }
        if (numberOfStudents == 'Q') {
            break;
        }
    }

    return 0;
}
void selectionSortIntArray(int thisArray[], int thisArraySize) {
    int minimum;
    int minimumIndex;

    for (int i = 0; i < thisArraySize; i++) {
        minimum = thisArray[i];
        minimumIndex = i;
        for (int j = i + 1; j < thisArraySize; j++) {
            if (thisArray[j] < minimum) {
                minimum = thisArray[j];
                minimumIndex = j;
            }

        }
        swap(thisArray[i], thisArray[minimumIndex]);
    }
    return;
}