// Lab_03_3.cpp
// < muran yulia >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 0.17
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
		double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -1 - R)
		y = R;
	else
		if (-1 - R < x && x <= -1)
			y = -1. / 2. * x;
		else
			if (-1< x && x <= 2)
				y = R - sqrt(R * R - x * x);
			else
				if (4 < x )
					y = sqrt(R * R - (x - R) * (x - R));
				else
					y = -(x - 2 * R) / (6 - 2 * R);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}