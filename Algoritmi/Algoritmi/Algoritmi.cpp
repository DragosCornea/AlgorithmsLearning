// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void isPrime();
void nrFactorial();

int main()

{
	isPrime();
	nrFactorial();

}
void isPrime()
{
	int nr = 43;
	int temp;
	bool isPrime = true;
	int i = 2;
	while (i <= nr)
	{
		temp = nr % i;
		if (temp == 0)
		{
			isPrime = false;
			break;

		}
		i++;
	}
	if (isPrime == false)
	{
		cout << "nr e prim" << endl;

	}
	else
	{
		cout << "nr nu e prim" << endl;
	}
}
void nrFactorial()
{
	int nr = 4;
	int factorial = 1;
	for (int i = 1; i <= nr; i++)
	{
		factorial = factorial * i;
	}
	cout << factorial << endl;
}
//commit test


