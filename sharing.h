#pragma once
#include<string>
#include<iostream>
using namespace std;

class sharing
{
	string name;
	string n;
public:
	sharing(string name) { this->name = name; }
	void shareContents() {
		cout << "공유할 프로그램 또는 파일을 입력해주세요: ";
		cin >> n;
		cout << name << "님이 " << n << "공유를 시작하셨습니다";
	}
};

