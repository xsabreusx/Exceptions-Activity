#include <iostream>
#include <exception>
using namespace std;

class exception3: public exception {
  virtual const char* what() const throw() {
    return "My exception happened";
  }
} ex1;

class exception2: public exception {
  virtual const char* what() const throw() {
    return "My exception happened";
  }
} ex2;

class exception3: public exception {
  virtual const char* what() const throw() {
    return "My exception happened";
  }
} ex3;

int what(int a, int b, int c) {
    try {
        if 
    }
    catch(){
    }
    return a + b + c;
}

int main() {

int a = 0;
int b = 0;
int c = 0;

cout << "Enter an Integer: ";
cin >> a;

cout << "Enter an Integer: ";
cin >> b;

cout << "Enter an Integer: ";
cin >> c;

what(a, b, c);

return 0;
}