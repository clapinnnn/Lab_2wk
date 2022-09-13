#include <iostream>
#include <random>
using namespace std;

int main() {

	random_device rd;
	mt19937_64 mersenne(rd());
	uniform_int_distribution<> dice(1, 9);

	cout << dice(mersenne) << endl;

	cout << "산수 문제를 자동으로 출제합니다." << endl;
	


}