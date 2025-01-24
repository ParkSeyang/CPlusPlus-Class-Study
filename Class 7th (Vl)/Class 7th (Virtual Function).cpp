#include<iostream>
#include "../Program/Terran.h"
#include "../Program/Vulture.h"
#include "../Program/SiegeTank.h"
#include "../Program/Goliath.h"

using namespace std;


int main()
{
#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로
	// 재정의될 수 있는 함수입니다.

	// Terran * terran = new Goliath;
	// 
	// terran->Stats();
	// 
	// cout << "Terran 의 메모리 크기 : " << sizeof(Terran) << endl;

	// Vulture vulture;
	// vulture.Stats();
	// 
	// cout << endl;
	// 
	// SiegeTank siegetank;
	// siegetank.Stats();
	// 
	// cout << endl;
	// 
	// Goliath goliath;
	// goliath.Stats();

	// 가상 함수는 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
#pragma endregion

#pragma region 가상 함수 포인터

	//Terran* terran = new Terran;
	// int count = 0;
	int input = 0;

	//Terran* pointer = nullptr;
	// 
	// While 문을 이용한 반복문
	// while (count < 5)
	// {
	// 	cout << "Create Unit Number :";
	// 
	// 	cin >> input;
	// 
	// 	cout << endl;
	// 
	// 	switch (input)
	// 	{
	// 	case 1:pointer = new Vulture();
	// 		break;
	// 	case 2:pointer = new SiegeTank();
	// 		break;
	// 	case 3:pointer = new Goliath();
	// 		break;
	// 	default:continue;
	// 		break;
	// 	}
	// 
	// 	count++;
	// 
	// 	pointer->Stats();
	// 
	// 	cout << endl;
	// 
	// }
	// 

	// for문으로 만든 반복문
	for (int i = 0; i < 5; i++)
 {
	cout << "Create Unit Number : ";
	cin >> input;
	cout << endl;

	Terran* pointer = nullptr;

 	switch (input)
 	{
 	case 1:
 		pointer = new Vulture();
 		pointer->Stats();
 		break;
 
 	case 2:pointer = new SiegeTank;
		pointer->Stats();
 			break;
 
 	case 3:pointer = new Goliath;
		pointer->Stats();
 			break;

 	default: cout << "잘못된 값을 입력하였습니다." << endl;
		i--;
		continue;
 	}

 }

	// 가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가
	// 있을 때 객체 주소에 가상 함수 테이블을 추가합니다.
#pragma endregion

	return 0;
}