#include "BSTreeInt.h"

void main()
{
	BSTreeInt* stablo = new BSTreeInt();
	stablo->insert(15);
	stablo->insert(10);
	stablo->insert(4);
	stablo->insert(11);
	stablo->insert(13);
	stablo->insert(2);
	stablo->insert(6);
	stablo->insert(22);
	stablo->insert(17);
	stablo->insert(20);
	stablo->insert(25);
	stablo->insert(30);
	cout << stablo->findSibiling(stablo->search(10))->key << endl;
	cout << stablo->findSibiling(stablo->search(17))->key << endl;
	cout << stablo->findSibiling(stablo->search(4))->key << endl;
}

