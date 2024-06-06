#include "Enemy.h"
#include <stdio.h>

void Enemy::Func1()
{
	printf("Ú‹ß");
}

void Enemy::Func2()
{
	printf("ŽËŒ‚");
}

void Enemy::Func3()
{
	printf("—£’E");
}


void(Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Func1,
	&Enemy::Func2,
	&Enemy::Func3
};

void Enemy::Update()
{
	(this->*spFuncTable[0])();
	(this->*spFuncTable[1])();
	(this->*spFuncTable[2])();
}