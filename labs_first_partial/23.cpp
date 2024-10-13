/*
Write a program to evaluate students based on their academic achievements. The program should perform the following tasks:
Check the following conditions:
- The program checks if the entered data is valid and if the student has more than 100 credits and an average grade higher than 8. 
If the conditions are met, the following calculations are made:
- Predicted credits are calculated as: (2023−year of enrollment)×60
- Points are calculated as: number of credits/PredictedCredits×10+(Average Grade−8.5)×6.5
If the student has more than 240 credits, "Needs to graduate!" is displayed as additional information. If the student's average grade is greater than 9, "Great student!" is displayed as additional information.
Alternatively, if the conditions are not met, the program sets the points to 0.
The program reads the number of credits (integer), year of enrollment (2010-2023), and average grade (decimal number) from standard input. 
It should print the student's points and the relevant additional message (if necessary).
*/

#include<iostream>
using namespace std;
int main() {
    int krediti, godina;
    double prosek, poeni;
    cin>>krediti>>godina>>prosek;
    if(krediti>100 && prosek>8.0) {
        int predvideni_krediti=(2023-godina)*60;
        poeni=(krediti/static_cast<double>(predvideni_krediti))*10+(prosek-8.5)*6.5;
        if(krediti>240) {
            cout<<"Needs to graduate! ";
        }
        if(prosek>9.0) {
            cout<<"Great student! ";
        }
    } else {
        poeni=0;
    }
    cout<<"Points: "<<poeni<<endl;;
    return 0;
}
