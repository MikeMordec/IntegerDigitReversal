//============================================================================
// Name        : PE_6-9.cpp
//
//
// Author      : Mike Mordec
// Date		   : 10/15/2022
//
//		       : This is LAB 4 of
//			   : CSC 155 - CS Department
//			   : Oakton Community College
// 		       :
// 			   :
// Description : A function, revereDigit, that takes an integer as a parameter
//			     and returns the number with its digits reversed.
//			     For example:
//			   		the value of reverseDigit(12345) is 54321;
//============================================================================
#include<iostream>

using namespace std;
int reverseDigit(int);
int main() {
  int number, reversed;
  cout << "Enter an integer:";
  cin >> number;
  reversed = reverseDigit(number);
  cout << number << "  with digits reversed =  " << reversed << ", leading zeroes if any are not shown." "\n";
  return 0;
}
int reverseDigit(int n) {
  int newnum = 0;
  int sign = 1;
  if (n < 0) {
    sign = -1;
    n *= sign;
  }
  while (n > 0) {
    newnum = newnum * 10 + n % 10;
    n = n / 10;
  }
  return newnum * sign;
}
