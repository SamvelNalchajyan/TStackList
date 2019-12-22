#include <iostream>
#include <clocale>
#include <cstdlib>
#include "TStackList.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	/*......................................................*/
	TStack<int> a;
	a.Push(5);
	cout << 2 * a.Pop() << endl;
	/*......................................................*/
	system("pause");
	return 0;
}