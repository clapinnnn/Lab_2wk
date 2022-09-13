#include <iostream>
using namespace std;

int main() {
	int n;
	int div = 2;
	int sum = 1;	//All numbers are divided by 1

	cin >> n;
	cout << "1";

	while (div < n) {
		if (n % div == 0) {
			cout << " + " << div;
			sum += div;
		}
		div++;
	}

	cout << " = " << sum << endl;

}