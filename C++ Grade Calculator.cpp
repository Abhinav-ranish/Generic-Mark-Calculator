#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    double percentage, percentage1;
    int sumOfTwoNumbers;
    int A = 90;
    int B = 80;
    int C = 75;
    int D = 60;
    int E = 50;

    cout << "C++ Grade Calculator\n";

    string name, age, gender, classStr, marksStr, passMarksStr, maxMarksStr;
    cout << "What is the student's name? ";
    getline(cin, name);
    cout << "What is the student's age? ";
    getline(cin, age);
    cout << "What is the student's gender? ";
    getline(cin, gender);
    cout << "What is the student's class? ";
    getline(cin, classStr);
    cout << "What are the marks acquired by the student? ";
    getline(cin, marksStr);
    cout << "What is the pass marks for the test? ";
    getline(cin, passMarksStr);
    cout << "What is the maximum marks in the test? ";
    getline(cin, maxMarksStr);
    cout << "Press enter to continue\n";
    cin.get();

    int marks = stoi(marksStr);
    int maxMarks = stoi(maxMarksStr);
    int passMarks = stoi(passMarksStr);
    int classNum = stoi(classStr);
    percentage = marks * 100.0 / maxMarks;
    percentage1 = passMarks * 100.0 / maxMarks;
    sumOfTwoNumbers = classNum + 1;

    cout << "Name of student: " << name << endl;
    cout << "Age of student: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Percentage Acquired: " << percentage << endl;

    cout << "Overall Grade: ";
    if (percentage > A) {
        cout << "A" << endl;
    }
    else if (percentage > B ) {
        cout << "B" << endl;
    }
    else if (percentage > C ) {
        cout << "C" << endl;
    }
    else if (percentage > D ) {
        cout << "D" << endl;
    }
    else if (percentage > E ) {
        cout << "E" << endl;
    }
    else {
        cout << "F" << endl;
    }

    if (percentage > percentage1) {
        cout << "Passed and promoted to class " << sumOfTwoNumbers << endl;
    }
    else {
        cout << "Failed. Try harder next time." << endl;
    }

    ofstream file("marks.txt");
    file << name << endl;
    file << age << endl;
    file << gender << endl;
    file << classNum << endl;
    file << marks << endl;
