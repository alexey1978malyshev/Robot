#include <iostream>
#include <string>
#include "RoboFunc.h"

using namespace std;

const unsigned int MASS1 = 101;
const unsigned int MASS2 = 101;
int main()
{
	setlocale(LC_ALL, "rus");
					
	int field[MASS1][MASS2]; //������ ������� ���� ��� �����������

	string prog;			// ������� ������ - ������ 
	
	Robot bot1;
	bot1 = inputBot();		//������ ��������� ��������� ������

	cout << "������� ��������� : ";

	cin >> prog;

	for (int i = 0; i < MASS1; i++) {			//��������� ������� ������
		for (int j = 0; j < MASS2; j++) {
			field[i][j] = 0;
		}
	}		
		for (int k = 0; k <= prog.length(); k++) {  //�����  ������� ������� ������
			
			if (field[bot1.i][bot1.j] == 0) {

				if (prog[k] == 'L')
				{								//������� ������
					leftTurn(bot1);
				}
				if (prog[k] == 'R') {				//������� �������
					rightTurn(bot1);
					}
				if (prog[k] == 'S')					//��� ������
				{
					moveForvard(bot1);

					field[bot1.i][bot1.j] = 1;
				}
				
			}
			else
				cout << -1 << endl;
			
			
		}
		cout << "���������� ����� ������: ---|" << bot1.countStep << "|---" << endl;

	return 0;
}



 