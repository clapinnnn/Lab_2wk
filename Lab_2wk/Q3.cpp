#include <iostream>
using namespace std;

int main() {
	int n, m;
	int sum = 0, i = 0;

	cin >> n >> m;
	cout << "N ���� " << n << ", M ���� " << m << endl;

	while (n - m * i > 0) {
		sum += n - m * i;
		i++;
	}

	cout << sum;

}