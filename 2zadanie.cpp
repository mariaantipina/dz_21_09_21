#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int N, c;
	cin >> N;
	int a = 1, b = 1;
	for (c = 1; c <= N; c++) {
		c = a + b;
		a = b;
		b = c;
	}
	cout << " число Фибоначчи = " << c << endl;
	return 0;
}
