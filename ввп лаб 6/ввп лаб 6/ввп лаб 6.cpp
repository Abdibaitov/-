﻿#include <iostream>
#include <math.h>
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
int main() {
	task1();
	task2();
	task3();
	task4();
	task5();
	task6();
	task7();
	return 0;
}
void task1() {
	cout << "task 1 " << endl;
	setlocale(LC_ALL, "Rus");
	double A, B, x;

	cout << "Введите значение переменной А: ";
	cin >> A;
	cout << "Введите значение переменной B: ";
	cin >> B;
	x = A;
	A = B;
	B = x;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
}
void task2() {
	cout << "\ntask 2 " << endl;
	double A, B, C, x, y;
	cout << "Введите значение переменной А: ";
	cin >> A;
	cout << "Введите значение переменной B: ";
	cin >> B;
	cout << "Введите значение переменной С: ";
	cin >> C;
	x = B;
	B = A;
	y = C;
	C = x;
	A = y;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl;

}
void task3() {
	cout << "\ntask 3 " << endl;
	double A, B, C, x, y;
	cout << "Введите значение переменной А: ";
	cin >> A;
	cout << "Введите значение переменной B: ";
	cin >> B;
	cout << "Введите значение переменной С: ";
	cin >> C;
	x = C;
	C = A;
	y = B;
	B = x;
	A = y;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl;
} 
void task4() {
	cout << "\ntask 4 " << endl;
	double y;
	double x;
	cout << "Введите значение х : ";
	cin >> x;
	y = (3 * pow(x, 6)) - (6 * pow(x, 2)) - 7;
	cout << "y = " << y;
}
void task5() {
	cout << "\n\ntask 5 " << endl;
	double y;
	double x;
	cout << "Введите значение х : ";
	cin >> x;
	y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
	cout << "y = " << y;
} 
void task6() {
	cout << " \n\ntask 6 " << endl;
		setlocale(LC_ALL, "Rus");  
		int x;
		int z;                     
		cout << "Введите число\n";
		cin >> x;
		z = x;
		z = z * x;
		cout << "Число в степени 2 =\t" << z << endl;
		z = z * x;
		cout << "Число в степени 4 =\t" << z << endl;
		z = z * z;
		cout << "Число в степени 8 =\t" << z << endl;	
}
void task7() {
	cout << "\n\ntask 7 " << endl;
	double A, x, y;
	cout << "Введите значение переменной А : ";
	cin >> A;
	x = A * A;
	cout << "А в степени 2 равно " << x << "." << endl;
	y = x * A;
	cout << "А в степени 3 равно " << y << "." << endl;
	x = x * y;
	cout << "А в степени 5 равно " << x << "." << endl;
	y = x;
	x = y * y;
	cout << "А в степени 10 равно " << x << "." << endl;
	x = x * y;
	cout << "А в степени 15 равно " << x << "." << endl;

}
