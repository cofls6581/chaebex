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
		cout << "1.��ȭ���� 2.��ȭ����: ";
		cin >> n;
		if (n == 1)
			cout << "��ȭ�����մϴ�" << endl;
		else if (n == 2)
			cout << "��ȭ�����մϴ�" << endl;
		else
			cout << "�����Է¿���";
	}
};

