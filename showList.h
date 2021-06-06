#pragma once
#include<string>
#include<iostream>
using namespace std;

class showingList
{
	string name;
	int guestN;
public:
	showingList() {}
	void showList(guest gue[], int guestN) {
		this->guestN = guestN;
		cout << "현재참가자 목록" << endl;
		for (int i = 0; i <= guestN; i++) {
			(gue+i)->getname();
		}
	}
	void showList(string name) {
		this->name = name;
		cout << "현재참가자 목록" << endl;
		cout << name << endl;
	}
};
	

