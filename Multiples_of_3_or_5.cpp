#include <iostream>
using namespace std;

int Multiples(int a) {
    int sum = 0;
    for (int i = 0; i < a; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum;
    return sum;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int Number = 0;
    cin >> Number;
    if (Number < 0) {
        cout << "Введи правильное число";
        exit(0);
    }
    Multiples(Number);
}