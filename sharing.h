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
		cout << "������ ���α׷� �Ǵ� ������ �Է����ּ���: ";
		cin >> n;
		cout << name << "���� " << n << "������ �����ϼ̽��ϴ�";
	}
};

