#pragma once
#include<iostream>
#include<string>
#include "audio.h"
#include "camera.h"
#include "record.h"
#include "sharing.h"
#include "showingList.h"
using namespace std;

class guest{
	audio ag;
	camera cg;
	string name;
	showingList lg;
	int guestN;
	int n=0;
	int sortP=0;
	int audioCondition[40] = { 0 };
	int cameraCondition[40] = { 0 };
	bool meetingRoomcondition = false;
public:
	guest() {}
	guest(int guestN, string name,int sortP) { 
		this->guestN = guestN;
		this->name = name; 
		this->sortP = sortP;
		lg.save(name);
	}
	void gbeforestart() {
		cout << name << "'s Personal Room�Դϴ�" << endl;
		while (meetingRoomcondition == false)
		{
			cout << "���÷� ���� �� ����(1.����� 2.ī�޶� 3.���ý���)�� ���� �Է�:";
			cin >> n;
			if (n == 1) {
				audioCondition[guestN]=ag.changeAudio(audioCondition[guestN]);
			}
			else if (n == 2)
				cameraCondition[guestN] = cg.changeCamera(cameraCondition[guestN]);
			else if (n == 3) {
				cout << name[guestN] << "���� �����ϼ̽��ϴ�." << endl;
				meetingRoomcondition = true;
			} //���÷� ���� ����,�����ڿ� ȣ��Ʈ ����
			else
			{
				cout << "�����Է¿���";
				break;
			}
		}
	}
	void gfunction() {
		while (1) {
			cout << "---------�޴�--------" << endl<<"1.����ũ 2.ī�޶� 3. ȭ����� 4.������ ��� 5. ������ ���� 6.�Խ�Ʈ �߰�: ";
			cin >> n;
			if (n == 1)
				ag.changeAudio(audioCondition[guestN]);
			else if (n == 2)
				cg.changeCamera(cameraCondition[guestN]);
			else if (n == 3) {
				sharing sg(name);
				sg.shareContents();
			}
			else if (n == 4) {
				lg.showList(name,sortP,guestN);
			}
			else if (n == 5)
			{
				cout << "�������� ����˴ϴ�.";
				break;
			}
			else if (n == 6)
			{
				guestN++;
				cout << "�̸��� �Է����ּ���: ";
				cin >> name[guestN];
				guest g(guestN, name, sortP);
				meetingRoomcondition = false;
				g.gbeforestart();
				g.gfunction();
			}
			else
			{
				cout << "�����Է¿���";
			}
		}
	}
};

