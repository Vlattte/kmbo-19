#include <iostream>
#include <LinkedList.h>

using namespace std;

int main()
{
	LinkedList l;
	l.pushBack(1);
	l.pushFront(0);
	l.pushBack(2);

	cout << "Stage 1: "; l.write(); cout << endl;

	l.insert(1, 10);
	cout << "Stage 2: "; l.write(); cout << endl;

	l.erase(1);
	cout << "Stage 2: "; l.write(); cout << endl;

	l.reverse();
	cout << "Stage 3: "; l.write(); cout << endl;

	return 0;
}
