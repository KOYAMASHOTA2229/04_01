#pragma once
class Enemy
{
public:
	//�����o�֐�
	void Func1();
	void Func2();
	void Func3();
	void Update();
private:
	static void (Enemy::* spFuncTable[])();
};

