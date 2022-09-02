/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab1D

It asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years). 
*/
#include <iostream>
using namespace std;

int main()
{
cout << "Enter the year "<< endl;
int year1 = 0;
cin >> year1;

cout << "Enter the month "<< endl;
int month1 = 0;
cin >> month1;


int monthdays = 0 ;
  
  if( month1 == 2)
	{
		if((year1%400==0) || (year1%4==0))
			monthdays = 28;
		else	
			monthdays = 29;
    cout << monthdays << " days."<< endl;
	}
  
  if (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8
	||month1 == 10 || month1==120) 
    //common year//
  {   
		monthdays = 31;
     cout << monthdays << " days."<< endl;}
	
  if (month1 == 4 || month1 == 6 || month1 == 9 ||month1 == 11)
  {
		monthdays = 30;
    cout << monthdays << " days."<< endl;
  }
return 0;
}
