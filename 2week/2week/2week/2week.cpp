#include <iostream>
using namespace std;

void main() {
	int val1, val2, val3, result;

	cout << "첫번째 숫자를 입력해주세요";
	cin >> val1;

	cout << "두번째 숫자를 입력해주세요";
	cin >> val2;

	cout << "세번째 숫자를 입력해주세요";
	cin >> val3;

	result = val1 * val2 * val3;

	cout << "자 지금부터 있잔하요 " << endl;
	cout << "숫자 3개의 곱은" << result << "입니다";
	cout << "\n 숫자 3개의 곱은" << result << "\n\n\n";
	cout << "숫자 3개의 곱은" << result << "입니다";
	cout << "\n 숫자 3개\n의 곱은" << result << "입니다";
	cout << "\n 숫자 3개의 곱은" << result << "입니다";
	cout << "숫자 3개의 곱은" << result << "입니다";
}