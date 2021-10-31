#pragma once
#include <iostream>
using namespace std;



	struct Robot {
		int i, j, direct = 0, countStep = 0, countL = 0, countR = 0;
	};

	Robot inputBot();

	int botDirect(Robot bot1);
	void leftTurn(Robot bot1);
	void rightTurn(Robot bot1);
	void moveForvard(Robot bot1);