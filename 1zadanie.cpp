/*�������� �������, ������� ���������� �������� ���� ���������
�������(�� ������ ����� ������� �� 1 �� 6 �����).
(����������� ��������� ��������������� �����.)*/
#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    srand(time(0));
    a = 1 + rand() % 6;
    b = 1 + rand() % 6;
    cout << " ����� ���� - " << a << endl;
    cout << " ����� ��� - " << b << endl;
    return 0;
}