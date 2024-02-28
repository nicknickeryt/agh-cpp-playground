#include <iostream>
#include <math.h>

#include "main.h"

using std::cout,std::endl,std::cin;

int main()
{
	cout << "[i] Enter value to calculate sqrt for:" << endl << "> ";
	double x { 0.0 };
	if(!(cin >> x)){
		cout << endl << "[!] Must be a number." << endl;
		return 1;
	}


	if(x>=0) {
		cout << endl << "[i] Sqrt(" << x << ")= " << sqrt(x) << endl;
	}
	else {
		cout << endl << "[!] Must be a real value." << endl;
		return 1;
	}
	return 0;
}


