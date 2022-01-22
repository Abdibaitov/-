#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Лабораторная работа №17.1" << endl;
    int a[10];
    int n, k, l, i, sum = 0;

    cout << "Дан массив размера N: ";
    cin >> n;

    cout << "Целое число K: ";
    cin >> k;

    cout << "Целое число L: ";
    cin >> l;

    for (i = 0; i < n; ++i) {
        cout << "A" << i + 1 << ": ";
        cin >> a[i];
    }

    for (i = k - 1; i <= l - 1; ++i) sum += a[i];

    cout << (float)sum / (float)(l - k + 1) << endl;

    cout << endl;
    cout << "Лабораторная работа №17.2" << endl;
    cout << "Дан целочисленный массив размера N: ";
    cin >> n;
    for (i = 0; i < n; ++i) {
        cout << "A" << i + 1 << ": ";
        cin >> a[i];
    }

    int c = a[1] - a[0];
    for (i = 1; i < n; ++i) {
        if (c != a[i] - a[i - 1]) {
            c = 0;
        }
    }

    cout << c;

    cout << endl;
    cout << "Лабораторная работа №17.3" << endl;
    cout << "Дан массив размера N: ";
    cin >> n;
    for (i = 0; i < n; ++i) {
        cout << "A" << i + 1 << ": ";
        cin >> a[i];
    }

    int min = a[1];
    for (i = 1; i < n; i += 2) {
        if (a[i] < min) min = a[i];
    }

    cout << "Минимальный элемент: " << min;


    cout << endl;
    cout << "Лабораторная работа №17.4" << endl;
    cout << "Дан массив размера N: ";
    cin >> n;

    for (i = 0; i < n; ++i) {
        cout << "A" << i + 1 << ": ";
        cin >> a[i];
    }


    if (a[n - 1] > a[n - 2]) {
        cout << n;
    }
    else {
        i = n - 2;
        while ((i >= 1) && !((a[i - 1] < a[i]) && (a[i] > a[i + 1]))) {
            --i;
        }
        cout << "Локальный максимум: " << i + 1;
    }


    cout << endl;
    cout << "Лабораторная работа №17.5" << endl;
    int i2;
    cout << "N: ";
    cin >> n;


    for (i = 0; i < n; ++i) {
        cout << "A" << i + 1 << ": ";
        cin >> a[i];
    }

    for (i = 0; i < n - 1; ++i) {
        for (i2 = i + 1; i2 < n; ++i2) {
            if (a[i] == a[i2]) {
                cout << "Дубликаты: " << i + 1 << "," << i2 + 1 << ".";
            }
        }
    }

    return 0;
}