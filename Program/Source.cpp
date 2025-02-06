#include <iostream>
#include <Vector>
using namespace std;

int main()
{
#pragma region Vector container

	std::vector<int> vector;
	
	vector.reserve(6);

	// vector.push_back(10);
	// vector.push_back(20);
	// vector.push_back(30);
	// vector.push_back(40);
	// vector.push_back(50);
	
	for (int i = 0; i < 5; i++)
	{
		vector.push_back((i+1)*10);
	}

	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << " " << endl;
	}
	
	cout << "Vector 의 사이즈(Size) : " << vector.size() << endl; // 현재 저장된 원소의 개수를 반환합니다.
	cout << "Vector 의 할당된 메모리 크기(Capacity) :" << vector.capacity() << endl; // 현재 할당된 메모리의 크기(벡터가 저장할 수 있는 최대 원소의 개수)를 반환합니다.
	
	vector.pop_back(); // 현재 맨뒤에있는 원소를 뽑아갑니다.
	vector.pop_back();

	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << " " << endl;
	}

	cout << "Vector 의 사이즈(Size) : " << vector.size() << endl;
	cout << "Vector 의 할당된 메모리 크기(Capacity) :" << vector.capacity() << endl;

#pragma endregion



	return 0;
}

