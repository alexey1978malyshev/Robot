#include <iostream>
#include <string>
#include "RoboFunc.h"

using namespace std;

const unsigned int MASS1 = 101;
const unsigned int MASS2 = 101;

const int SIZE = 50;
int main()
{
	setlocale(LC_ALL, "rus");
					
	int field[MASS1][MASS2]; //������ ������� ���� ��� �����������

	char prog[SIZE];			// ������� ������ - ������  �����
	
	Robot bot1;
	bot1 = inputBot();		//������ �������� ��������� ������

	cout << "������� ��������� : ";

	cin >> prog;

	for (int i = 0; i < MASS1; i++) {			//��������� ������� ������
		for (int j = 0; j < MASS2; j++) {
			field[i][j] = 0;
		}
	}		
		for (int k = 0; k < sizeof(prog); k++) {  //�����  ������� ������� ������  //.length()
			
			if (field[bot1.i][bot1.j] == 0) {

				if (prog[k] == 'L')
				{								//������� ������
					bot1.direct--;
					bot1.countL++;
					bot1.countR--;
				}
				if (prog[k] == 'R') 
				{								//������� �������
					bot1.direct++;
					bot1.countR++;
					bot1.countL--;
					}
				if (prog[k] == 'S')					//��� ������
				{
					if (bot1.direct == 0) {
						bot1.i++;
						bot1.countStep++;
					}
					if (bot1.direct == 1) {
						bot1.j++;
						bot1.countStep++;
					}
					if (bot1.direct == 2) {
						bot1.i--;
						bot1.countStep++;
					}
					if (bot1.direct == 3) {
						bot1.j--;
						bot1.countStep++;
					}

					
				}
				
			}
			
			//field[bot1.i][bot1.j] = 1;
			
			
		cout << -1 << endl;
			
			//break;	
				
		}
		int hAr[SIZE];
		for (int i = 0; i < hAr; i++) {

			if(hAr[i]==)
	}
	cout << "���������� ����� ������: ---|" << bot1.countStep << "|---" << endl;

	return 0;
}



 