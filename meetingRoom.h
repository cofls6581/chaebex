#pragma once
#include<iostream>
#include"audio.h"
#include"camera.h"
using namespace std;

class meetingRoom
{
	audio a;
	camera c;
	string name;
	int n;
	bool meetingRoomcondition = false;
public:
	void startMeeting( string name,audio &a, camera &c) {
		this->name = name;
		cout << name << "'s Personal Room�Դϴ�" << endl;
		while (meetingRoomcondition == false)
		{
		   cout <<"���÷� ���� �� ����(1.����ũ 2.ī�޶� 3.���ý���)�� ���� �Է�:";
			cin >> n;
			if (n == 1) {
				a.changeAudio();
			}
			else if (n == 2)
				c.changeCamera();
			else if (n == 3) 
				meetingRoomcondition = true;  //���÷� ���� ����,�����ڿ� ȣ��Ʈ ����
			else
			{
				cout << "�����Է¿���";
				break;
			}
		}
	}
};

