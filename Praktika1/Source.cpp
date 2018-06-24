#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <locale.h>

int perymetr(int n);
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	printf("������� ���������� ������ ��������������: ");
	scanf_s("%i", &n);
	if (n <= 2) {
		printf("������ ������ �� �������� ���������������.\n");
		system("pause");
			return 0;
	}
	printf("�������� ��������������: %lf\n", perymetr(n));
	system("pause");
	return 0;
}
int perymetr(int n)
{
	double x1, y1, xa, ya, xb, yb, d, P;
	d = 0;
	P = 0;
	printf("������� ���������� ����� ��������������: ");
	scanf_s("%lf%lf", &x1, &y1);
	xa = x1;
	ya = y1;
	for (int i = 2; i <= n; i++)
	{
		printf("������� ���������� ����� ��������������: ");
		scanf_s("%lf%lf", &xb, &yb);
		d = sqrt(((xb - xa)*(xb - xa)) + ((yb - ya)*(yb - ya)));
		P = P + d;
		xa = xb;
		ya = yb;
	}
	d = sqrt(((xa - x1)*(xa - x1)) + ((ya - y1)*(ya - y1)));
	P = P + d;
	printf("�������� ��������������: %lf\n", P);
	system("pause");
	return(P);
}