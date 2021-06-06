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
		cout << "현재참가자 목록" << endl;
		if (sortP == 1)
		cout << name << endl;
		else {
			cout << "호스트" << endl;
			cout << name << endl;
		}
	}
	void showList(string name, int sortP,int guestN) {
		cout << "현재참가자 목록" << endl;
		cout << "호스트" << endl;
		for (int i = 0; i <= guestN; i++) 
			cout << this->name[guestN] << endl;
		}
	void save(string nam) { 
		n++; 
		this->nam = nam;
		name[guestN] = this->nam;
	}
};
	

