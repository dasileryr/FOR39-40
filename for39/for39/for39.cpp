//Даны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; при этом каждое число должно выводиться столько раз, каково его значение (например, число 3 выводится 3 раза).
#include <iostream>
#include <cmath> 
#include <windows.h> 
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);      

    int A, B;
    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите число B: ";
    cin >> B;

    if (A < B && A > 0) {
        for (int i = A; i <= B; i++) {
            for (int j = 0; j < i; j++) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    else {
        cout << "Ошибка: A должно быть меньше B и оба числа должны быть положительными" << endl;
    }

    return 0;
}