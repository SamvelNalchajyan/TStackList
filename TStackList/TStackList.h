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
	TNode* pFirst;
public:
	TStackList();
};

template <class T>
TStackList<T>::TStackList()
{
	pFirst = NULL;
}