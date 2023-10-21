// OrangeC++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int input = 0;
	int InputSum = 0;
	cout << "1번째 정수 입력: ";
	cin >> input;
	InputSum += input;
	cout << "2번째 정수 입력: ";
	cin >> input;
	InputSum += input;
	cout << "3번째 정수 입력: ";
	cin >> input;
	InputSum += input;
	cout << "4번째 정수 입력: ";
	cin >> input;
	InputSum += input;
	cout << "5번째 정수 입력: ";
	cin >> input;
	InputSum += input;

	cout << "합계: " << InputSum << endl;
    return 0;
}

