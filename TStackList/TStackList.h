#pragma once

template <class T>
struct TNode
{
	T val;
	TNode* pNext;
};

template <class T>
class TStackList
{
private:
	TNode<T>* pFirst;
public:
	TStackList();
	~TStackList();

	void Push(T a);
	T Pop();
};

template <class T>
TStackList<T>::TStackList()
{
	pFirst = NULL;
}

template <class T>
TStackList<T>::~TStackList()
{
	TNode<T>* tmp = pFirst;
	while (pFirst != NULL)
	{
		pFirst = pFirst->pNext;
		delete tmp;
		tmp = pFirst;
	}
}

template <class T>
void TStackList<T>::Push(T a)
{
	TNode<T>* tmp = new TNode<T>;
	tmp->val = a;
	tmp->pNext = pFirst;
	pFirst = tmp;
}

template <class T>
T TStackList<T>::Pop()
{
	T tmp = pFirst->val;
	pFirst = pFirst->pNext;
	return tmp;
}