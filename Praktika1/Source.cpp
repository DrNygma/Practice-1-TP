#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "rus");
	double x1, y1, xa, ya, xb, yb,d,P;
	d = 0;
	P = 0;
	int n;
	printf("¬ведите количество сторон многоугольника: ");
	scanf_s("%i", &n);
	printf("¬ведите координаты точки многоугольника: ");
	scanf_s("%lf%lf", &x1, &y1);
	xa = x1;
	ya = y1;
	for (int i = 2; i <= n; i++)
	{
		printf("¬ведите координаты точки многоугольника: ");
		scanf_s("%lf%lf", &xb, &yb);
		d = sqrt(((xb - xa)*(xb - xa)) + ((yb - ya)*(yb - ya)));
		P = P + d;
		xa = xb;
		ya = yb;
	}
	d = sqrt(((xa- x1)*(xa - x1)) + ((ya - y1)*(ya - y1)));
	P = P + d;
	printf("ѕериметр многоугольника: %lf\n",P);
	system("pause");
	return 0;
}