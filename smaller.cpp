/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab1A

It asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include <iostream>
using namespace std;

int main() {

  cout << "Enter an integer number: " << endl;
	float num1 = 0;
	cin >> num1;
	
  cout << "Enter another integer number: " << endl;
	float num2 = 0;
	cin >> num2;
  
 int smallnum = 2147483647;
  if(num1 < smallnum)
    smallnum = num1;
  if(num2 < smallnum)
    smallnum = num2;
  
   
	cout << "The smaller of the two is " << smallnum << "." << endl;

  return 0;
}
