#include "Header.h"
#include <iostream>

//instructions de l'addition
int add(int a, int b)
{
	return a + b;
}
//instructions de la soustraction
int substract(int a, int b)
{
	return a - b;
}
//instructions de la multiplication
int multiply(int a, int b)
{
	return a * b;
}
//instructions de la division
float divide(int a, int b)
{
	if (b == 0)
	{
		std::cout << "operation impossible veuillez changer une des variables\n";
	}
	else
	{
		return a / b;
	}
}