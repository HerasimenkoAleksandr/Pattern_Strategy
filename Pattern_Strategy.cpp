
#include <iostream>
#include "Header.h"

using namespace std;



int main()
{
	Client S;

	S.MenuClient();
	return 0;
}




void  Strategy_1::Algorithm()
{
	cout << "Strategy_111111 usage " << endl;
}

void  Strategy_2::Algorithm()
{
	cout << "Strategy_2222222 usage " << endl;
}


void Context::doSomething()
{

	cout << "Context: ";
	Strategy->Algorithm();

}
void Context::SetStrategy(IStrategy* StrategyP)
{
	Strategy = move(StrategyP);
}

void Client::MenuClient()
{
	int a;
	cout << "Choose a strategy:" << endl;
	cout << "Enter 1 for Strategy_1" << endl;
	cout << "Enter 2 for Strategy_2" << endl;
	cin >> a;
	Context A;
	if (a == 1)
	{

		A.SetStrategy(new Strategy_1);
	}
	else
	{
		A.SetStrategy(new Strategy_2);
	}

	A.doSomething();
}