#include <iostream>

//using namespace std;
//
//int fact(int n) {
//	if ((n == 0) || (n == 1))
//		return 1;
//	else
//		return n * fact(n - 1);
//}
//int main() {
//	int n = 5;
//	cout << "Factorial of " << n << " is " << fact(n);
//	return 0;
//}

using namespace std;
int f(int x)
{
	if ((x == 1) || (x == 0)) 
	{
		return(x);
	}
	else 
	{
		return(f(x - 1) + f(x - 2));
	}
}
int main()
{
	int x, i = 0;
	cout << "Number: ";
	cin >> x;
	cout << "Fibonnaci: ";
	while (i < x)
	{
		cout << " " << f(i);
		i++;
	}
	return 0;

	/*cout << "Number: ";
	cin >> x;

	cout << "Factorial of " << x << " is " << f(x);
	return 0;*/



	
}