#include "pch.h"
#include "Stack.h"


template<class T>
Stack<T>::Stack()
{

}


template<class T>
Stack<T>::~Stack()
{
	myList = NULL;
}

template<class T>
void Stack<T>::Push(T var)
{
	//Adding var to the End
	myList.push_back(var);
	
}

template<class T>
void Stack<T>::Flush() 
{
	//Using Listfunction to delete all Elements
	myList.clear();
}

template<class T>
T Stack<T>::Pop()
{
	T lastVar;
	lastVar = myList.back();
	myList.pop_back();

	return lastVar;
}

