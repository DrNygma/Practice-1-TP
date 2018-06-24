


/**
* @file Source.cpp
* @author Рыжова Д.И., гр. 515а
* @date 24 июня 2018
* @brief Летняя практика
*/

#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <locale.h>

int perymetr(int n);
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	printf("Введите количество сторон многоугольника: ");
	scanf_s("%i", &n);
	if (n <= 2) {
		printf("Данная фигура не является многоугольником.\n");
		system("pause");
			return 0;
	}
	printf("Периметр многоугольника: %lf\n", perymetr(n));
	system("pause");
	return 0;
}

/**
* Поиск периметра многоугольника.
*@param n - количество сторон многоугольника.
*@return P - периметр многоугольника
*/

int perymetr(int n)
{
	double x1, y1, xa, ya, xb, yb, d, P;
	d = 0;
	P = 0;
	printf("Введите координаты точки многоугольника: ");
	scanf_s("%lf%lf", &x1, &y1);
	xa = x1;
	ya = y1;
	for (int i = 2; i <= n; i++)
	{
		printf("Введите координаты точки многоугольника: ");
		scanf_s("%lf%lf", &xb, &yb);
		d = sqrt(((xb - xa)*(xb - xa)) + ((yb - ya)*(yb - ya)));
		P = P + d;
		xa = xb;
		ya = yb;
	}
	d = sqrt(((xa - x1)*(xa - x1)) + ((ya - y1)*(ya - y1)));
	P = P + d;
	system("pause");
	return(P);
}