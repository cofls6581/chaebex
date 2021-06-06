#pragma once
#include<iostream>
#include<string>
using namespace std;

class record
{
	int recordCondition=0;
	int n=0;
public:
	void Record() {
		cout << "1.녹화시작 2.녹화종료: ";
		cin >> n;
		if (n == 1)
			cout << "녹화시작합니다" << endl;
		else if (n == 2)
			cout << "녹화종료합니다" << endl;
		else
			cout << "숫자입력오류";
	}
};

