#pragma once
#include<string>
#include<iostream>
using namespace std;
#include"host.h"
#include"guest.h"

int main() {
	int sortP;
	int roomN;
	int guestN = -1;
	string name;
	while (1) {
		cout << "1.���ù����(ȣ��Ʈ) 2.���ù�����(�Խ�Ʈ) �� �ϳ��� �������ּ���: ";//ȣ��Ʈ,�Խ�Ʈ �к�
		cin >> sortP;
		cout << "�̸��� �Է����ּ���: ";
		cin >> name;
		if (sortP == 1) {
			host h(name, guestN, sortP); 	      //ȣ��Ʈ ��ü ����,ȣ��Ʈ�� �������ϸ� �Խ�Ʈ�� �ڵ����� ������
			h.hbeforestart();
			h.hfunction();
			break;
		}
		else if (sortP == 2) {
			cout << "��ѹ��� �Է����ּ���(���� ����):";
			cin >> roomN; //�Խ�Ʈ ��ü ����,���ù� ��ȣ�Է�
			guestN++;
			guest g(guestN, name, sortP);
			g.gbeforestart();
			g.gfunction();
		}
		else {
			cout << "�����Է¿���";
			break;
		}
	}
}
