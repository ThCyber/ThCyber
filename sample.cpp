#include <bits/stdc++.h>
using namespace std;

string get_string(string output)
{
	string input;
	cout << output;
	cin >> input;
	return input;
}


int main()
{
	string name = get_string("What's your name?");
	cout << "Hello, " << name << "!";
}