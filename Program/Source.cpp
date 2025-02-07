#include <iostream>
#include <stack>


using namespace std;

int main()
{
#pragma region Stack
	std::stack<int> stack;
	
	stack.push(10);
	stack.push(20);
	stack.push(30);

	cout << "Stack 의 Size : " << stack.size() << endl;

	while (stack.empty() == false)
	{
		cout << "data :" << stack.top() << endl;

		stack.pop();
	}
	
	
	
#pragma endregion

	return 0;
}

