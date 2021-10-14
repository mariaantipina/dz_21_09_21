#include<iostream>
using namespace std;
int summadel(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum;
}
int main() {
	setlocale(LC_ALL, "Russian");
	for (int i = 1; i <= 10000; i++) {
		int m = summadel(i);
		if (m <= i)
			continue;
		if (i == summadel(m) && m <= 10000) {
			cout << "Пара дружественных чисел: {" << i << "; " << m << "}" << endl;
		}
	}
}
