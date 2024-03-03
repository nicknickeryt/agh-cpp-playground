#include <iostream>
#include <math.h>

#include "main.h"

using std::cout, std::endl, std::cin;

class MyClass
{
public:
	int abc;

	int myPublicFn(int a, int b);

	MyClass();

private:
	char c;

	int myPrivateFn(int a, int b);
};

MyClass::MyClass()
{
	abc = 0;
	c = 'H';

	cout << endl
		 << "Klasa utworzona!" << endl;

	cout << " Zmienne: " << endl
		 << "  abc: " << abc << endl
		 << "  c: " << c << endl
		 << endl;
}

int MyClass::myPrivateFn(int a, int b)
{
	return a * b;
}

int MyClass::myPublicFn(int a, int b)
{
	return a + b;
}

class MyBetterClass
{
public:
	int abc;
	MyBetterClass();

private:
	char c;
};

MyBetterClass::MyBetterClass()
	: abc(123), c('x')
{
	cout << endl
		 << "Klasa init: " << endl;
	cout << " Zmienne: abc: " << abc << " c: " << c << endl
		 << endl;
}


/*
 *
 *	Tu jest
 *  cokolwiek
 * 	byle było
 *  widoczne
 * 
 */

class JakasKlasa
{
	int &a;

public:
	JakasKlasa(int &fA);
	~JakasKlasa();
	int getA();
};

int JakasKlasa::getA()
{
	return a;
}

JakasKlasa::JakasKlasa(int &fA)
	: a (fA)
{
	cout << "Hello world!" << endl;
}

JakasKlasa::~JakasKlasa()
{
	cout << "Bye world!" << endl;
}

// end of JakasKlasa

int main()
{
	MyClass myClass;
	myClass.abc = 10;
	cout << myClass.abc << endl;
	cout << myClass.myPublicFn(1, 4) << endl;

	MyClass myClass1 = MyClass();

	cout << myClass1.abc << endl;

	MyBetterClass myBetterClass = MyBetterClass();
	cout << myBetterClass.abc << endl;

	int zmiennaA;
	JakasKlasa tZmienna(zmiennaA);

	JakasKlasa *tKlasa;

	int zmiennaB = 1;

	tKlasa = new JakasKlasa(zmiennaB);

	{
		JakasKlasa tKlasa(zmiennaB);
	}

	delete tKlasa;

	int zmiennaC = 420692137;
	JakasKlasa jakasKlasa = JakasKlasa(zmiennaC);

	cout << "Fajna liczba: " << jakasKlasa.getA();


	return 0;
}
