﻿#include <iostream>
#include <math.h>
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
int main() {
	task1();
	task2();
	task3();
	task4();
	task5();
	return 0;
}
void task1() {
	cout << "task 1 " << endl;
	setlocale(LC_ALL, "Rus");
	int b, kb;
	cout << "Введите байт: ";
	cin >> b;
	kb = int(b / 1024);
	cout << "Количество полных килобайтов : " << kb;
}
void task2() {
	int a, b;
	cout << "\n\ntask 2 " << endl;
	cout << "Введите длину отрезка а : ";
	cin >> a;
	cout << "Введите длину отрезка b : ";
	cin >> b;
	cout << "Количество отрезков b ,размещенных на отрезке а : " << a % b;
}
void task3() {
	int a, b;
	cout << "\n\ntask 3 " << endl;
	cout << "Введите длину отрезка а :";
	cin >> a;
	cout << "Введите длину отрезка b :";
	cin >> b;
	cout << "Длина незанятой части отрезка а :" << a - b << endl;
}
void task4() {
	cout << "\n\ntask 4 " << endl;
	int ab;
	cout << "Введите двузначное число : ";
	cin >> ab;
	cout << "Число при переустановке цифр :" << ab / 10 + ab % 10 * 10 << endl;
}
void task5() {
	cout << "\n\ntask 5 " << endl;
	int abc;
	cout << "Введите трехзначное число :";
	cin >> abc;
	cout << "Число при переустановке цифр :" << (abc % 100 / 10 * 100) + (abc % 10) * 10 + abc / 100;

}