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
					
	int field[MASS1][MASS2]; //задаем матрицу поля для перемещений

	char prog[SIZE];			// входные данные - строка  чаров
	
	Robot bot1;
	bot1 = inputBot();		//задаем статовое положение робота

	cout << "Введите программу : ";

	cin >> prog;

	for (int i = 0; i < MASS1; i++) {			//заполняем матрицу нулями
		for (int j = 0; j < MASS2; j++) {
			field[i][j] = 0;
		}
	}		
		for (int k = 0; k < sizeof(prog); k++) {  //обход  массива входных данных  //.length()
			
			if (field[bot1.i][bot1.j] == 0) {

				if (prog[k] == 'L')
				{								//поворот налево
					bot1.direct--;
					bot1.countL++;
					bot1.countR--;
				}
				if (prog[k] == 'R') 
				{								//поворот направо
					bot1.direct++;
					bot1.countR++;
					bot1.countL--;
					}
				if (prog[k] == 'S')					//шаг вперед
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
	cout << "Количество шагов робота: ---|" << bot1.countStep << "|---" << endl;

	return 0;
}



 