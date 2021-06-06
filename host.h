#pragma once
#include<iostream>
#include<string>
#include "audio.h"
#include "camera.h"
#include "record.h"
#include "sharing.h"
#include "showingList.h"
using namespace std;

class host
{
	audio ah;
	camera ch;
	string name;
	int guestN;
	int n;
	int sortP = 0;
	int audioCondition=0;
	int cameraCondition = 0;
	bool meetingRoomcondition = false;
public:
	host(string name,int guestN,int sortP) {
		this->name = name;
		this->sortP = sortP;
		if (sortP == 2)
			this->guestN = guestN = 1;
		else
			this->guestN = guestN;
	}  //ȣ��Ʈ �̸�����
	void hbeforestart() {
		cout << name << "'s Personal Room�Դϴ�" << endl;
		while (meetingRoomcondition == false)
		{
			cout << "���÷� ���� �� ����(1.����� 2.ī�޶� 3.���ý���)�� ���� �Է�:";
			cin >> n;
			if (n == 1) {
				audioCondition=ah.changeAudio(audioCondition);
			}
			else if (n == 2)
				cameraCondition=ch.changeCamera(cameraCondition);
			else if (n == 3) { 
				cout << name << "���� ���� �����߽��ϴ�" << endl;
				meetingRoomcondition = true;
			} //���÷� ���� ����,�����ڿ� ȣ��Ʈ ����
			else
			{
				cout << "�����Է¿���";
				break;
			}
		}
	}
	void hfunction() {
		while (meetingRoomcondition == true) {
			cout << "---------�޴�--------" << endl << "1.����� 2.ī�޶� 3. ȭ����� 4.������ ��� 5.��ȭ 6. ������ ����: ";
			cin >> n;
			if (n == 1) 
				audioCondition=ah.changeAudio(audioCondition);
			else if (n == 2)
				cameraCondition=ch.changeCamera(cameraCondition);
			else if (n == 3)
			{
				sharing sh(name);
				sh.shareContents();
			}
			else if (n == 4)
			{
				showingList lh;
				lh.showList(name,sortP);
			}
			else if (n == 5) {
				record rh;
				rh.Record();
			}
			else if (n == 6)
			{
				meetingRoomcondition = false;
				cout << "�������� ����˴ϴ�.";
			}
			else
			{
				cout << "�����Է¿���";
				hfunction();
			}
		}
	}
};

