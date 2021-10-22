#include <iostream>
#include <cmath>

using namespace std;
double f(const double x);

int main()
{
	double tp, tk, z;
	int n;

	cout << "tp="; cin >> tp;
	cout << "tk="; cin >> tk;
	cout << "n="; cin >> n;

	double dt = (tk - tp) / n;
	double t = tp;

	while (t <= tk)
	{
		z = f(1 + 2 * t) + pow(f(f(1) + 2 * f(2 * t)), 2);
		
		cout << t << "    " << z << endl;
		t += dt;
	}

	return 0;
}
double f(const double x)
{
	if (abs(x) >= 1)
		return ((pow(sin(x),2)+(pow(cos(x),2)))/(1+ pow(cos(x),2)));
	else
	{
		double S = 0;
		int n = 0;
		double a = x;
		S = a;

		double b;
		b = 1 / (1 + x * x);

		do
		{
			n++;
			double R = ((x * x * x * x) / (8. * n * (2. * n - 1) * (4. * n - 1)*(4. * n + 1)));
			a *= R;
			S += a;
		} while (n < 6);

		S = b * S;

		return S;


	}
}
