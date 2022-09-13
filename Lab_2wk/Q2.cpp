#include <iostream>
#include <random>
using namespace std;

int main() {

	random_device rd;
	mt19937_64 mersenne(rd());
	uniform_int_distribution<> dice(1, 10);

	int x = dice(mersenne);
	int y = dice(mersenne);
	char op;
	int result;
	int answer;

	cout << "산수 문제를 자동으로 출제합니다." << endl;
	cout << x << " " << y << endl;

	cout << "연산자 입력하기(+, -, *, /)" << endl;
	cin >> op;
	switch (op) {
	case '+':
		result = x + y; break;
	case '-':
		result = x - y; break;
	case '*':
		result = x * y; break;
	case '/':
		result = x / y; break;
	default:
		cout << "잘못된 입력" << endl;
	}

	cout << "결과 입력하기" << endl;
	cin >> answer;
	if (answer == result)
		cout << "맞았습니다" << endl;
	else
		cout << "틀렸습니다" << endl;

}