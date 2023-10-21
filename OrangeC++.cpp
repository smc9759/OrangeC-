// OrangeC++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int input = 0;
	cin >> input;

	for (int i = 1; i <= 10; i++)
	{
		cout << input *(i) << endl;
	}
    return 0;
}

