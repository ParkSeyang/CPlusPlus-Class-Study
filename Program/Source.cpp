#include<iostream>

using namespace std;

template <typename T>
class List
{
private:
	int size;
	int index;
	T* pointer;
public:

};


int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터
	// 형식을 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수
	// 있는 기능입니다.
	
	List<int> intList;

#pragma endregion

	return 0;
}

