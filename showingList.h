#pragma once
#include<iostream>
#include <string>
using namespace std;


class showingList
{
	int n = -1;
	string name[40];
	string nam;
	int guestN;
	int sortP;
public:
	showingList() {}
	void showList(string name,int sortP) {
		cout << "���������� ���" << endl;
		if (sortP == 1)
		cout << name << endl;
		else {
			cout << "ȣ��Ʈ" << endl;
			cout << name << endl;
		}
	}
	void showList(string name, int sortP,int guestN) {
		cout << "���������� ���" << endl;
		cout << "ȣ��Ʈ" << endl;
		for (int i = 0; i <= guestN; i++) 
			cout << this->name[guestN] << endl;
		}
	void save(string nam) { 
		n++; 
		this->nam = nam;
		name[guestN] = this->nam;
	}
};
	

