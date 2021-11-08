#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

char str[26] = "HAIL COMMUNIST PEPPER PIG";

void compep()
{
    for (int i = 0; i < 999999; i++){
        for(int i = 0; i < sizeof(str);i++)
        {
            cout << str[i] << " ";
            this_thread::sleep_for(chrono::milliseconds(50) ); 
        }
        cout << endl;
    }
}