// way_too_long_words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()

{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;
		if (word.length() > 10)
		{
			cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
		}
		else
		{
			cout << word << endl;
		}
	}
}

