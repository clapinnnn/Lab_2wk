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

	cout << "��� ������ �ڵ����� �����մϴ�." << endl;
	cout << x << " " << y << endl;

	cout << "������ �Է��ϱ�(+, -, *, /)" << endl;
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
		cout << "�߸��� �Է�" << endl;
	}

	cout << "��� �Է��ϱ�" << endl;
	cin >> answer;
	if (answer == result)
		cout << "�¾ҽ��ϴ�" << endl;
	else
		cout << "Ʋ�Ƚ��ϴ�" << endl;

}