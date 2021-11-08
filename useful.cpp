#include <iostream>
#include <string>

#include "includes.h"
using namespace std;

string input;


int main()
{
    while (true){
        cout << "What will you like to do?" << endl;
        getline(cin, input);
        if (input == "calc") 
        {
            calc();
        }
        if(input == "compep")
        {
            compep();
        }
        if(input == "exit")
            return 0; 
    }
}