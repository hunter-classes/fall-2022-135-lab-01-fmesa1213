/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab1B

It asks the user to input three integer numbers, and prints out the smallest of the three.

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
  
  cout << "Enter the final integer number: " << endl;
	float num3 = 0;
	cin >> num3;
  
 int smallnum = 2147483647;
  if(num1 < smallnum)
    smallnum = num1;
  if(num2 < smallnum)
    smallnum = num2;
  if(num3 < smallnum)
    smallnum = num3;
  
   
	cout << "The smallest of the three is " << smallnum << "." << endl;

  return 0;
}
