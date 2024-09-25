// Lab_03_1.cpp
// < Огоновський Роман >
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами.
// Варіант 24

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
	double a, b, c, x, xS, xE, dX;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "dX = "; cin >> dX;
	cout << "xS = "; cin >> xS;
	cout << "xE = "; cin >> xE;
	

	for (x = xS; x < xE; x += dX) {
		if (c < 0 && x != 0) {
			cout << "x= " << x << "\t" << "F= " << ((-a * c) - c) << endl;
		}
		else if (c > 0 && x == 0) {
			cout << "x= " << x << "\t" << "F= " << (x - a) / -c << endl;
		}
		else {
			cout << "x= " << x << "\t" << "F= " << (b*x)/(c-a) << endl;

		}
			
	}
	return 0;
}