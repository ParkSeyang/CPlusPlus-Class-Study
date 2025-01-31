#include<iostream>

using namespace std;

class Vector2
{
private:
	int x;
	int y;

public:
	Vector2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	const int& X()
	{
		return x;
	}
	const int& Y()
	{
		return y;
	}
	Vector2& operator + (const Vector2& clone)
	{
		Vector2 vector(x + clone.x, y + clone.y);

		return vector;

	}
	Vector2& operator - (const Vector2& clone)
	{
		Vector2 vector(x - clone.x, y - clone.y);

		return vector;

	}
	Vector2& operator * (const Vector2& clone)
	{
		Vector2 vector(x * clone.x, y * clone.y);

		return vector;

	}
	Vector2& operator / (const Vector2& clone)
	{
		Vector2 vector(x / clone.x, y / clone.y);

		return vector;

	}
	Vector2& operator ++ ()
	{
		this->x++;
		this->y++;

		return *this;
	}
	Vector2& operator -- ()
	{
		this->x--;
		this->y--;

		return *this;
	}
	Vector2& operator ++ (int)
	{
		Vector2 clone(x, y);

		this->x++;
		this->y++;

		return clone;
	}
	Vector2& operator -- (int)
	{
		Vector2 clone(x, y);

		this->x--;
		this->y--;

		return clone;
	}
};



int main()
{
#pragma region 연산자 오버로딩
	// 

	Vector2 direction1(2, 1);
	Vector2 direction2(4, 5);

	Vector2 direction = direction1 + direction2;
	// Vector2 direction3 = direction1 - direction2;
	// Vector2 direction4 = direction1 * direction2;
	// Vector2 direction5 = direction1 / direction2;


	// cout << direction.X() << " " << direction.Y() << endl;
	// cout << direction3.X() << " " << direction3.Y() << endl;
	// cout << direction4.X() << " " << direction4.Y() << endl;
	// cout << direction5.X() << " " << direction5.Y() << endl;

	// 전위 증감 연산자 테스트
	// ++direction;
	// 
	// cout << direction.X() << " " << direction.Y() << endl;
	// 
	// --direction;
	// 
	// cout << direction.X() << " " << direction.Y() << endl;

	// 후위 증감 연산자 테스트

	// cout << direction.X() << endl;
	// 
	// direction++;
	// 
	// cout << direction.X() << " " << direction.Y() << endl;
	// 
	// direction--;
	// 
	// cout << direction.X() << " " << direction.Y() << endl;

#pragma endregion



	return 0;
}