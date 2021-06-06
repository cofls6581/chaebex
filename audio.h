#pragma once
#include<iostream>
//#include<vector>
using namespace std;

class audio 
{
	int audioCondition;
	//vector<guest>ggg;
public:
	int changeAudio(int audioCon) {
			this->audioCondition = audioCon;
			if (audioCondition == 0) {
				audioCondition = 1;
				cout << "오디오가 켜졌습니다." << endl;
				return audioCondition;
			}
			else {
				audioCondition = 0;
				cout << "오디오가 꺼졌습니다." << endl;
				return audioCondition;
			}
	} //오디오 on/off상태 저장
	
	/*void controlAudio(int guestN,vector<guest>&ggg) {
		int n;
		cout << "게스트들의 오디오 설정 1.다 끄기 2.다 켜기";
		cin >> n;
		if (n == 1)
		{
			for (int i = 0; i <= guestN; i++)
			{
				ggg[i].audioCondition = 0;
			}
			cout << "게스트들의 오디오를 다 끕니다.";
		}
		else if (n == 2)
		{
			for (int i = 0; i <= guestN; i++)
			{
				gg[i].audioCondition = 1;
			}
			cout << "게스트들의 오디오를 다 켭니다";
		}
		else
			cout << "숫자입력오류입니다";
	}*/
};

