﻿#include <iostream>
#include <math.h>
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
int main() {
	task1();
	task2();
	task3();
	task4();
	task5();
	task6();
	return 0;
}
void task1() {
	setlocale(LC_ALL, "Rus");
	const double pi = 3.14;
	double a, b;
	cout << "Введите значение угла в градусах : ";
	cin >> a;
	b = a * pi / 180;
	cout << "Значение угла в радианах : " << b << "." << endl;
 }
void task2() {
	cout << "\n\ntask 2 " << endl;
	const double pi = 3.14;
	double a, b;
	cout << "Введите значение угла в радианах : ";
	cin >> a;
	b = (a * 180) / pi;
	cout << "Значение угла в градусах : " << b << "." << endl;
}
void task3() {
	double x, y, a, b, c;
	cout << "\n\ntask 3 " << endl;
	cout << "Введите количество конфет в кг : ";
	cin >> x;
	cout << "Введите стоимость этого кол-ва в руб : ";
	cin >> a;
	b = a / x;
	cout << "Цена этих конфет за 1 кг: " << b << endl;
	cout << "Сколько килограм этих конфет посчитать : ";
	cin >> y;
	c = y * b;
	cout << "Стоимость : " << c << endl;
}
void task4() {
	cout << "\n\ntask 4 " << endl;
	double V1, V2, T, S, Result;
	cout << "Введите скорость первого автомобиля V1 : ";
	cin >> V1;
	cout << "Введите скорость второго автомобиля V2 : "; 
	cin >> V2;
	cout << "Введите расстояние между ними S : ";
	cin >> S;
	cout << "Введите прошедшее время в часах : ";
	cin >> T;
	Result = S + V1 * T + V2 * T;
	cout << "Между автомобилями : " << Result << endl;
}
void task5() {
	double a, b, x;
	cout << "\n\ntask 5 " << endl;
	cout << "Введите коэфициент а : ";
	cin >> a;
	cout << "Ввндите коэфициент b : ";
	cin >> b;
	x = (-1) * b / a;
	cout << "x равен : " << x << endl;
}
void task6() {
	cout << "\n\ntask 6 " << endl;
	double A1, A2, B1, B2, C1, C2, d, X1, Y2;
	cout << "A1=: ";
	cin >> A1;
	cout << "A2=: ";
	cin >> A2;
	cout << "B1=: ";
	cin >> B1;
	cout << "B2=: ";
	cin >> B2;
	cout << "C1=: ";
	cin >> C1;
	cout << "C2=: ";
	cin >> C2;
	d = A1 * B2 - A2 * B1;
	X1 = (C1 * B2 - C2 * B1) / d;
	Y2 = (A1 * C2 - A2 * C1) / d;
	cout << "x равен : " << X1 << endl;
	cout << "y равен : " << Y2 << endl;

}