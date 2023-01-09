#include <iostream>
using namespace std;

int main() {
int x;
int y;
int z;
cout << "Enter the length, width, and height:";
cin >> x;
cin >> y;
cin >> z;
cout << "Volume:" << x*y*z << endl;
cout << "Surface Area:" << 2*x*y + 2*x*z + 2*y*z << endl;

}