#include <iostream>
//#include<windows.h>
#include "RoboFunc.h"
using namespace std;

Robot inputBot()
{
	cout << "Введите координаты робота" << endl;
	Robot bot1;
	cin >> bot1.i >> bot1.j;
	return bot1;
}

int botDirect(Robot bot1)
{
	if ((bot1.direct == 4) || (bot1.direct == -4)) {
		bot1.direct = 0;
	}
	if ((bot1.direct == 5) || (bot1.direct == -3)) {
		bot1.direct = 1;
	}
	if ((bot1.direct == 6) || (bot1.direct == -2)) {
		bot1.direct = 2;
	}
	if ((bot1.direct == 7) || (bot1.direct == -1)) {
		bot1.direct = 3;
	}
	return bot1.direct;
}

void leftTurn(Robot bot1) {
	bot1.direct--;
	bot1.countL++;
	bot1.countR--;
}
void rightTurn(Robot bot1) {
	bot1.direct++;
	bot1.countR++;
	bot1.countL--;
}
void moveForvard(Robot bot1) {
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