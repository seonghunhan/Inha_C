#include <iostream>
using namespace std;

void main()
{
	char* ip = new char[10];
	cin.getline(ip, 10);
	cout << "aaa" << ip << endl;
	delete[] ip;
	//char* ip2 = new char[10];
	//cin.getline(ip2, 10);
	//cout << "bbb" << ip2 << endl;
}