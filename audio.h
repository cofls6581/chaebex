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
				cout << "������� �������ϴ�." << endl;
				return audioCondition;
			}
			else {
				audioCondition = 0;
				cout << "������� �������ϴ�." << endl;
				return audioCondition;
			}
	} //����� on/off���� ����
	
	/*void controlAudio(int guestN,vector<guest>&ggg) {
		int n;
		cout << "�Խ�Ʈ���� ����� ���� 1.�� ���� 2.�� �ѱ�";
		cin >> n;
		if (n == 1)
		{
			for (int i = 0; i <= guestN; i++)
			{
				ggg[i].audioCondition = 0;
			}
			cout << "�Խ�Ʈ���� ������� �� ���ϴ�.";
		}
		else if (n == 2)
		{
			for (int i = 0; i <= guestN; i++)
			{
				gg[i].audioCondition = 1;
			}
			cout << "�Խ�Ʈ���� ������� �� �մϴ�";
		}
		else
			cout << "�����Է¿����Դϴ�";
	}*/
};

