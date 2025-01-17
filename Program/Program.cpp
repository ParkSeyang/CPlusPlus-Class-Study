#include <iostream>

using namespace std;

class Terran
{
protected:

	int health;
	int defence;
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
		cout << "Created Marine" << endl;
	}
};

class Firebat :public Terran
{
private:
	int attack;
public:
	Firebat()
	{
		cout << "Created Firebat" << endl;
	}
}; 

class Ghost :public Terran
{
private:
	int attack;
public:
	Ghost()
	{
		cout << "Created Ghost" << endl;
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

	Firebat firebat;
	
	// Ghost ghost;

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
	// 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의
	// 메모리가 포함된 상태로 메모리의 크기가 결정됩니다.
#pragma endregion

	return 0;
}