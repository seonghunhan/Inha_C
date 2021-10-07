//structure_nested.cpp
#include <iostream>
using namespace std;
struct game {
	char ID[20];
	int stage;
	double power;
};
struct info {
	char name[30];
	char address[50];
	struct game player;
};
void main()
{
	struct info pro[100] =
	{
	{"unknown", "seoul", "pro-man", 10, 900},
	{"known", "inchon", "super-man", 10, 999},
	};
	cout << "pro_name[0] is " << pro[0].name << '\n';
	cout << "pro_address[0] is " << pro[0].address << '\n';
	cout << "pro_ID[0] is " << pro[0].player.ID << '\n';
	cout << "pro_stage[0] is " << pro[0].player.stage << '\n';
	cout << "pro_power[0] is " << pro[0].player.power << '\n';
	cout << "pro_name[1] is " << pro[1].name << '\n';
	cout << "pro_address[1] is " << pro[1].address << '\n';
	cout << "pro_ID[1] is " << pro[1].player.ID << '\n';
	cout << "pro_stage[1] is " << pro[1].player.stage << '\n';
	cout << "pro_power[1] is " << pro[1].player.power << '\n';
}