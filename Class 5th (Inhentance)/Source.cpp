#include <iostream>

using namespace std;

class Terran
{
protected:

	int health;
	int defense;
public:
	Terran()
	{
		cout << "Created Terran" << endl;
	}


};


class Marine :public Terran
{
private:

	int attack;
public:
	Marine()
	{
		health = 40;
		attack = 6;
		defense = 0;
		cout << "Created Marine" << endl;
	}
	void Stats()
	{
		cout << "Marine health : " << health << endl;
		cout << "Marine defence : " << defense << endl;
		cout << "Marine attack : " << attack << endl;

	}
};

class Firebat :public Terran
{
private:

	int attack;
public:
	Firebat()
	{
		health = 50;
		attack = 16;
		defense = 1;

		cout << "Created Firebat" << endl;
	}
	void Stats()
	{
		cout << "Firebat health : " << health << endl;
		cout << "Firebat defence : " << defense << endl;
		cout << "Firebat attack : " << attack << endl;

		cout << endl;
	}
};

class Ghost :public Terran
{
private:
	int attack;
public:
	Ghost()
	{
		health = 45;
		attack = 10;
		defense = 0;

		cout << "Created Ghost" << endl;
	}
	void Stats()
	{
		cout << "Ghost health : " << health << endl;
		cout << "Ghost defense : " << defense << endl;
		cout << "Ghost attack : " << attack << endl;

		cout << endl;
	}
};

int main()
{
#pragma region 캡슐화
	// 클래스 안에 서로 연관되어 잇는 속성과 기능들을 하나의 캡슐로
	// 만들어 데이터를 외부로부터 보호 하며, 사용자에게 인터페이스를
	// 제공하여 클래스의 기능을 사용하는 것입니다. 
	// (사용자로부터 내부에 있는 데이터를 사용하지 않고,
	// 인터페이스를 사용할 수 있도록 설정하는 것입니다.)
#pragma endregion

#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
	// 설정 해주는 기능입니다.

	Terran terran;

	Marine marine;
	marine.Stats();

	Firebat firebat;
	firebat.Stats();

	Ghost ghost;
	ghost.Stats();


	cout << "Terran 객체의 메모리 크기 : " << sizeof(Terran) << endl;
	cout << "Terran 객체의 메모리 크기 : " << sizeof(Marine) << endl;
	cout << "Terran 객체의 메모리 크기 : " << sizeof(Firebat) << endl;
	cout << "Terran 객체의 메모리 크기 : " << sizeof(Ghost) << endl;


	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
	// 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의
	// 메모리가 포함된 상태로 메모리의 크기가 결정됩니다.
#pragma endregion

	return 0;
}
