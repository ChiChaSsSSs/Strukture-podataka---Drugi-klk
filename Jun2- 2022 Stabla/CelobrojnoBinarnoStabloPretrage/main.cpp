#include "BSTreeInt.h"

void main()
{
	BSTreeInt* stablo = new BSTreeInt();
	stablo->insert(15, 8);
	stablo->insert(10, 12);
	stablo->insert(22, 16);
	stablo->insert(4, 17);
	stablo->insert(11, 16);
	stablo->insert(17, 17);
	stablo->insert(25, 8);
	stablo->insert(2, 1);
	stablo->insert(6, 4);
	stablo->insert(13, 3);
	stablo->insert(20, 9);
	stablo->insert(30, 2);
	cout << stablo->brojCvorova(10, 15);
	delete stablo;
}
