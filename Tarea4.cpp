#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float x;
	float y;
	float r;
	float a;

	cout << "Introduzca el radio" << endl;
	cin >> r;
	cout << "Introduzca el angulo" << endl;
	cin >> a;

	x = r * cos(a);
	y = r * sin(a);

	cout << "Tus ccordenadas son: (" << x << ", " << y << ")" << endl;

	system("pause");







}