#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	cout << "Введите координаты x и y \n";
	cin >> x >> y;
	if (!(x <= 1 && x >= -1 && y <= 1 && y >= -1) && (x < 2 && x > -2 && y < 2 && y > -2))
	{
		cout << "Точка принадлежит фигуре";
	}
	else
	{
		cout << "Точка не принадлежит фигуре";
	}
}
