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
		cout << "1.미팅방생성(호스트) 2.미팅방입장(게스트) 중 하나를 선택해주세요: ";//호스트,게스트 분별
		cin >> sortP;
		cout << "이름을 입력해주세요: ";
		cin >> name;
		if (sortP == 1) {
			host h(name, guestN, sortP); 	      //호스트 객체 생성,호스트가 방종료하면 게스트도 자동으로 나가짐
			h.hbeforestart();
			h.hfunction();
			break;
		}
		else if (sortP == 2) {
			cout << "룸넘버를 입력해주세요(띄어쓰기 금지):";
			cin >> roomN; //게스트 객체 생성,미팅방 번호입력
			guestN++;
			guest g(guestN, name, sortP);
			g.gbeforestart();
			g.gfunction();
		}
		else {
			cout << "숫자입력오류";
			break;
		}
	}
}
