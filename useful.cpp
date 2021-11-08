#include <iostream>
#include <string>

#include "includes.h"

string input;


int main()
{
    while (true){
        cout << "What will you like to do?" << endl;
        getline(cin, input); // gets a line of input from the user 
        //check if the input matches a function
        if (input == "calc") 
        {
            //simple calculator
            calc();
        }
        if(input == "compep")
        {
            //try this out.
            compep();
        }
        if(input == "exit")
            return 0; 
    }
}