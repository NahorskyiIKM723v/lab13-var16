#include <iostream>
#include <Windows.h>
using namespace std;

int factoriaI(int n) {
    if (n == 1) {
        return 10;
    }
    return 4 * factoriaI(n - 1);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть номер члена ряду, який ви хочете обчислити: ";
    cin >> n;

    cout << "n-й член ряду: " << factoriaI(n) << endl;

    return 0;
}
