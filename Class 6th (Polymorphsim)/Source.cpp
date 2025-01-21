#include<iostream>

using namespace std;

class Weapon
{
protected:
	int attack;
	int intersection;

#pragma region 오버라이드
	// 상위 클래스에 있는 함수를 하위 클래스에서
	// 재정의하여 사용하는 기능입니다.

public:
	void Attack()
	{
		cout << "Weapon Attack" << endl;
	}

	// 오버라이드는 상속 관계에서만 이루어지며,
	// 하위 클래스에서 함수를 재정의할 때 상위
	// 클래스의 함수 형태와 일치해야 합니다.
#pragma endregion
};

class Knife :public Weapon
{
private:
	int attack;
	int intersection;
public:
	void Attack()
	{
		attack = 5;
		cout << "Sting Attack " << attack << endl;
	}
};

class Knuckles :public Weapon
{
private:
	int attack;
	int intersection;
public:
	void Attack()
	{
		attack = 3;
		cout << "Knuckles Smash " << attack << endl;
	}

};


void Coordinate(int x, int y)
{
	cout << "X 의 값 : " << x << endl;
	cout << "Y 의 값 : " << y << endl;
	cout << endl;
}
void Coordinate(int x, int y, int z)
{
	cout << "X 의 값 : " << x << endl;
	cout << "Y 의 값 : " << y << endl;
	cout << "Z 의 값 : " << z << endl;
	cout << endl;
}
void Coordinate(float x, float y)
{
	cout << "X 의 값 : " << x << endl;
	cout << "Y 의 값 : " << y << endl;
	cout << endl;
}
void Coordinate(float x, float y, float z)
{
	cout << "X 의 값 : " << x << endl;
	cout << "Y 의 값 : " << y << endl;
	cout << "Z 의 값 : " << z << endl;
	cout << endl;
}


int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을 서로
	// 다른 방법으로 처리할 수 있는 작업입니다.

	// Weapon weapon;
	// 
	// Knife knife;
	// 
	// Knuckles knuckles;
	// 
	// weapon.Attack();
	// 
	// knife.Attack();
	// 
	// knuckles.Attack();

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정적 바인딩을 하지 않고, 실행 시간에 함수와 속성이
	// 결정될 수 있는 동적 바인딩을 가능하게 합니다.
#pragma endregion

#pragma region 함수의 오버로딩
	// 같은 이름의 함수를 매개 변수의 자료형과 매개변수의
	// 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.

	Coordinate(10, 24);
	Coordinate(5, 5, 5);

	Coordinate(5.75f, 6.35f);
	Coordinate(5.325f, 1.2345f, 3.125);


	// 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는
	// 인수의 형태를 보고 호출하므로, 반환형으로 함수의
	// 오버로딩을 생성할 수 없습니다.
#pragma endregion

	return 0;
}