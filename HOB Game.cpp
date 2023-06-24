// HOB Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Welcome to HOB Game\n" << endl;
    cout << "Rules:\n 1) First number must start of 1\n 2) if you enter else number you will lose\n 3) Be carefulu (:\n----------------------------------------------------------------\n" << endl;
l0:
    cout << "Which HOB do you want to play?\t (For example 3,5,4,...)" << endl;
    cin >> b;
    cout << "ENter first number: " << endl;
    cin >> a;
l1:
    if (a % b == 0)
    {
        cout << " YOU LOST ^_^ " << endl;
        goto l2;
    }
    else
        cout << "Enter next number: " << endl;
    cin >> a;
    goto l1;
l2:
    cout << "Do tou want to play again? ( 1:Yes , 2:No )" << endl;
    cin >> c;
    if (c == 1)
        goto l0;
    else if (c == 2)
        goto l3;
    else
    {
        cout << "Wrong number..!" << endl;
        goto l2;
    }
l3:
    switch (1)
    {
        break;
    }
}