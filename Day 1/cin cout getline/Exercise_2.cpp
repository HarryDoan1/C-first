#include <iostream>
using namespace std;

int main() {
string name;
string hobby;
string phone;
string first;
string last;
cout << "Enter Your Information" << endl <<
"----------------------" << endl <<
"First and Last Name: ";
cin >> first >> last;
cout << "Hobbies: ";
cin.ignore();
getline(cin, hobby);
cout << "Phone Number: ";
cin >> phone;
cout <<"Here is your information" << endl <<
"------------------------" << endl <<
"First Name: " << first << endl <<
"Last Name: " << last << endl <<
"Your hobby: " << hobby << endl <<
"Your phone number: " <<phone;





}