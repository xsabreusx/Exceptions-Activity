#include <iostream>
using namespace std;

int pickyFunction(int &a, int &b, int &c){

    return (a+b+c);
}

int main()
{

int a = 0;
int b = 0;
int c = 0;

cout << "Enter an Integer: ";
cin >> a;

cout << "Enter an Integer: ";
cin >> b;

cout << "Enter an Integer: ";
cin >> c;

pickyFunction(a, b, c);

return;


}