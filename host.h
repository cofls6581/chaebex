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
	}  //호스트 이름저장
	void hbeforestart() {
		cout << name << "'s Personal Room입니다" << endl;
		while (meetingRoomcondition == false)
		{
			cout << "미팅룸 시작 전 설정(1.오디오 2.카메라 3.미팅시작)중 숫자 입력:";
			cin >> n;
			if (n == 1) {
				audioCondition=ah.changeAudio(audioCondition);
			}
			else if (n == 2)
				cameraCondition=ch.changeCamera(cameraCondition);
			else if (n == 3) { 
				cout << name << "님이 방을 개설했습니다" << endl;
				meetingRoomcondition = true;
			} //미팅룸 들어가서 구현,참가자와 호스트 구별
			else
			{
				cout << "숫자입력오류";
				break;
			}
		}
	}
	void hfunction() {
		while (meetingRoomcondition == true) {
			cout << "---------메뉴--------" << endl << "1.오디오 2.카메라 3. 화면공유 4.참가자 목록 5.녹화 6. 웹엑스 종료: ";
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
				cout << "웹엑스가 종료됩니다.";
			}
			else
			{
				cout << "숫자입력오류";
				hfunction();
			}
		}
	}
};

