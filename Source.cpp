#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;
	cin >> a;
	if (((a / 1000) < 1) && ((a / 10)>0) &&((a/100)>0))
		cout << "�����������";
	else cout << "�� �����������";
	return 0;
}