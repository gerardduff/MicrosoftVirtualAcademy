// c++Basics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int types()
{
	int i{ 2 };
	i = 3.2;
	i = 2.9;
	i = -1;

	unsigned int u{ 0 };
	u = -2;

	double d{ 2.7 };
	i = d;
	d = i;

	bool flag{ true };
	flag = false;
	flag = 7;

	i = 2;
	i = static_cast<int>(3.2);
	i = static_cast<int>(2.9);
	i = -1;
	std::cout << i << std::endl;


	d = 2.7;
	std::cout << d << std::endl;
	i = static_cast<int>(d);
	d = i;

	u = -2;

	flag = false;
	flag = static_cast<bool>(7);
	std::cout << flag << std::endl;


	return 0;
}