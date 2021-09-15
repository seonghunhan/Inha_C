#include <iostream>
using namespace std;

void main() {

	signed short Val1 = 1;
	unsigned short val2 = 1;
	//val1 = 32767;
	//val2 = 0;

	Val1 = Val1 + Val1;
	Val1 = Val1 + Val1;
	Val1 = 7;
	val2 = val2 - val2;
	cout << "signed short is " << Val1 << endl << "unsigned short is " << val2 << endl;


	int value;
	value = '5';
	cout << value <<  endl;


	value = 'A' + 3;
	cout << value << endl;

	char Value1;
	Value1 = 255;
	cout << Value1;

	int asc_dec;
	char asc_char;

	for (asc_dec = 1; asc_dec < 128; asc_dec++)
	{
		asc_char = asc_dec;
		cout << "ASC DEC : " << asc_dec << " - ASC CHAR : " << asc_char << endl;
	}


	int iValue;
	bool bValue;

	iValue = 0;
	bValue = true; //0만 아니면 true
	//bValue = false;
	cout << "iValue : " << iValue << endl;
	cout << "bValue : " << bValue << endl;

	const int seven = 7;
	int value;
	value = seven + 3;
	//seven = 9;
	cout << "Value is " << value << endl;

}

