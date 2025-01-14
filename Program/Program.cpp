#include<iostream>

class GameObject
{
#pragma region 접근 지정자
	// 클래스 내부에 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자입니다.

	// public: 클래스 내부와 자기가 상속하고 있는 클래스 그리고
	//		   클래스 외부에서도 접근을 허용하는 지정자입니다.
	 
	// protected : 클래스 내부와 자기가 상속 하고 있는 클래스 까지만
	//             접근을 허용하는 지정자입니다.
	 
	// private : 클래스 내부까지만 접근을 허용하는 지정자입니다.

#pragma endregion
private:
	int x;
protected:
	int y;
public:
	int z;

	int Z()
	{
		return z;
	}
};

void swap(int &x, int &y)
{
	int temp = x;
	 x = y;
	y = temp;
}

int main()
{
#pragma region 클래스

	// 사용자 정의 데이터 유형으로 속성과 함수가 포함
	// 되어 있으며, 클래스를 통해 객체를 생성하여 접근
	// 하고 사용하는 집합체 입니다.

	// GameObject gameObject1; // 메모리생성 위치 [ ] -> stack
	 
	// gameObject1.z = 10;
	 
	// GameObject Gameproject1;
	// GameObject Gameproject2;
	// GameObject Gameproject3;
	 
	// Gameproject1.z = 5;
	// Gameproject2.z = 10;
	// Gameproject3.z = 20;
	 
	// std::cout << "gameObject 의 z 값 : " << gameObject1.z << std::endl;
	 
	// std::cout << "Gameproject1 z의 값 : " << Gameproject1.Z() << std::endl;
	// std::cout << "Gameproject2 z의 값 : " << Gameproject2.Z() << std::endl;
	// std::cout << "Gameproject3 z의 값 : " << Gameproject3.Z() << std::endl;

	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의
	// 메모리 영역에 포함되지만, 정적 변수와 함수의 메모리는
	// 클래스 영역에 포함되지 않습니다.
#pragma endregion

#pragma region 참조자
	// 어떤 변수의 메모리 공간에 다른 이름을
	// 지정하는 지정자입니다.

	// int data = 10;
	// 
	// int & reference = data;
	// 
	// std::cout << "data의 값 : " << data << std::endl;
	// std::cout << "reference의 값 : " << reference << std::endl;
	// 
	// reference = 20;
	// 
	// std::cout << "data의 값 : " << data << std::endl;
	// std::cout << "reference의 값 : " << reference << std::endl;

	int a = 10;
	int b = 20;

	swap(a, b);

	std::cout << "swap a 의 값 : " << a << std::endl;
	std::cout << "swap b 의 값 : " << b << std::endl;
#pragma endregion


	return 0;
}