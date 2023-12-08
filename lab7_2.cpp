#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int id;
    string movie;
    string day;
    int gear;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    getline(cin,name);
    cout << "?????: ";
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cin >> id;
    gear = id/10000000 -12;
    cout << name << ": ";
    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cin.ignore();
    getline(cin,movie);
    cout <<name<<": ";
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    getline(cin,day);
    cout << name << ": ";
    cout << "Fahsai: " << day <<"....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    cout << name << ": ";
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";
return 0;
}