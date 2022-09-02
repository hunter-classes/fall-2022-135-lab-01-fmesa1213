/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab1C

It asks the user to input an integer representing a year number. If the input year is a leap year according to the modern Gregorian calendar,
it should print Leap year, otherwise, print Common year.

*/
#include <iostream>
using namespace std;

int main()

{
cout << "Enter an integer that represents a year "<< endl;
int year1 = 0;
cin >> year1;

if (year1 % 400 == 0) {
    cout << year1 << " is a leap year.";
  }
 
  else if (year1 % 100 == 0) {
    cout << year1 << " is a common year.";
  }
  
  else if (year1 % 4 == 0) {
    cout << year1 << " is a leap year.";
  }
  
  else {
    cout << year1 << " is a common year.";
  }
return 0;
}
