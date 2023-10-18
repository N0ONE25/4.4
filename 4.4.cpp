// Lab_04_3.cpp
// < Зозюк Влад >
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 8
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -8 - R)
			y = -R;
		else
			if (-8 - R < x && x <= -8 + R)
				y = sqrt(R * R - x * x - 16 * x - 64) - R;
			else
				if (-8 + R < x && x <= 2)
					y = -R + (2 * x + 16 + 2 * R + R * x + 8 * R + pow(R, 2)) / (10 + R);
				else
					if (2 < x && x <= 6)
						y = 0;
					else
						y = pow((x - 6), 2);

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
} 