// RandomEnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
const int NUM = 5;
enum EnemyType{ Zombie,Vampire, Ghost, Witch};

struct Enemy {
	EnemyType type;
	string name;
	int health;
};

EnemyType CreateRandomEnemy() {
	srand(time(NULL));
	Enemy arr[5];
	for (int i = 0; i < 4; i++) {
		int a = rand() % 4;
		switch (a)
		{
		case 0:
			arr[i].type = Zombie;
			break;
		case 1:
			arr[i].type = Vampire;
			break;
		case 2:
			arr[i].type = Ghost;
			break;
		case 3:
			arr[i].type =  Witch;
			break;
		}
	}
	
}

int main()
{

    return 0;
}

