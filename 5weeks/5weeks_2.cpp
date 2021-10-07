//structure_ini.cpp
#include <iostream>
using namespace std;

struct player {
	char ID[20];
	int stage;
	double power;
};

void main()
{
	//struct player pro = {"pro-man", 10, 999};
	struct player pro;
	//cin.getline(pro.ID, 20);

	pro.ID[0] = 'p';
	pro.ID[1] = 'r';
	pro.ID[2] = 'o';
	pro.ID[3] = '-';
	pro.ID[4] = 'm';
	pro.ID[5] = 'a';
	pro.ID[6] = 'n';
	pro.ID[7] = '\0';
	pro.stage = 10;

	cout << "pro_ID is" << pro.ID << '\n';
	cout << "pro_stage is" << pro.stage << '\n';
	cout << "pro_power is" << pro.power << '\n';
}