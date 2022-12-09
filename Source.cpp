#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "A= ";
	cin >> a;
	cout << "B= ";
	cin >> b;
	cout << "C= ";
	cin >> c;
	cout << "the biggest number is  ";
	if (a > b && a > c)
	{
		cout << a;
	}
	else if (b > a && b > c)
	{
		cout << b;
	}
	else if (c > b && c > a)
	{
		cout << c;
	}
	return 0;

}