// car.cpp 
# include <iostream> /*입출력기능*/
using namespace std;

class car
{
private:
	char car_name[30];
	int wheel_no;
	int speed;
	int max_speed;
public:
	void speedUp() {
		speed++;
	}
	void speedDown() {
		speed--;
	}
	void stop(int rcv_speed) {
		speed = 0;
		max_speed = rcv_speed;
	}

	int getCurrentSpeed() {
		return speed;
	}
	int getMaxSpeed() {
		return max_speed;
	}
};
void main()
{
	car car1;
	car1.stop(240);
	for (int i = 1; i <= 10; i++)
		car1.speedUp();
	cout << "current speed:" << car1.getCurrentSpeed() << "\n";
	cout << endl; /*행간간격띄우기*/
	cout << "max speed:" << car1.getMaxSpeed() << "\n";
}


