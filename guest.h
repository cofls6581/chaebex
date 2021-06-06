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
		cout << name << "'s Personal Room입니다" << endl;
		while (meetingRoomcondition == false)
		{
			cout << "미팅룸 시작 전 설정(1.오디오 2.카메라 3.미팅시작)중 숫자 입력:";
			cin >> n;
			if (n == 1) {
				audioCondition[guestN]=ag.changeAudio(audioCondition[guestN]);
			}
			else if (n == 2)
				cameraCondition[guestN] = cg.changeCamera(cameraCondition[guestN]);
			else if (n == 3) {
				cout << name[guestN] << "님이 입장하셨습니다." << endl;
				meetingRoomcondition = true;
			} //미팅룸 들어가서 구현,참가자와 호스트 구별
			else
			{
				cout << "숫자입력오류";
				break;
			}
		}
	}
	void gfunction() {
		while (1) {
			cout << "---------메뉴--------" << endl<<"1.마이크 2.카메라 3. 화면공유 4.참가자 목록 5. 웹엑스 종료 6.게스트 추가: ";
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
				cout << "웹엑스가 종료됩니다.";
				break;
			}
			else if (n == 6)
			{
				guestN++;
				cout << "이름을 입력해주세요: ";
				cin >> name[guestN];
				guest g(guestN, name, sortP);
				meetingRoomcondition = false;
				g.gbeforestart();
				g.gfunction();
			}
			else
			{
				cout << "숫자입력오류";
			}
		}
	}
};

