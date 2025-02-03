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

	List()
	{
		int Size = 0;
		int index = 0;
		pointer = nullptr;
	}
	void Resize(int size)
	{
		this->size = size;
		pointer = new T[size];

		for (int i = 0; i < size; i++)
		{
			pointer[i] = 0;
		}
	}
	void Add(T data)
	{
		if (index >= size)
		{
			cout << "Index Out of Range " << endl;
		}
		else
		{
			pointer[index++] = data;
		}
		
	}
	const T & operator[] (int index)
	{
		return pointer[index];
	}
	~List()
	{
		if (pointer != nullptr)
		{
			delete[] pointer;
			// delete pointer 를하게되면 Heap 영역의 시작주소만 초기화 되기때문에 그뒤에있는 주소들은
			// 소멸이안되서 메모리누수 가 발생한다. 그래서 []라는 대입연산자를 사용해서 없애줘야한다. 
		}
	}

};
template <typename T>
bool Same(T argument, T parameter)
{
	
	if (argument == parameter)
	{
		cout << " True " << endl;
	}
	else if(argument != parameter)
	{
		cout << " False " << endl;
	}
	else
	{
		cout << "Error" << endl;
	}
	 return argument == parameter;


}

template<typename T>
bool Same(const char* x,const char * y)
{
	return x ==  y;
}

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터
	// 형식을 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수
	// 있는 기능입니다.
	
	// List<int> list;
	// list.Resize(5);
	// list.Add(1);
	// list.Add(2);
	// list.Add(3);
	// list.Add(4);
	// list.Add(5);
	// list.Add(6);
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	cout << list[i] << endl;
	// }

#pragma endregion

#pragma region 템플릿 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶은 경우
	// 특정한 자료형만 다른 형식으로 동작시키는 템플릿 기능입니다.

	cout << Same('A', 'B') << endl;
	cout << Same(15.7f,12.5f) << endl;
	cout << Same(10,10) << endl;
	cout << Same("Apple", "Apple") << endl;
	


#pragma endregion

	return 0;
}

