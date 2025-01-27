#include<iostream>
#include "../Program/Brush.h"
#include "../Program/Pencil.h"
#include "../Program/Fruit.h"
#include "../Program/Banana.h"
using namespace std;

void Position(int x, int y = 2)
{	// 기본 매개변수의 주의점.
	// 기본 매개 변수를 저장하려면 오른쪽에서 부터 
	// 값을 지정해주어야 합니다.
	cout << "기본 매개변수의 x 의 값 : " << x << endl;
	cout << "기본 매개변수의 y 의 값 : " << y << endl;

}
int main()
{
#pragma region 추상 클래스
	// 함수에 특정한 내용이 구현되어 있지 않고,
	// 선언만 되어 있는 클래스입니다.

	// Paint* paint = new Brush();
	// paint->Draw();
	// 
	// delete paint;
	// 
	// paint = new Pencil();
	// 
	// paint->Draw();
	// 
	// delete paint;


		// while (count < 3)
		// {
		// 	cin >> input;
		// 	switch (input)
		// 	{
		// 	case 1: new Brush();
		// 		paint->Draw();
		// 
		// 	case 2: new Pencil();
		// 		paint->Draw();
		// 	default:cout << "잘못된 도구값 입니다." << endl;
		// 		continue;
		// 		break;
		// 	}
		// 	count++;
		// 	cout << endl;
		// }




	// 추상 클래스는 정의되어 있지 않은 함수가 있으므로,
	// 객체를 생성할 수 없습니다.
#pragma endregion

#pragma region 가상 소멸자
	// 객체가 소멸될 때 현재 참조하고 있는 객체와
	// 상관없이 모두 호출되는 소멸자입니다.

	// Fruit* fruit = new Banana();
	// 
	// delete fruit;

	// 상속된 객체가 해제될 때 하위 클래스의 소멸자가 먼저
	// 실행되고, 상위 클래스의 소멸자가 실행되어야 하기 때문에
	// 실행 시간에 메모리에 할당된 객체를 확인하고 차례대로 소멸시켜야 합니다.
#pragma endregion

#pragma region 기본 매개변수
	// 함수의 매개 변수에 값이 전달되지 않았을 때
	// 미리 값을 설정해놓은 매개 변수 입니다.

	// Position(4);

#pragma endregion


	return 0;
}