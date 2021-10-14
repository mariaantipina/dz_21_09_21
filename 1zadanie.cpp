/*Напишите функцию, которая моделирует бросание двух игральных
кубиков(на каждом может выпасть от 1 до 6 очков).
(Используйте генератор псевдослучайных чисел.)*/
#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    srand(time(0));
    a = 1 + rand() % 6;
    b = 1 + rand() % 6;
    cout << " кубик один - " << a << endl;
    cout << " кубик два - " << b << endl;
    return 0;
}