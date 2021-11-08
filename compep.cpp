#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

char str[26] = "HAIL COMMUNIST PEPPER PIG";

void compep()
{
    while (true){
        //prints out HAIL COMMUNIST PEPPER PIG indefinitely
        for(int i = 0; i < sizeof(str);i++)
        {
            cout << str[i] << " ";
            this_thread::sleep_for(chrono::milliseconds(50) ); 
        }
        cout << endl;
    }
}