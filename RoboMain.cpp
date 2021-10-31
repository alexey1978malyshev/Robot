#include <iostream>
#include <string>
#include "RoboFunc.h"

using namespace std;

const unsigned int MASS1 = 101;
const unsigned int MASS2 = 101;
int main()
{
	setlocale(LC_ALL, "rus");
					
	int field[MASS1][MASS2]; //задаем матрицу поля для перемещений

	string prog;			// входные данные - строка 
	
	Robot bot1;
	bot1 = inputBot();		//задаем стратовое положение робота

	cout << "Введите программу : ";

	cin >> prog;

	for (int i = 0; i < MASS1; i++) {			//заполняем матрицу нулями
		for (int j = 0; j < MASS2; j++) {
			field[i][j] = 0;
		}
	}		
		for (int k = 0; k <= prog.length(); k++) {  //обход  массива входных данных
			
			if (field[bot1.i][bot1.j] == 0) {

				if (prog[k] == 'L')
				{								//поворот налево
					leftTurn(bot1);
				}
				if (prog[k] == 'R') {				//поворот направо
					rightTurn(bot1);
					}
				if (prog[k] == 'S')					//шаг вперед
				{
					moveForvard(bot1);

					field[bot1.i][bot1.j] = 1;
				}
				
			}
			else
				cout << -1 << endl;
			
			
		}
		cout << "Количество шагов робота: ---|" << bot1.countStep << "|---" << endl;

	return 0;
}



 