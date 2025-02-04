#include<iostream>

using namespace std;

class Packet
{

private:

	int errorCode = -9999;

public:
	 Packet()
	{
		cout << "Created Packet" << endl;
	}

	 const int & ErrorCode()
	 {
		 return errorCode;
	 }

	 ~Packet()
	{
		 cout << "Release Packet" << endl;
	}
};

class Resource
{
private:

public:
	Resource()
	{
		cout << " Created Resource " << endl;
	}
	~Resource()
	{
		cout << " Release Resource " << endl;
	}
};


int main()
{
#pragma region 스마트 포인터
	// 포인터를 시뮬레이션하는 동시에 자동으로 메모리 관리를
	// 해주며, 경계 확인과 같은 추가 기능을 제공하는 추상
	// 데이터 포인터 형식입니다.
	
	// 지역변수의 소멸로 만든 포인터(중 괄호안에 포인터1이 생성 되었다가 중괄호 밖으로 벗어나면 소멸됨)
	// int* pointer2 = nullptr;
	// {
	// 	int* pointer1 = new int;
	// 
	// 	*pointer1 = 100;
	// 
	// 	pointer2 = pointer1;
	// }
	// cout << "Pointer가 가리키는 값 : " << *pointer2 << endl;

#pragma region Unique Pointer(유니크 포인터)
	// 특정한 객체를 하나의 스마트 포이넡만 가리킬 수
	// 있도록 되어 있는 포인터입니다.

	// unique_ptr<Packet> uniquePointer = make_unique<Packet>();
	// 
	// cout << "UniquePointer Error Code : " << uniquePointer->ErrorCode() << endl;
	// 
	// unique_ptr<Packet> uniqueReference = std::move(uniquePointer);
	// 
	// cout << "UniquePointer Error Code : " << uniquePointer->ErrorCode() << endl;
	// 
	// cout << "uniqueReference Error Code : " << uniqueReference->ErrorCode() << endl;

#pragma endregion

#pragma region Shared Pointer(공유 포인터)
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
	// 모든 포인터 객체가 자원 객체를 필요하지 않을 때 자원 객체를
	// 해제하도록 설계 되어 있는 포인터 입니다.

	shared_ptr<Resource> oil = make_shared<Resource>();
	
	cout << " Reference Count : " << oil.use_count() << endl;

	shared_ptr<Resource> mineral = oil;

	cout << " Reference Count : " << oil.use_count() << endl;

#pragma endregion


#pragma endregion

	return 0;
}

