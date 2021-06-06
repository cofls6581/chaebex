#pragma once
#include<iostream>
using namespace std;

class camera
{
	int cameraCondition;
public: 
	int changeCamera(int cameraCon) {

			this->cameraCondition = cameraCon;
			if (cameraCondition == 0) {
				cameraCondition = 1;
				cout << "카메라가 켜졌습니다." << endl;
				return cameraCondition;
			}
			else {
				cameraCondition = 0;
				cout << "카메라가 꺼졌습니다." << endl;
				return cameraCondition;
			}
		
	}//카메라 on/off 상황 저장
	
	
	/*void controlCamera(int guestN) {
		int n;
		cout << "게스트들의 카메라 설정 1.다 끄기 2.다 켜기";
		cin >> n;
		if (n == 1) {
			cout << "게스트들의 카메라를 다 끕니다.";
			
		}
		else if (n == 2) {
			cout << "게스트들의 카메라를 다 켭니다";
		}	
		else
			cout << "숫자입력오류입니다";
	}*/
};

