#pragma once
using namespace std;

class IStrategy
{
public:
	virtual void Algorithm() = 0;
};


class Strategy_1 : public IStrategy
{
public:
	void Algorithm();
};


class Strategy_2 : public IStrategy
{
public:
	void Algorithm();
};


class Context
{
	IStrategy* Strategy;
public:
public:
	void doSomething();
	void SetStrategy(IStrategy* StrategyP);
};




class Client
{
public:
	void MenuClient();
};
