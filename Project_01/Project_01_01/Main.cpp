#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> convertHexToBinary(string s) 
{
	vector<int> b;
	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
		case '0': {
			b.push_back(0);
			b.push_back(0);
			b.push_back(0);
			b.push_back(0);
			break;
		}
		case '1': {
			b.push_back(1);
			b.push_back(0);
			b.push_back(0);
			b.push_back(0);
			break;
		}
		case '2': {
			b.push_back(0);
			b.push_back(1);
			b.push_back(0);
			b.push_back(0);
			break;
		}
		case '3': {
			b.push_back(1);
			b.push_back(1);
			b.push_back(0);
			b.push_back(0);
			break;
		}
		case '4': {
			b.push_back(0);
			b.push_back(0);
			b.push_back(1);
			b.push_back(0);
			break;
		}
		case '5': {
			b.push_back(1);
			b.push_back(0);
			b.push_back(1);
			b.push_back(0);
			break;
		}
		case '6': {
			b.push_back(0);
			b.push_back(1);
			b.push_back(1);
			b.push_back(0);
			break;
		}
		case '7': {
			b.push_back(1);
			b.push_back(1);
			b.push_back(1);
			b.push_back(0);
			break;
		}
		case '8': {
			b.push_back(0);
			b.push_back(0);
			b.push_back(0);
			b.push_back(1);
			break;
		}
		case '9': {
			b.push_back(1);
			b.push_back(0);
			b.push_back(0);
			b.push_back(1);
			break;
		}
		case 'A': {
			b.push_back(0);
			b.push_back(1);
			b.push_back(0);
			b.push_back(1);
			break;
		}
		case 'B': {
			b.push_back(1);
			b.push_back(1);
			b.push_back(0);
			b.push_back(1);
			break;
		}
		case 'C': {
			b.push_back(0);
			b.push_back(0);
			b.push_back(1);
			b.push_back(1);
			break;
		}
		case 'D': {
			b.push_back(1);
			b.push_back(0);
			b.push_back(1);
			b.push_back(1);
			break;
		}
		case 'E': {
			b.push_back(0);
			b.push_back(1);
			b.push_back(1);
			b.push_back(1);
			break;
		}
		case 'F': {
			b.push_back(1);
			b.push_back(1);
			b.push_back(1);
			b.push_back(1);
			break;
		}
		}
	}
	return b;
}

int main() 
{
	string s;
	vector<int> b;
	cin >> s;
	b = convertHexToBinary(s);
	return 0;
}