#include <iostream>
#include <math.h>

#include "main.h"

using std::cout,std::endl,std::cin;

int main()
{
	cout << "[i] Enter value to calculate sqrt for:" << endl << "> ";
	double x { 0.0 };
	cin >> x;
	if(x>=0) {
		cout << endl << "[i] Sqrt(" << x << ")= " << sqrt(x) << endl;
	}
	else {
		cout << endl << "[!] Must be a real value." << endl;
	}
	return 0;
}


