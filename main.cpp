#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << a + b;
    cout << a - b;
    cout << a * b;
    cout << float(a) / b;
    cout << a & b;
    cout << a | b;
    cout << a ^ b;
}