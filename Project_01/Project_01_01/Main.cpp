#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*
Chuyen chuoi Hex sang chuoi Binary
Input:	1 string ( chuoi Hex ) ( strHex ).
Output: 1 vector ( chuoi Binary ).
*/
vector<int> convertHexToBinary(string strHex) 
{
	vector<int> arrBit;
	for (int i = 0; i < strHex.length(); i++)
	{
		switch (strHex[i])
		{
		case '0': {
			arrBit.push_back(0);
			arrBit.push_back(0);
			arrBit.push_back(0);
			arrBit.push_back(0);
			break;
		}
		case '1': {
			arrBit.push_back(1);
			arrBit.push_back(0);
			arrBit.push_back(0);
			arrBit.push_back(0);
			break;
		}
		case '2': {
			arrBit.push_back(0);
			arrBit.push_back(1);
			arrBit.push_back(0);
			arrBit.push_back(0);
			break;
		}
		case '3': {
			arrBit.push_back(1);
			arrBit.push_back(1);
			arrBit.push_back(0);
			arrBit.push_back(0);
			break;
		}
		case '4': {
			arrBit.push_back(0);
			arrBit.push_back(0);
			arrBit.push_back(1);
			arrBit.push_back(0);
			break;
		}
		case '5': {
			arrBit.push_back(1);
			arrBit.push_back(0);
			arrBit.push_back(1);
			arrBit.push_back(0);
			break;
		}
		case '6': {
			arrBit.push_back(0);
			arrBit.push_back(1);
			arrBit.push_back(1);
			arrBit.push_back(0);
			break;
		}
		case '7': {
			arrBit.push_back(1);
			arrBit.push_back(1);
			arrBit.push_back(1);
			arrBit.push_back(0);
			break;
		}
		case '8': {
			arrBit.push_back(0);
			arrBit.push_back(0);
			arrBit.push_back(0);
			arrBit.push_back(1);
			break;
		}
		case '9': {
			arrBit.push_back(1);
			arrBit.push_back(0);
			arrBit.push_back(0);
			arrBit.push_back(1);
			break;
		}
		case 'A': {
			arrBit.push_back(0);
			arrBit.push_back(1);
			arrBit.push_back(0);
			arrBit.push_back(1);
			break;
		}
		case 'B': {
			arrBit.push_back(1);
			arrBit.push_back(1);
			arrBit.push_back(0);
			arrBit.push_back(1);
			break;
		}
		case 'C': {
			arrBit.push_back(0);
			arrBit.push_back(0);
			arrBit.push_back(1);
			arrBit.push_back(1);
			break;
		}
		case 'D': {
			arrBit.push_back(1);
			arrBit.push_back(0);
			arrBit.push_back(1);
			arrBit.push_back(1);
			break;
		}
		case 'E': {
			arrBit.push_back(0);
			arrBit.push_back(1);
			arrBit.push_back(1);
			arrBit.push_back(1);
			break;
		}
		case 'F': {
			arrBit.push_back(1);
			arrBit.push_back(1);
			arrBit.push_back(1);
			arrBit.push_back(1);
			break;
		}
		}
	}
	return arrBit;
}

/*
Kiem tra chuoi Hex co phai la 2 hoac la 3 khong ?
*	Mo rong:	Kiem tra co phai la 0 hoac 1 khong ?
Input:	1 string ( chuoi Hex ) ( strHex ).
Output:	1 trong 3 gia tri ( 0, 1, 2 ).
		*	1:	Chuoi Hex la 2 hoac la 3.
		*	2:	Chuoi Hex la 0 hoac la 1.
		*	0:	Chuoi Hex khong thuoc cac truong hop tren.
*/
int isNumber2or3(string strHex) 
{
	if (strHex.length() != 1) return 0;
	if (strHex == "0" || strHex == "1") return 2;
	if (strHex == "2" || strHex == "3") return 1;
	return 0;
}

/*
Kiem tra chuoi Hex co phai la so chan khong ?
Input:	1 string ( chuoi Hex ) ( strHex ).
Output:	True hoac False.
		*	True:	Chuoi Hex la 1 so chan. 
		*	False:	Chuoi Hex la 1 so le. 
*/
bool isEvenNumber(string strHex) 
{
	char tempStrHex = strHex[strHex.length() - 1];
	if (tempStrHex == '0' || tempStrHex == '2' || tempStrHex == '4' || tempStrHex == '6'
		|| tempStrHex == '8' || tempStrHex == 'A' || tempStrHex == 'C' || tempStrHex == 'E')
		return true;
	return false;
}

/*
Tim s va r trong:
n - 1 = ( 2 ^ s ) * r. Voi r la 1 so le.

Input:	1 vector ( chuoi Binary ) ( arrBit ), 1 so nguyen ( s )
		, 1 vector ( chuoi Binary ) ( arrBitR ).
Output:	
*/
void findSandR(vector<int> arrBit, int& s, vector<int>& arrBitR)
{
	s = 0;
	vector<int> tempArrBit = arrBit;
	tempArrBit[0] = 0;
	while (tempArrBit[0] == 0) 
	{
		s++;
		tempArrBit.erase(tempArrBit.begin());
	}
	arrBitR = tempArrBit;
}

int main()
{
	string strHex;
	vector<int> arrBit;
	int s;
	vector<int> arrBitR;
	cin >> strHex;
	arrBit = convertHexToBinary(strHex);
	if (isNumber2or3(strHex) == 1)
	{
		cout << 1; return 0;
	}
	if (isNumber2or3(strHex) == 2 || isEvenNumber(strHex))
	{
		cout << 0; return 0;
	}
	findSandR(arrBit, s, arrBitR);

	return 0;
}