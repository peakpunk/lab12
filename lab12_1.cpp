#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

int main(){
    string grade;
    int ra;
    cout << "Press Enter 3 times to reveal your future.";
    for (int i = 1; i <= 3; i++) cin.get();
    srand(time(0));
    ra = rand()%9;
    if (ra == 0) grade =  "A";
    else if (ra == 1) grade =  "B";
    else if (ra == 2) grade =  "B+";
    else if (ra == 3) grade =  "C";
    else if (ra == 4) grade =  "C+";
    else if (ra == 5) grade =  "D";
    else if (ra == 6) grade =  "D+";
    else if (ra == 7) grade =  "F";
    else if (ra == 8) grade =  "W";
    cout << "You will get " << grade << " in this 261102.";
    return 0;
}