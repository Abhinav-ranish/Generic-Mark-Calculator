#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    char Grade = 'B';
    //int age = 16;
    //int bmarks, fmarks, pmarks;
    double percentage, percentage1;
    bool male = true;
    //int Section = 11;
    string Name = "Abhinav";
    int sumOfTwoNumbers;
    int A = 85;
    int B = 75;
    int C = 65;
    int D = 30;
    int E = 2;

    cout << R"(

_________.__
\______   \  | _____  ________ ____
 |    |  _/  | \__  \ \___   // __ \
 |    |   \  |__/ __ \_/    /\  ___/
 |______  /____(____  /_____ \\___  >
        \/          \/      \/    \/
     ________                  .___
    /  _____/___________     __| _/____
   /   \  __\_  __ \__  \   / __ |/ __ \
   \    \_\  \  | \// __ \_/ /_/ \  ___/
    \______  /__|  (____  /\____ |\___ >
           \/           \/      \/    \/
     _________        .__               .__          __
     \_   ___ \_____  |  |   ____  __ __|  | _____ _/  |_  ___________
     /    \  \/\__  \ |  | _/ ___\|  |  \  | \__  \\   __\/  _ \_  __ \
     \     \____/ __ \|  |_\  \___|  |  /  |__/ __ \|  | (  <_> )  | \/
      \______  (____  /____/\___  >____/|____(____  /__|  \____/|__|
             \/     \/          \/                \/

               )" << "\n";




    string response, response1 , response2, response6, response3, response4, response5;
        cout << "What is the students name? ";
    getline(cin, response);
    cout << "Your response was: " << response <<endl;
    cout << "What is the students age? ";
    getline(cin, response1);
    cout << "Your response was: " << response1 <<endl;
    cout << "What is the students gender? ";
    getline(cin, response2);
    cout << "Your response was: " << response2 <<endl;
     cout << "What is the students class? ";
    getline(cin, response6);
    cout << "Your response was: " << response6 <<endl;
    cout << "What is the marks acquired by student? ";
    getline(cin, response3);
    cout << "Your response was: " << response3 <<endl;
    cout << "What is the pass marks for the test? ";
    getline(cin, response4);
    cout << "Your response was: " << response4 <<endl;
    cout << "What is the maximum marks in the test? ";
    getline(cin, response5);
    cout << "Your response was: " << response5 <<endl;
    cout << "Enter to continue" <<endl;

    cin.get();

    int bmarks = stoi(response3);
    int fmarks = stoi(response5);
    int pmarks = stoi(response4);
    int Section = stoi(response6);
    percentage = bmarks* 100 / fmarks ;
    percentage1 = pmarks*100 / fmarks ;
    sumOfTwoNumbers =  Section + 1;




    cout << "Name of student = " <<response << endl;
    cout << "Overall Grade = "  <<endl;
     if (percentage > A) {
        cout <<"Passed with flying colours. Grade = A" <<endl;
    }
    else if (percentage > B ) {
        cout <<"Passed with good marks. Grade = B" <<endl;
    }
    else if (percentage > C ) {
        cout <<"Passed with average marks. Grade = C" <<endl;
    }
    else if (percentage > D ) {
        cout <<"Passed. Try Harder Next time . Grade = D" <<endl;
    }
    else if (percentage > E ) {
        cout <<"Failed. Grade = E" <<endl;
    }
    cout << "Age of Student = " <<response1 <<endl;
    cout << "Gender = " <<response2 <<endl;
    cout << "Percentage Acquired = " <<percentage <<endl;
    if (percentage > percentage1) {
        cout << "Passed and Promoted to " <<sumOfTwoNumbers <<endl;
    }
    else {cout <<"Failed. Try Harder Next time" <<endl;}

    ofstream file("marks.txt");
    file << response;
    file.close();

    return 0;
}
