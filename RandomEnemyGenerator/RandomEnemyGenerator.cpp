// RandomEnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

enum EnemyType{ Zombie,Vampire, Ghost, Witch};

struct Enemy {
	EnemyType type;
	string name;
	int health;
};

EnemyType CreateRandomEnemy() {
	int a = rand() % 5;
	switch (a)
	{
	case 0:

	default:
		break;
	}
}

int main()
{

    return 0;
}

