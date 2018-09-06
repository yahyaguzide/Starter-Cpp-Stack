#include <list>

#pragma once
template<class T> class Stack
{
public:
	Stack();
	~Stack();

	void Push(T var);
	void Flush();
	T Pop();
	
private:
	//List makes everything easy
	std::list<T> myList;
	
};

