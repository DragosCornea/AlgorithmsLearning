// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#define MAX 100

using namespace std;

void isPrime();
void nrFactorial();
int solution(char *S);

int main()

{

	char S[MAX];
	gets_s(S);

	printf("%d", solution(S));
	cout << endl;
	


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
int solution(char *S)
{
	int length = strlen(S), i=0, stack[MAX], dim = 0, nr = 0;
	while (i < length)
	{
		if (S[i] == '+')
		{
			if (dim < 2)
				return -1;
			stack[dim - 2] = stack[dim - 2] + stack[dim - 1];
			dim = dim - 1;
		}
		if (S[i] == '-')
		{
			if (dim < 2)
				return -1;
			else
				if (stack[dim - 1] - stack[dim - 2] < 0)
					return -1;
			stack[dim - 2] = stack[dim - 1] - stack[dim - 2];
			dim = dim - 1;
		}
		if (S[i] == 'D')
		{
			if (dim == 0)
				return -1;
			dim++;
			stack[dim - 1] = stack[dim - 2];
		}
		if (S[i] == 'P' && S[i + 1] == 'O')
		{
			if (dim == 0)
				return -1;
			dim--;
		}
		if (S[i] >= '0' && S[i] <= '9')
		{
			nr = 0;
			while (S[i] >= '0' && S[i] <= '9')
			{
				nr = nr * 10 + (S[i] - 48);
				i++;
			}
			dim++;
			stack[dim - 1] = nr;
		}
		i++;
	}
	return stack[dim-1];
}


