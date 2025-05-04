//Даны целые числа A и B (A < B). Вывести все целые числа от A до B
//включительно; при этом число A должно выводиться 1 раз, число A + 1 должно выводиться 2 раза и т.д.

#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    for (int i = A; i <= B; ++i) {
        for (int j = 0; j < i - A + 1; ++j) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
