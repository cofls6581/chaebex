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
		cout << name << "'s Personal Room입니다" << endl;
		while (meetingRoomcondition == false)
		{
		   cout <<"미팅룸 시작 전 설정(1.마이크 2.카메라 3.미팅시작)중 숫자 입력:";
			cin >> n;
			if (n == 1) {
				a.changeAudio();
			}
			else if (n == 2)
				c.changeCamera();
			else if (n == 3) 
				meetingRoomcondition = true;  //미팅룸 들어가서 구현,참가자와 호스트 구별
			else
			{
				cout << "숫자입력오류";
				break;
			}
		}
	}
};

