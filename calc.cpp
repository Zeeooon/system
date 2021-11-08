//basic calculator that almost everything has

#include <string> 
#include <iostream>

#include "includes.h"

using namespace std;

float num1, num2;
string s;

  void calc()
  {
    SetConsoleTitleA("SystemApp - For Power users (Calculator)");
    cout << "What is the first number? ";
    cin >> num1;
    cout << "What is the second number? ";
    cin >> num2;
    cout << "What is the operation? ";
    cin >> s;
      if(s == "+")
      {
        cout << num1 + num2 << endl;
      }
      if(s == "-")
      {
        cout << num1 - num2 << endl;
      }
      if(s == "*")
      {
        cout << num1 * num2 << endl;
      }
      if(s == "/")
      {
        cout << num1 / num2 << endl;
      }
  }