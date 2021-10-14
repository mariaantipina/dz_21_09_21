#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    srand(time(0));
    a = 1 + rand() % 6;
    b = 1 + rand() % 6;
    cout << " êóáèê îäèí - " << a << endl;
    cout << " êóáèê äâà - " << b << endl;
    return 0;
}
