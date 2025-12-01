// teams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//it was easy but took some times to find out a solution as I thouht it was more complex
#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
            count++;
    }
    cout << count;}