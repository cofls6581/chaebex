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
				cout << "ī�޶� �������ϴ�." << endl;
				return cameraCondition;
			}
			else {
				cameraCondition = 0;
				cout << "ī�޶� �������ϴ�." << endl;
				return cameraCondition;
			}
		
	}//ī�޶� on/off ��Ȳ ����
	
	
	/*void controlCamera(int guestN) {
		int n;
		cout << "�Խ�Ʈ���� ī�޶� ���� 1.�� ���� 2.�� �ѱ�";
		cin >> n;
		if (n == 1) {
			cout << "�Խ�Ʈ���� ī�޶� �� ���ϴ�.";
			
		}
		else if (n == 2) {
			cout << "�Խ�Ʈ���� ī�޶� �� �մϴ�";
		}	
		else
			cout << "�����Է¿����Դϴ�";
	}*/
};

