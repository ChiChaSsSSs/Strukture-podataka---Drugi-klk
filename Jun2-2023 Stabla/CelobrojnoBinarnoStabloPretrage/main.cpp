#include "BSTreeInt.h"

void main()
{
	BSTreeInt* stablo = new BSTreeInt();
	stablo->insert(15);
	stablo->insert(7);
	stablo->insert(20);
	stablo->insert(10);
	stablo->insert(9);
	stablo->insert(12);
	stablo->insert(13);
	stablo->insert(25);
	stablo->insert(22);
	stablo->insert(30);
	stablo->insert(29);
	stablo->insert(32);
	int pocetno = 0;
	BSTNodeInt* cvor = NULL;
	cout << stablo->razlikaPodstabala(stablo->search(15), &cvor, &pocetno)->getKey();
	delete stablo;
}
