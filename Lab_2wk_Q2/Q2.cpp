#include <iostream>
#include <random>
using namespace std;

int main() {

	random_device rd;
	mt19937_64 mersenne(rd());
	uniform_int_distribution<> dice(1, 9);

	cout << dice(mersenne) << endl;

	cout << "��� ������ �ڵ����� �����մϴ�." << endl;
	


}