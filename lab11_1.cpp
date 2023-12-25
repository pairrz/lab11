#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main(){
    string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F","W"};
    cout <<"Press Enter 3 times to reveal your future.\n";
    srand(time(0));
    cin.get();
    cin.get();
    cin.get();
    cout <<"You will get "<< grade[rand() % 9] <<" in this 261102.";
    return 0;
}