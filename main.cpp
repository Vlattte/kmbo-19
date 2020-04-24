#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
	LinkedList copyList;
	copyList.insert(0, 1);
	copyList.insert(0, 2);

	LinkedList list;
	list.insert(0, 5);

	list = std::move(copyList); //здесь из списка copyList все узлы переносятся в list, при чем переносятся с удалением их из copyList

	for (size_t i = 0; i < copyList.size() - 1; i++)
		cout << "Старый список" << copyList[i] << endl;

	for (size_t i = 0; i < list.size() - 1; i++)
		cout << "Новый список" << list[i] << endl;
}

