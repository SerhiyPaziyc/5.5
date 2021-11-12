#include<iostream>
using namespace std;
int n;
int f(int n)
{
	if (n == 0) return 0;
	else return n % 10;
	if (n) return 0;
	else return (n / 10);
}
int main() 
{
	int p, q, i;
	double S;
	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	S = 0;
	i = p;
	while (i <= q)
	{
		S += f(1. * i);
		i++;
	}
	cout << S << endl;
		S = 0;
	i = p;
	return 0;
}