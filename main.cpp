#include <iostream>
#include <exception>
using namespace std;

class argumentoneisnogood : public exception {
public:
    const char* what() const throw() override {
        return "Error: Argument one is greater than zero.";
    }
};

class theycantbethesame : public exception {
public:
    const char* what() const throw() override {
        return "Error: Argument one and argument two cannot be the same.";
    }
};

class theycantadd : public exception {
public:
    const char* what() const throw() override {
        return "Error: Argument three cannot be equal to the sum of argument one and argument two.";
    }
};

int checkArguments(int a, int b, int c) {
  if (a > 0) 
  {
    throw argumentoneisnogood();
  }
  else if (a == b) 
  {
    throw theycantbethesame();
  }
  else if (c == a + b) 
  {
    throw theycantadd();
  }
  else
  {
    return (a + b + c);
  }
}

int main() {

int a = 0;
int b = 0;
int c = 0;

cout << "\nEnter an Integer for Argument One: ";
cin >> a;

while (cin.fail())
{
  cin.clear();
  cin.ignore();
  cout << "\nInvalid input. Please try again: ";
  cin >> a;
}

cout << "\nEnter an Integer for Argument Two: ";
cin >> b;

while (cin.fail())
{
  cin.clear();
  cin.ignore();
  cout << "\nInvalid input. Please try again: ";
  cin >> b;
}

cout << "\nEnter an Integer for Argument Three: ";
cin >> c;

while (cin.fail())
{
  cin.clear();
  cin.ignore();
  cout << "\nInvalid input. Please try again: ";
  cin >> c;
}

try 
{
  checkArguments(a, b, c);
  cout << "\nAll arguments are valid.\n";
}

catch (const argumentoneisnogood& e) 
{
  cout << e.what() << endl;
}
catch (const theycantbethesame& e) 
{
  cout << e.what() << endl;
}
catch (const theycantadd& e) 
{
  cout << e.what() << endl;
}
catch (...) 
{
  cout << "\nAn unexpected error occurred." << endl;
}

return 0;
}

