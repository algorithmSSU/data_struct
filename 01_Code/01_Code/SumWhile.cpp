#include <iostream>

using namespace std;

int sumWhile(void) {
	int n, sum;
	
	cout << "1���� n������ ���� ���մϴ�.\n";
	cout << "n�� �� : ";
	cin >> n;

	sum = 0;
	int i = 1;

	while (i <= n) {
		sum += i;
		++i;
	}

	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�.\n";

	return 0;
}