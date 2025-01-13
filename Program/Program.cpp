#include <iostream>

int data = 1; //data 영역

int main()
{
#pragma region 스트림
	// 시간의 흐름에 따라 연속적으로 발생하는 데이터의
	// 흐름입니다.

	// << (삽입 연산자)
	// 자신이 참조하고 있는 값을 반환하여 출력하는 연산자

	// 예시 
	// int errorCode = -9999;
	 
	// std::cout << "Hello World!" << std::endl;
	 
	// std::cout << "ErrorCode : " << errorCode << std::endl;

	// >> (추출 연산자)
	// 특정한 값을 입력받은 다음 버퍼에 저장하는 연산자입니다.

	// int n = 0;

	// std::cin >> n;

	// std::cout << "n의 값 : " << n << std::endl;

#pragma endregion

#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는데
	// 사용하는 연산자 입니다.

	// int data = 10; //stack 영역

	// std::cout << "지역 변수 data 의 값 : " << data << std::endl;
	// std::cout << "전역 변수 data 의 값 : " << ::data << std::endl;
	
	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가
	// 선언 되었을 때 가장 가까운 범위에 선언된 변수의 이름을 사용하는
	// 범위 규칙이 존재 하기 때문에 전역 변수가 호출되지 않습니다.

#pragma endregion

#pragma region 동적 할당(C++ 기준)
	// 프로그램을 실행 중에 필요한 만큼 메모리를
	// 할당하는 작업입니다.

	// int* p = new int;
	// 
	// *p = 100;
	// 
	// std::cout << "포인터 p의 주소 : " << p << std::endl;
	// std::cout << "p의 값 : " << *p << std::endl;
	// 
	// delete p;
	// 
	// p = nullptr;
	// 
	// p = new int[3];
	// 
	// std::cout << "p배열의 가리키는 주소" << p << std::endl;
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	p[i] = (i + 1) * 10;
	// 
	// 	std::cout << "p[" << i << "]" << "의 값 :" << p[i] << std::endl;
	// }
	// 
	// delete [ ]p;
	// p[0] = 10;
	// p[1] = 20;
	// p[2] = 30;
	// 
	// 
	// 
	// std::cout << "포인터 p[0]주소 값 : " << &point[0] << std::endl;
	// std::cout << "포인터 p[0]의 값 : " << &point[0] << std::endl;
	// std::cout << "포인터 p[1]주소 값" << &point[1] << std::endl;
	// std::cout << "포인터 p[1]주소 값" << &point[1] << std::endl;
#pragma endregion


}
