// RandomEnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
const int NUM = 5;
enum EnemyType{ Zombie,Vampire, Ghost, Witch};

struct Enemy {
	EnemyType type;
	string name;
	int health;
};

Enemy CreateRandomEnemy() {
	int a = rand() % 5;
	switch (a)
	{
	case 0:
		return 
		break;
	case 1:
		return
		break;
	case 2:
		return 
		break;
	case 3:
		return 
		break;
	}
}

int main()
{

    return 0;
}

