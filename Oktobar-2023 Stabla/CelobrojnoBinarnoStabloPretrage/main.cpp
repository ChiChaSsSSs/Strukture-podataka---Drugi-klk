#include "BSTreeInt.h"

void main()
{
	BSTreeInt* stablo = new BSTreeInt();
	stablo->insert(15);
	stablo->insert(7);
	stablo->insert(40);
	stablo->insert(38);
	stablo->insert(42);
	stablo->insert(11);
	stablo->insert(9);
	stablo->insert(2);
	stablo->insert(3);
	stablo->insert(4);
	cout << stablo->findDeepestLeaf()->getKey();
}
