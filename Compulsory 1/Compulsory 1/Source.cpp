#include <iostream>

//using namespace std; // Factorial
//
//int f(int x) 
//{
//	if ((x == 0) || (x == 1)) 
//	{
//		return 1;
//	}
//		
//	else
//	{
//		return x * f(x - 1);
//	}
//}
//int main() 
//{
//	int x;
//
//	cout << "Number: ";
//	cin >> x;
//
//	cout << "Factorial of " << x << " is " << f(x);
//	return 0;
//}

////////////////////////////////////////////////////////////

using namespace std; // Fibonnaci
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
	int x; 

	cout << "Number: ";
	cin >> x;

	cout << "Fibonnaci: " << x << " is " << f(x);
	return 0;
}