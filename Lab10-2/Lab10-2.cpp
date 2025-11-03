#include <iostream>
#include <cmath>   // для log() та pow()
using namespace std;

// Функція для обчислення одного члена суми
double term(double x, int k) {
    double numerator = log(pow(x, 2 * k - 1));      // ln(x^(2k-1))
    double denominator = pow(2, k) * (2 * k - 1);   // 2^k * (2k-1)
    return numerator / denominator;
}

// Функція для обчислення суми
double calcSum(double x) {
    double sum = 0;
    for (int k = 1; k <= 8; k++) {
        sum += term(x, k);
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double x;
    cout << "Введіть значення x: ";
    cin >> x;

    if (x <= 0) {
        cout << "Помилка: для обчислення ln(x) x має бути додатним!" << endl;
        return 0;
    }

    double result = calcSum(x);

    cout << "Результат обчислення суми: S = " << result << endl;

    return 0;
}